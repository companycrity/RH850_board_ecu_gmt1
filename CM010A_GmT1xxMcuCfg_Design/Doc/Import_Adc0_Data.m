%Input data
%expected data format
% 0     1       2       3       4       5       6
%Time	Die1Rx0	Die1Rx1	Die1Rx2	Die2Rx0	Die2Rx1	Die2Rx2

%import into temp
temp = xlsread('CM010A_GmT1xxMcuCfg_Adc0Data.xlsm','InputData');

%parse into separate variables
InputTime     = (temp(:,1));
Adc0VCR00     = round((temp(:,2)) * 4095/5);
Adc0VCR01     = round((temp(:,3)) * 4095/5);
Adc0VCR02     = round((temp(:,4)) * 4095/5);
Adc0VCR03     = round((temp(:,5)) * 4095/5);
Adc0VCR04     = round((temp(:,6)) * 4095/5);
Adc0VCR05     = round((temp(:,7)) * 4095/5);
Adc0VCR06     = round((temp(:,8)) * 4095/5);
Adc0VCR07     = round((temp(:,9)) * 4095/5);
Adc0VCR08     = round((temp(:,10)) * 4095/5);
Adc0VCR09     = round((temp(:,11)) * 4095/5);
Adc0VCR10     = round((temp(:,12)) * 4095/5);
Adc0VCR11     = round((temp(:,13)) * 4095/5);
Adc0VCR12     = round((temp(:,14)) * 4095/5);
Adc0VCR13     = round((temp(:,15)) * 4095/5);
Adc0VCR14     = round((temp(:,16)) * 4095/5);
Adc0VCR15     = round((temp(:,17)) * 4095/5);
Adc0VCR16     = round((temp(:,18)) * 4095/5);
Adc0VCR17     = round((temp(:,19)) * 4095/5);
Adc0VCR18     = round((temp(:,20)) * 4095/5);
Adc0VCR19     = round((temp(:,21)) * 4095/5);
Adc0VCR20     = round((temp(:,22)) * 4095/5);
Adc0VCR21     = round((temp(:,23)) * 4095/5);
Adc0VCR22     = round((temp(:,24)) * 4095/5);
Adc0VCR23     = round((temp(:,25)) * 4095/5);


Adc1VCR00     = round((temp(:,2)) * 4095/5);
Adc1VCR01     = round((temp(:,3)) * 4095/5);
Adc1VCR02     = round((temp(:,4)) * 4095/5);
Adc1VCR03     = round((temp(:,5)) * 4095/5);
Adc1VCR04     = round((temp(:,6)) * 4095/5);
Adc1VCR05     = round((temp(:,7)) * 4095/5);
Adc1VCR06     = round((temp(:,8)) * 4095/5);
Adc1VCR07     = round((temp(:,9)) * 4095/5);
Adc1VCR08     = round((temp(:,10)) * 4095/5);
Adc1VCR09     = round((temp(:,11)) * 4095/5);
Adc1VCR10     = round((temp(:,12)) * 4095/5);
Adc1VCR11     = round((temp(:,13)) * 4095/5);
Adc1VCR12     = round((temp(:,14)) * 4095/5);
Adc1VCR13     = round((temp(:,15)) * 4095/5);
Adc1VCR14     = round((temp(:,16)) * 4095/5);
Adc1VCR15     = round((temp(:,17)) * 4095/5);
Adc1VCR16     = round((temp(:,18)) * 4095/5);
Adc1VCR17     = round((temp(:,19)) * 4095/5);
Adc1VCR18     = round((temp(:,20)) * 4095/5);
Adc1VCR19     = round((temp(:,21)) * 4095/5);
Adc1VCR20     = round((temp(:,22)) * 4095/5);
Adc1VCR21     = round((temp(:,23)) * 4095/5);
Adc1VCR22     = round((temp(:,24)) * 4095/5);
Adc1VCR23     = round((temp(:,25)) * 4095/5);


ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32 = DataDict.Constant;
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.LongName = 'ADC Scaling Factor';
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.Description = [...
  'ADC scaling factor to convert converted counts to volts'];
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.DocUnits = 'VoltPerCnt';
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.EngDT = dt.float32;
ADC0CFGANDUSE_ADCSCAGFAC_VOLTPERCNT_F32.EngVal = 0.001221001221001221;



%clear out temp
clear temp;


