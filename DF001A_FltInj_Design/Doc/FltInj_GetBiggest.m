% This script searches DF001A_FltInj_DataDict.m and displays the biggest fault injection number
% Created Aug 7, 2015 by Kevin Derry


clear
clc

run('DF001A_FltInj_DataDict')
list = who;

max = 0;
for i = 1:size(list)
    theclass = class(eval(list{i}));
    if strcmp(theclass,'DataDict.Constant') 
        const = list{i};
        if ~isempty(regexp(const,'^FLTINJ_[A-Za-z0-9]+_[A-Za-z0-9]+','once'))
            num = eval([const '.EngVal;']);
            if num > max
                max = num;
                winner = const;
            end
        end
    end
end
winner
max
