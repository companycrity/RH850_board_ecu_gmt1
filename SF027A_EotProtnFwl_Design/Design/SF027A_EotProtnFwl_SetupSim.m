% Create a simulink model for SF027A_EotProtnFwl
sys = 'SF027A_EotProtnFwl';
clear,clc
 
run SF027A_EotProtnFwl_DataDict
Ts =0.002;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF027A_EotProtnFwl','NxtrMBDConfig.mat')
