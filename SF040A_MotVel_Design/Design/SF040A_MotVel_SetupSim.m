% Code Generation Script

%Modify these lines as needed
run('SF040A_MotVel_DataDict')

Ts = 6.25E-5;
%Simulink.BlockDiagram.loadActiveConfigSet('SF040A_MotVel', 'NxtrMBDConfig.mat')
%save_system('SF040A_MotVel')


%%
%Do not change these lines
%Simulink.BlockDiagram.loadActiveConfigSet(modelName, 'NxtrCodeGenConfig.mat')
%set_param(modelName, 'FixedStep', sampleTime);   % Fixed-step size (fundamental sample time)
% run('DataTypeAlias_Autosar')
% run('DataTypeAlias_Nexteer')

% end of file