%% Simulation Setup Script for SF054A PwrpkCmpbltyChk
clear,clc
run SF054A_PwrpkCmpbltyChk_DataDict.m
Ts =0.1;

%%
% Simulink.BlockDiagram.loadActiveConfigSet('SF054A_PwrpkCmpbltyChk','NxtrMBDConfig.mat')