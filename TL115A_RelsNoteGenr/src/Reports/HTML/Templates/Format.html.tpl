<%def name="text(input)">
	% if isinstance(input, list):
		% for sub in input:
			${text(sub)}
		% endfor;
	% else:
		<span style="
			% if input.bold:
				font-weight: bold;
			% endif;
			% if input.italic:
				font-style: italic;
			% endif;
			% if input.underline:
				text-decoration: underline;
			% endif;
			">
			${input.text}
		</span>
	% endif;
</%def>

<%def name="texts(chunk)">
	% for txt in chunk.texts:
		${text(txt)}
	% endfor;
</%def>

<%def name="cell(type, cell)">
	<${type} class="${cell.bgcolor if cell.bgcolor else ''} ${'rotate' if cell.rotate else ''}"
			style="text-align: ${cell.horizontal}; vertical-align: ${cell.vertical};">
		% for txt in cell.texts:
			${'<div>' if cell.rotate else ''}
			${text(txt)}
			${'</div>' if cell.rotate else ''}
		% endfor;
	</${type}>
</%def>