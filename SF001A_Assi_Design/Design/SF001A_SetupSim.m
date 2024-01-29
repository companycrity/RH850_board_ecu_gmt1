% Code Generation Script

%Modify these lines as needed
run('SF001A_Assi_DataDict')
%Simulink.BlockDiagram.loadActiveConfigSet('SF001A_Assi', 'NxtrMBDConfig.mat')
%save_system('SF001A_Assi')





%%
%Do not change these lines
%Simulink.BlockDiagram.loadActiveConfigSet(modelName, 'NxtrCodeGenConfig.m')
%set_param(modelName, 'FixedStep', sampleTime);   % Fixed-step size (fundamental sample time)
run('DataTypeAlias_Autosar')
run('DataTypeAlias_Nexteer')

% end of file