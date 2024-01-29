%FDD-12 Hysteresis Compensation
%  typical parameter values, for simulation
%  Oct 17, 2011


%temporary variables
HysCmpFricWhlImbRejctnOffY.EngVal                     = [0.75, 0.82, 0.85, 0.82, 0.73, 0.51, 0.24, 0]; 
HysCmpFricWhlImbRejctnOnY.EngVal                      = [0,    0,    0,    0,    0,    0,    0,    0];


%%Tunable Calibrations%%

SysGlbPrmVehSpdBilnrSeln.EngVal        = [0, 15, 20, 30, 40, 55, 70, 90];

%%HysComp_t_CoulFricY_HwNm  = [WIRoff', WIRon'];

HysCmpFricWhlImbRejctnBlndX.EngVal = [0, .2, .4, .6, .8, 1];
HysCmpFricWhlImbRejctnBlndY.EngVal   = [0, .2, .4, .6, .8, 1];

HysCmpFricTScaX.EngVal = [-40, -30, -20, -10, 0,   25, 50, 80];
HysCmpFricTScaY.EngVal = [ 10,   5,   3,   2, 1.5,  1, 0.9 0.8];

HysCmpEffLossY.EngVal      = [0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.3, 0.3];
HysCmpEffOffsY.EngVal   = [0, 0, 0, 0, 0, 0, 0, 0];

HysCmpHysSatnY.EngVal      = [10, 10, 10, 10, 10, 10, 10, 10];

%%HysComp_t_AsstMagBlndX_HwNm = [50 100];
%HysComp_t_AsstMagBlndY_Uls  = [1   0];

HysCmpRiseX.EngVal        = [0, 0.094773206, 0.128210527, 0.154492771, 0.181721481, 0.2];
HysCmpRiseY.EngVal        = [0, 0.6015625, 0.786189735, 0.903655171, 0.974946141, 1];

HysCmpNegHysCmpX.EngVal     = [0, 0.1, 0.2, 0.4, 0.6, 0.8, 0.9, 1];
HysCmpNegHysCmpY.EngVal      = [0, 0,   0,   0.2, 0.4, 0.6, 0.8, 1];

%HysCmpNegHysCmpScaX.EngVal = [0, 0.5, 1.0, 1.5, 2];
%HysCmpNegHysCmpScaY.EngVal  = [1, 1.0, 0.9, 0.5, 0];

HysCmpNegHysCmpScaX.EngVal = [0, 1.0, 2.0, 3.0, 4.0];
HysCmpNegHysCmpScaY.EngVal  = [0.8, 0.6, 0.4, 0.2, 0];



HysCmpRevGain.EngVal    = 6.3;
SysGlbPrmSysTqRat.EngVal   = 1/0.05188875;
HysCmpAssiInpLim.EngVal  = 100;
HysCmpHwTqLpFilFrq.EngVal      = 5.0;
HysCmpAssiCmdLpFilFrq.EngVal       = 5.0;
HysCmpFinalOutpLpFilFrq.EngVal   = 5.0;
%HysComp_k_MaxChange_HwNm     = 2;

%%Non-tunable Parameters%%
%HysComp_d_1LP1BCoefSize_Bits = 16;
%HysComp_d_LMT_HwNm           = 16;
%HysComp_d_Ts_Sec             = 0.002;



%cleanup
%clear WIRoff WIRon;
