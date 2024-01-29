% Code Generation Script

%Modify these lines as needed
run('SF016A_VehSpdLimr_DataDict')
%Simulink.BlockDiagram.loadActiveConfigSet('SF005A_StOpCtrl', 'NxtrMBDConfig.m')






%%
%Do not change these lines
%Simulink.BlockDiagram.loadActiveConfigSet(modelName, 'NxtrCodeGenConfig.m')
%set_param(modelName, 'FixedStep', sampleTime);   % Fixed-step size (fundamental sample time)
run('DataTypeAlias_Autosar')
run('DataTypeAlias_Nexteer')

% end of file