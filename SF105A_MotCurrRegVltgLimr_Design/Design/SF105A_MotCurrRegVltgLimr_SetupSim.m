%% Simulation Setup Script for SF105A Motor Current Regulator and Voltage Limiter
clear,clc

run SF105A_MotCurrRegVltgLimr_DataDict
Ts = 0.00025;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF105A_MotCurrRegVltgLimr','NxtrMBDConfig')