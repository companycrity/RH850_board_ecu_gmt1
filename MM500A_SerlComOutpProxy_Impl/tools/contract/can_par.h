extern VAR(boolean, AUTOMATIC) DTC_Triggered_778_conf_b;
extern VAR(boolean, AUTOMATIC) PPEI_Steering_Wheel_Angle_conf_b;
extern VAR(boolean, AUTOMATIC) LKA_Steering_Trq_Overlay_Stat_HS_conf_b;
extern VAR(boolean, AUTOMATIC) Power_Steering_Information_HS_conf_b;
extern VAR(boolean, AUTOMATIC) Electric_Power_Steering_CE_conf_b;
extern VAR(boolean, AUTOMATIC) PPEI_Steering_Wheel_Angle_CE_conf_b;
extern VAR(boolean, AUTOMATIC) Steering_Torque_Overlay_Stat_CE_conf_b;

extern FUNC(void, AUTOMATIC) CanWriteSyncDTC_Triggered_778_conf_b(VAR(boolean, AUTOMATIC) Flag);
extern FUNC(void, AUTOMATIC) CanWriteSyncPPEI_Steering_Wheel_Angle_conf_b(VAR(boolean, AUTOMATIC) Flag);
extern FUNC(void, AUTOMATIC) CanWriteSyncLKA_Steering_Trq_Overlay_Stat_HS_conf_b(VAR(boolean, AUTOMATIC) Flag);
extern FUNC(void, AUTOMATIC) CanWriteSyncPower_Steering_Information_HS_conf_b(VAR(boolean, AUTOMATIC) Flag);
extern FUNC(void, AUTOMATIC) CanWriteSyncElectric_Power_Steering_CE_conf_b(VAR(boolean, AUTOMATIC) Flag);
extern FUNC(void, AUTOMATIC) CanWriteSyncPPEI_Steering_Wheel_Angle_CE_conf_b(VAR(boolean, AUTOMATIC) Flag);
extern FUNC(void, AUTOMATIC) CanWriteSyncSteering_Torque_Overlay_Stat_CE_conf_b(VAR(boolean, AUTOMATIC) Flag);

typedef uint8* CanTransmitHandle;
