#define DEM_UDS_STATUS_TF 1U

typedef uint16                                   Dem_EventIdType;
typedef uint8                                    Dem_DTCFormatType;
typedef uint8                                    Dem_EventStatusExtendedType;

#define DEM_DTC_ORIGIN_PRIMARY_MEMORY   (0x01U)
#define DEM_DTC_FORMAT_UDS              (0x01U)
#define DEM_G_NUMBER_OF_EVENTS          (40U)

extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA) DTCOfEvent);
extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetEventStatus(Dem_EventIdType EventId, P2VAR(Dem_EventStatusExtendedType, AUTOMATIC, DEM_APPL_DATA) EventStatusExtended);

