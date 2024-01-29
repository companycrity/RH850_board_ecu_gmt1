% This script converts fault injection information from DF001A_FltInj_DataDict.m into CSV spreadsheet format.
% You can then sort the spreadsheet by number, alphabetically by component name, etc.
% Created Aug 7, 2015 by Kevin Derry

clear
clc

run('DF001A_FltInj_DataDict')
list = who;

mystring = sprintf('DF001A Fault Injection - v%s\nReport generated on %s by running FltInj_ListAll script.\n\n',DF001A.Version,datestr(now));
mystring = sprintf('%sValue,Component,Signal,Software Name,Description',mystring);
for i = 1:size(list)
    theclass = class(eval(list{i}));
    if strcmp(theclass,'DataDict.Constant') 
        const = list{i};
        if ~isempty(regexp(const,'^FLTINJ_[A-Za-z0-9]+_[A-Za-z0-9]+','once'))
            num = eval([const '.EngVal;']);
            idx = strfind(const,'_');
            swc = const(idx(1)+1:idx(2)-1);
            sig = const(idx(2)+1:end);
            desc = eval([const '.Description']);
            mystring = sprintf('%s\n%s,%s,%s,%s,%s',mystring,num2str(num),swc,sig,const,desc);
        end
    end
end
disp(mystring)
fid = fopen('FltInjList.csv','w+');
fprintf(fid,'%s',mystring);
fclose(fid);
clear all


