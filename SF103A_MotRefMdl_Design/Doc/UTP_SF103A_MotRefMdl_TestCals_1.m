%This script is used for testing purposes.  Change the values below to get
%the performance you desire.  DO NOT MODIFY THE COMPONENT'S DATA DICTIONARY.
%SF103A_MotRefMdl
%May 30, 2015

%Software Component Default Parameter Values
run('SF103A_MotRefMdl_DataDict');


%Customized values for testing
MotRefMdlCurrDaxBoostGain.EngVal = 0;

MotRefMdlCurrDaxBoostTqScaX.EngVal =  ...
   [0     1.5     1.75      2      2.25      2.5     3       3.5     4      4.5     5];

MotRefMdlCurrDaxBoostTqScaY.EngVal =  ...
   [0     0.5     0.6     0.7      0.725    0.775   0.825    0.85    0.9    0.95     1];

MotRefMdlCurrDaxQaxRefDelta.EngVal =  ...
   [-3.1415927    -2.3561945   -1.5707964   -0.7853982000000001    0     0.7853982000000001    1.5707964    2.3561945];

MotRefMdlCurrIterTol.EngVal = 0.1;

MotRefMdlFbCtrlDi.EngVal = 0;
MotRefMdlFbCtrlDi.EngVal = 1;

MotRefMdlIvtrDeadTiBrdgVltgSca.EngVal = 1;

MotRefMdlMinCurrIterLim.EngVal = 1;

MotRefMdlMotCurrDaxMaxSca.EngVal = 1;

MotRefMdlMotVelLpFilFrq.EngVal = 125;

MotRefMdlMotVltgDerivtvTiCon.EngVal = 0.0026526;
MotRefMdlMotVltgDerivtvTiCon.EngVal = 1/(2*pi*100);


MotRefMdlQ13VltgSdlX.EngVal =  ...
   [0      100     200      300     500      600      700      800      900      1100];

MotRefMdlQ13VltgSdlY.EngVal =  ...
   [0       0       0        0       0        0        0        0        0          0];
MotRefMdlQ13VltgSdlY.EngVal=0*ones(size(MotRefMdlQ13VltgSdlY.EngVal));


MotRefMdlQ24VltgSdlX.EngVal =  ...
   [0      100     200      300     500      600      700      800      900      1100];

MotRefMdlQ24VltgSdlY.EngVal =  ...
   [0       0          0          0           0        0         0           0           0            0];
MotRefMdlQ24VltgSdlY.EngVal=0*ones(size(MotRefMdlQ13VltgSdlY.EngVal));



MotRefMdlTqIterLim.EngVal = 1;

MotRefMdlTqIterTol.EngVal = 0.015;

MotRefMdlVltgModDynCmpEna.EngVal = 1;

MotRefMdlVltgOvrRThdSca.EngVal = 0.25;

MotRefMdlRefLocnIterLim.EngVal = 10;