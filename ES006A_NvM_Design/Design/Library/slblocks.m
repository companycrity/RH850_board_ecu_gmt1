function blkStruct = slblocks
		% This function specifies that the library should appear
		% in the Library Browser
		% and be cached in the browser repository

		Browser.Library = 'NxtrNvM';
		% 'mylib' is the name of the library

		Browser.Name = 'Nexteer NvM Library';
		% 'My Library' is the library name that appears in the Library Browser

		blkStruct.Browser = Browser;