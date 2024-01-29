#define DemConf_DemIndicator_SteerAssiLimdLvl3  0U
#define DemConf_DemIndicator_PwrSteerIndcr      1U
#define DemConf_DemIndicator_SteerAssiLimd      2U
#define DemConf_DemIndicator_SteerAssiLimdLvl2  3U

# define DEM_INDICATOR_OFF (0x00U)

typedef uint8 Dem_IndicatorStatusType;
FUNC(Std_ReturnType, DEM_CODE) Dem_GetIndicatorStatus(uint8 IndicatorId, P2VAR(Dem_IndicatorStatusType, AUTOMATIC, DEM_APPL_DATA) IndicatorStatus);
