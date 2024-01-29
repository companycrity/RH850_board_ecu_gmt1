typedef uint8 Dem_DTCRequestType;
typedef uint8 Dem_ReturnGetDTCByOccurrenceTimeType;
typedef uint8 Dem_DTCFormatType;
typedef uint16 Dem_EventIdType;
typedef uint8 Dem_ReturnControlDTCSettingType;
typedef uint32 Dem_DTCGroupType;
typedef uint8 Dem_DTCKindType;
typedef uint8 Dem_ReturnGetFreezeFrameDataByDTCType;

#define DEM_MOST_RECENT_FAILED_DTC               ((Dem_DTCRequestType)(0x02U))
#define DEM_OCCURR_OK                            ((Dem_ReturnGetDTCByOccurrenceTimeType)(0x00U))
# define DEM_DTC_FORMAT_UDS                      (0x01U)
#define DEM_DTC_GROUP_ALL_DTCS                   ((Dem_DTCGroupType)(0x00ffffffU))
#define DEM_DTC_KIND_ALL_DTCS                    (0x01U)
#define DEM_DTC_ORIGIN_PRIMARY_MEMORY            (0x01U)
#define DEM_GET_FFDATABYDTC_OK                   (0x00U)

#define DEM_CFG_GLOBAL_DTC_COUNT 33U

FUNC(Dem_ReturnGetDTCByOccurrenceTimeType, DEM_CODE) Dem_DcmGetDTCByOccurrenceTime(Dem_DTCRequestType  DTCRequest, P2VAR(uint32, AUTOMATIC, DEM_DCM_DATA) DTC);
FUNC(Std_ReturnType, DEM_CODE) Dem_GetDTCOfEvent(Dem_EventIdType  EventId, Dem_DTCFormatType  DTCFormat, P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA)  DTCOfEvent);
FUNC(Dem_ReturnControlDTCSettingType, DEM_CODE) Dem_DcmEnableDTCSetting(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind);
FUNC(Dem_ReturnControlDTCSettingType, DEM_CODE) Dem_DcmDisableDTCSetting(Dem_DTCGroupType  DTCGroup, Dem_DTCKindType  DTCKind);
FUNC(Dem_ReturnGetFreezeFrameDataByDTCType, DEM_CODE) Dem_DcmGetFreezeFrameDataByDTC(Dem_DTCGroupType, Dem_DTCKindType, Dem_DTCFormatType, uint8*, uint16*);
FUNC(void, DEM_CODE) Dem_DcmEnableDTCRecordUpdate(void);
FUNC(void, DEM_CODE) Dem_DcmDisableDTCRecordUpdate(uint32, uint8);
