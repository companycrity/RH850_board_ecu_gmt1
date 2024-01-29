# ======================================================================================================================
#      File: Model/Markdown.py
#   Project: EA4 Release Notes Generator
#   Created: 2017-01-04
#  Modified: 2017-01-04
#    Author: Jared Julien
#     Email: jared.julien@nexteer.com
# Copyright: (c) 2017 Nexteer Automotive
#
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2017-01-04  1     Jared     Initial file creation based upon mistune Markdown converter
# ----------------------------------------------------------------------------------------------------------------------
# ======================================================================================================================
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
import re
import Components


# ======================================================================================================================
# Regular Expressions
# ----------------------------------------------------------------------------------------------------------------------
_key_pattern = re.compile(r'\s+')
_nonalpha_pattern = re.compile(r'\W')
_escape_pattern = re.compile(r'&(?!#?\w+;)')
_block_quote_leading_pattern = re.compile(r'^ *> ?', flags=re.M)
_inline_tags = [
    'a', 'em', 'strong', 'small', 's', 'cite', 'q', 'dfn', 'abbr', 'data',
    'time', 'var', 'samp', 'kbd', 'sub', 'sup', 'i', 'b', 'u', 'mark',
    'ruby', 'rt', 'rp', 'bdi', 'bdo', 'span', 'br', 'wbr', 'ins', 'del',
    'img', 'font',
]
_pre_tags = ['pre', 'script', 'style']
_valid_end = r'(?!:/|[^\w\s@]*@)\b'
_valid_attr = r'''\s*[a-zA-Z\-](?:\=(?:"[^"]*"|'[^']*'))*'''
_block_tag = r'(?!(?:%s)\b)\w+%s' % ('|'.join(_inline_tags), _valid_end)
_scheme_blacklist = ('javascript', 'data', 'vbscript')


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def _pure_pattern(regex):
    pattern = regex.pattern
    if pattern.startswith('^'):
        pattern = pattern[1:]
    return pattern

# ----------------------------------------------------------------------------------------------------------------------
def escape(text, quote=False, smart_amp=True):
    """Replace special characters "&", "<" and ">" to HTML-safe sequences.

    The original cgi.escape will always escape "&", but you can control
    this one for a smart escape amp.

    :param quote: if set to True, " and ' will be escaped.
    :param smart_amp: if set to False, & will always be escaped.
    """
    if smart_amp:
        text = _escape_pattern.sub('&amp;', text)
    else:
        text = text.replace('&', '&amp;')
    text = text.replace('<', '&lt;')
    text = text.replace('>', '&gt;')
    if quote:
        text = text.replace('"', '&quot;')
        text = text.replace("'", '&#39;')
    return text

# ----------------------------------------------------------------------------------------------------------------------
def preprocessing(text, tab=4):
    text = text.replace('\t', ' ' * tab)
    text = text.replace('\u00a0', ' ')
    text = text.replace('\u2424', '\n')
    pattern = re.compile(r'^ +$', re.M)
    return pattern.sub('', text)


# ======================================================================================================================
# Inline (Text) Processing Classes
# ----------------------------------------------------------------------------------------------------------------------
class InlineGrammar(object):
    """Grammars for inline level tokens."""

    escape = re.compile(r'^\\([\\`*{}\[\]()#+\-.!_>~|])')  # \* \+ \! ....
    double_emphasis = re.compile(
        r'^_{2}([\s\S]+?)_{2}(?!_)'  # __word__
        r'|'
        r'^\*{2}([\s\S]+?)\*{2}(?!\*)'  # **word**
    )
    emphasis = re.compile(
        r'^\b_((?:__|[^_])+?)_\b'  # _word_
        r'|'
        r'^\*((?:\*\*|[^\*])+?)\*(?!\*)'  # *word*
    )
    strikethrough = re.compile(r'^~~(?=\S)([\s\S]*?\S)~~')  # ~~word~~
    text = re.compile(r'^[\s\S]+?(?=[\\<!\[_*`~]|https?://| {2,}\n|$)')

