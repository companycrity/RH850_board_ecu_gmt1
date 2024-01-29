% Code Generation Script

%Modify these lines as needed
%run('AR999A_ArchGlbPrm_DataDict')
run('SF999A_SysGlbPrm_DataDict')
run('SF004B_AssiSumLim_DataDict')
run('ES101A_DiagcMgr_DataDict')
run('AR200A_ArSuprt_DataDict')
%Simulink.BlockDiagram.loadActiveConfigSet('SF004B_AssiSumLim', 'NxtrMBDConfig.m')
%save_system('SF004B_AssiSumLim')





%%
%Do not change these lines
%Simulink.BlockDiagram.loadActiveConfigSet(modelName, 'NxtrCodeGenConfig.m')
%set_param(modelName, 'FixedStep', sampleTime);   % Fixed-step size (fundamental sample time)
run('DataTypeAlias_Autosar')
run('DataTypeAlias_Nexteer')

% end of file