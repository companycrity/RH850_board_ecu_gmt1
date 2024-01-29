% Code Generation Script

%Modify these lines as needed
run('SF033A_VehSigCdng_DataDict')
%Simulink.BlockDiagram.loadActiveConfigSet('SF033A_VehSigCdng', 'NxtrMBDConfig.mat')
%save_system('SF033A_VehSigCdng')





%%
%Do not change these lines
%Simulink.BlockDiagram.loadActiveConfigSet(modelName, 'NxtrCodeGenConfig.m')
%set_param(modelName, 'FixedStep', sampleTime);   % Fixed-step size (fundamental sample time)
run('DataTypeAlias_Autosar')
run('DataTypeAlias_Nexteer')

% end of file