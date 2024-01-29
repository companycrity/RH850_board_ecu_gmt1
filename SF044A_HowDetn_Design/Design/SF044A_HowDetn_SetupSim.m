%% Simulation Setup Script for SF044A Hands On Wheel Detection
clear,clc
 
run SF044A_HowDetn_DataDict
Ts =0.002;
a = struct.FilLpRec1;
clear a;
b = struct.FilHpRec1;
clear b;


%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF044A_HowDetn','NxtrMBDConfig.mat')