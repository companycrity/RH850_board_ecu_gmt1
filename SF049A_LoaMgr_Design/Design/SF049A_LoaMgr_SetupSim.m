%% Simulation Setup Script for SF105A Motor Current Regulator and Voltage Limiter
clear,clc
 
run SF049A_LoaMgr_DataDict
Ts =0.004;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF049A_LoaMgr','NxtrMBDConfig.mat')