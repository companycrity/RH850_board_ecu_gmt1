%% Simulation Setup Script for SF105A Motor Current Regulator and Voltage Limiter
clear,clc

% run SF104A_Dependencies_DataDict
run SF104A_MotCurrRegCfg_DataDict
Ts =0.002;
 
%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF104A_MotCurrRegCfg','NxtrMBDConfig.mat')