# ----------------------------------------------------------------------------------------------------------------------
class InlineLexer(object):
    """Inline level lexer for inline grammars."""
    grammar_class = InlineGrammar

    default_rules = [
        'escape', 'double_emphasis', 'emphasis', 'strikethrough', 'text',
    ]

    def __init__(self, rules=None):
        if not rules:
            rules = self.grammar_class()

        self.rules = rules

    def __call__(self, text, rules=None):
        return self.output(text, rules=rules)

    def output(self, text, nested=None, rules=None):
        text = text.rstrip('\n')
        if not rules:
            rules = list(self.default_rules)

        output = []

        def manipulate(text):
            for key in rules:
                pattern = getattr(self.rules, key)
                matches = pattern.match(text)
                if not matches:
                    continue
                out = getattr(self, 'output_%s' % key)(matches, nested)
                if out is not None:
                    return matches, out
            return False

        while text:
            ret = manipulate(text)
            if ret is not False:
                matches, out = ret
                output.append(out)
                text = text[len(matches.group(0)):]
                continue
            if text:
                raise RuntimeError('Infinite loop at: %s' % text)

        return output

    def output_escape(self, matches, nested):
        return Components.Text(matches.group(1))

    def output_double_emphasis(self, matches, nested):
        value = matches.group(2) or matches.group(1)
        text = nested or Components.Text(value)
        text.bold = True
        return self.output(value, text)

    def output_emphasis(self, matches, nested):
        value = matches.group(2) or matches.group(1)
        text = nested or Components.Text(value)
        text.italic = True
        return self.output(value, text)

    def output_strikethrough(self, matches, nested):
        value = matches.group(1)
        text = nested or Components.Text(value)
        text.strikethrough = True
        return self.output(value, text)

    def output_text(self, matches, nested):
        value = matches.group(0)
        text = nested or Components.Text(value)
        return text


# ======================================================================================================================
# Block Processing Classes
# ----------------------------------------------------------------------------------------------------------------------
class BlockGrammar(object):
    """Grammars for block level tokens."""

    heading = re.compile(r'^ *(#{1,6}) *([^\n]+?) *#* *(?:\n+|$)')
    lheading = re.compile(r'^([^\n]+)\n *(=|-)+ *(?:\n+|$)')
    block_quote = re.compile(r'^( *>[^\n]+(\n[^\n]+)*\n*)+')
    def_links = re.compile(
        r'^ *\[([^^\]]+)\]: *'  # [key]:
        r'<?([^\s>]+)>?'  # <link> or link
        r'(?: +["(]([^\n]+)[")])? *(?:\n+|$)'
    )
    def_footnotes = re.compile(
        r'^\[\^([^\]]+)\]: *('
        r'[^\n]*(?:\n+|$)'  # [^key]:
        r'(?: {1,}[^\n]*(?:\n+|$))*'
        r')'
    )
    list_block = re.compile(
        r'^( *)([*+-]|\d+\.) [\s\S]+?'
        r'(?:'
        r'\n+(?=\1?(?:[-*_] *){3,}(?:\n+|$))'  # hrule
        r'|\n+(?=%s)'  # def links
        r'|\n+(?=%s)'  # def footnotes
        r'|\n{2,}'
        r'(?! )'
        r'(?!\1(?:[*+-]|\d+\.) )\n*'
        r'|'
        r'\s*$)' % (
            _pure_pattern(def_links),
            _pure_pattern(def_footnotes),
        )
    )
    list_item = re.compile(
        r'^(( *)(?:[*+-]|\d+\.) [^\n]*'
        r'(?:\n(?!\2(?:[*+-]|\d+\.) )[^\n]*)*)',
        flags=re.M
    )
    list_bullet = re.compile(r'^ *(?:[*+-]|\d+\.) +')
    paragraph = re.compile(
        r'^((?:[^\n]+\n?(?!'
        r'%s|%s|%s|%s|%s'
        r'))+)\n*' % (
            _pure_pattern(list_block).replace(r'\1', r'\3'),
            _pure_pattern(heading),
            _pure_pattern(lheading),
            _pure_pattern(block_quote),
            '<' + _block_tag,
        )
    )
    table = re.compile(
        r'^ *\|(.+)\n *\|( *[-:]+[-| :]*)\n((?: *\|.*(?:\n|$))*)\n*'
    )
    text = re.compile(r'^[^\n]+')

