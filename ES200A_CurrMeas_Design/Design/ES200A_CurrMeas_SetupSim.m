% %% Simulation Setup Script for ES200A_CurrMeas

open_system('ES200A_CurrMeas.slx')
run('ES200A_CurrMeas_DataDict.m')
set_param('ES200A_CurrMeas', 'SimGenImportedTypeDefs', 'On')