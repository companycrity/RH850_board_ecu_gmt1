<%inherit file="Base.html.tpl"/>
<%namespace name="format" file="Format.html.tpl"/>
<% import Model %>
<h1>${document.title}</h1>
% for idx1, part in enumerate(document.parts):
	<h2>${idx1 + 1} ${part.heading}</h2>
	% for idx2, piece in enumerate(part.pieces):
		<h3>${idx1 + 1}.${idx2 + 1} ${piece.heading}</h3>
		% for chunk in piece.chunks:
			% if isinstance(chunk, Model.Paragraph):
				<p>${format.texts(chunk)}</p>
			% elif isinstance(chunk, Model.Heading):
				<h${chunk.level + 2}>
					${chunk.text}
				</h${chunk.level + 2}>
			% elif isinstance(chunk, Model.Quote):
				<blockquote>${format.texts(chunk)}</blockquote>
			% elif isinstance(chunk, Model.Table):
				<table class="table ${'table-bordered' if chunk.bordered else ''} ${chunk.position}">
					% if chunk.head:
						<thead>
							% for row in chunk.head:
								<tr>
									% for cell in row.columns:
										${format.cell('th', cell)}
									% endfor;
								</tr>
							% endfor;
						</thead>
					% endif;
					% if chunk.body:
						<tbody>
							% for row in chunk.body:
								<tr>
									% for cell in row.columns:
										${format.cell('td', cell)}
									% endfor;
								</tr>
							% endfor;
						</tbody>
					% endif;
					% if chunk.foot:
						<tfoot>
							% for row in chunk.foot:
								<tr>
									% for cell in row.columns:
										${format.cell('td', cell)}
									% endfor;
								</tr>
							% endfor;
						</tfoot>
					% endif;
				</table>
			% elif isinstance(chunk, Model.List):
				% if chunk.ordered:
					<ol>
				% else:
					<ul>
				% endif;
					% for item in chunk.items:
						<li>${format.texts(item)}</li>
					% endfor;
				% if chunk.ordered:
					</ol>
				% else:
					</ul>
				% endif;
			% endif;
		% endfor;
	% endfor;
% endfor;