# ----------------------------------------------------------------------------------------------------------------------
class BlockLexer(object):
    """Block level lexer for block grammars."""
    grammar_class = BlockGrammar

    default_rules = [
        'heading',
        'lheading', 'block_quote',
        'list_block',
        'table', 'paragraph', 'text'
    ]

    def __init__(self, rules=None):
        self.tokens = []

        if not rules:
            rules = self.grammar_class()

        self.rules = rules
        self.inline = InlineLexer()

    def __call__(self, text, rules=None):
        return self.parse(text, rules)

    def parse(self, text, rules=None):
        text = text.rstrip('\n')

        if not rules:
            rules = self.default_rules

        def manipulate(text):
            for key in rules:
                rule = getattr(self.rules, key)
                matches = rule.match(text)
                if not matches:
                    continue
                getattr(self, 'parse_%s' % key)(matches)
                return matches
            return False

        while text:
            matches = manipulate(text)
            if matches is not False:
                text = text[len(matches.group(0)):]
                continue
            if text:
                raise RuntimeError('Infinite loop at: %s' % text)
        return self.tokens

    def parse_heading(self, matches):
        heading = Components.Heading()
        heading.level = len(matches.group(1))
        heading.text = matches.group(2)
        self.tokens.append(heading)

    def parse_lheading(self, matches):
        heading = Components.Heading()
        heading.text = matches.group(1)
        heading.level = 1 if matches.group(2) == '=' else 2
        self.tokens.append(heading)

    def parse_list_block(self, matches):
        bullet = matches.group(2)
        list = Components.List()
        list.ordered = '.' in bullet
        for cap in self.rules.list_item.findall(matches.group(0)):
            text = cap[0]
            # strip the bullet
            space = len(text)
            text = self.rules.list_bullet.sub('', text)
            # outdent
            if '\n ' in text:
                space = space - len(text)
                pattern = re.compile(r'^ {1,%d}' % space, flags=re.M)
                text = pattern.sub('', text)
            item = Components.Item()
            item.texts = self.inline(text)
            list.items.append(item)
        self.tokens.append(list)

    def parse_block_quote(self, matches):
        # clean leading >
        cap = _block_quote_leading_pattern.sub('', matches.group(0))
        quote = Components.Quote()
        quote.texts = self.inline(cap)
        self.tokens.append(quote)

    def parse_table(self, matches):
        header = re.sub(r'^ *| *\| *$', '', matches.group(1))
        header = re.split(r' *\| *', header)
        align = re.sub(r' *|\| *$', '', matches.group(2))
        align = re.split(r' *\| *', align)

        # Convert alignment cells to string names
        for index, value in enumerate(align):
            if re.search(r'^ *-+: *$', value):
                align[index] = 'right'
            elif re.search(r'^ *:-+: *$', value):
                align[index] = 'center'
            elif re.search(r'^ *:-+ *$', value):
                align[index] = 'left'
            else:
                align[index] = None

        body = re.sub(r'(?: *\| *)?\n$', '', matches.group(3))
        rows = body.split('\n')
        for index, row in enumerate(rows):
            row = re.sub(r'^ *\| *| *\| *$', '', row)
            rows[index] = re.split(r' *\| *', row)

        table = Components.Table()

        # Generate header row
        row = Components.Row()
        for index, text in enumerate(header):
            cell = Components.Cell(text)
            if align[index]:
                cell.horizontal = align[index]
            row.columns.append(cell)
        table.head.append(row)

        # Generate body
        for columns in rows:
            row = Components.Row()
            for index, column in enumerate(columns):
                cell = Components.Cell()
                cell.texts = self.inline(column)
                if align[index]:
                    cell.horizontal = align[index]
                row.columns.append(cell)
            table.body.append(row)

        self.tokens.append(table)

    def parse_paragraph(self, matches):
        text = matches.group(1).rstrip('\n')
        paragraph = Components.Paragraph()
        paragraph.texts = self.inline(text)
        self.tokens.append(paragraph)

    def parse_text(self, matches):
        text = matches.group(0)
        paragraph = Components.Paragraph()
        paragraph.texts = self.inline(text)
        self.tokens.append(paragraph)


# ======================================================================================================================
# Main Function
# ----------------------------------------------------------------------------------------------------------------------
def toModel(text):
    block = BlockLexer()
    return block.parse(preprocessing(text))


# End of File: Model/Markdown.py