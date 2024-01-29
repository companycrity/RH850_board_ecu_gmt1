<!DOCTYPE HTML>
<html lang="en">
	<head>
		<meta charset="utf-8">
		<meta http-equiv="X-UA-Compatible" content="IE=edge">
		<meta name="viewport" content="width=device-width, initial-scale=1">
		<title>${document.title}</title>
		${assets.get('js')}
		${assets.get('css')}
		<style type="text/css">
			th.rotate {
				height: 200px;
				white-space: nowrap;
			}
			th.rotate > div {
				transform:
					translate(10px, 0px)
					rotate(270deg);
				width: 30px;
			}
			.table  {
				width: auto;
			}
			.table.left {
				float: left;
			}
			.table.center {
				margin-left: auto;
				margin-right: auto;
			}
			.table.right {
				float: right;
			}
			h1 {
				border-bottom: 3px double #444444;
				clear: both;
			}
			h2 {
				border-bottom: 2px solid #444444;
				clear: both;
			}
			h3 {
				border-bottom: 1px solid #444444;
				clear: both;
			}
			h4 {
				border-bottom: 1px dashed #444444;
			}
			h5 {
				border-bottom: 1px dotted #444444;
			}
		</style>
	</head>
	<body>
		<div class="container">
			${self.body()}
		</div>
	</body>
</html>