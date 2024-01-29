function HelpFilePath = NvMLibHelp(FileName)
PathList = textscan(path, '%s', 'delimiter', pathsep);
for idx=1:numel(PathList{1})
    TestPath = [PathList{1}{idx},'\Documentation\',FileName];
    if (exist(TestPath, 'file') == 2)
        HelpFilePath = TestPath;
    end
end