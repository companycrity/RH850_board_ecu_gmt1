
#ifndef COMM_TYPES_H
#define COMM_TYPES_H

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
#define COMM_TYPES_MAJOR_VERSION    2u
#define COMM_TYPES_MINOR_VERSION    0u
#define COMM_TYPES_PATCH_VERSION    0u

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
typedef uint8 ComM_BusType;
typedef uint8 ComM_StateType;
typedef uint8 ComM_PncModeType;

typedef uint8 ComM_ModeType;

/* network bus types */
#define COMM_BUS_TYPE_CAN       0u
#define COMM_BUS_TYPE_FR        1u
#define COMM_BUS_TYPE_LIN       3u
#define COMM_BUS_TYPE_ETH       4u

/* ComM states */
#define COMM_NO_COM_NO_PENDING_REQUEST    0u
#define COMM_NO_COM_REQUEST_PENDING       1u
#define COMM_FULL_COM_NETWORK_REQUESTED   2u
#define COMM_FULL_COM_READY_SLEEP         3u
#define COMM_SILENT_COM                   4u

/* PNC states */
#define COMM_PNC_NO_COMMUNICATION         0u
#define COMM_PNC_PREPARE_SLEEP            1u
#define COMM_PNC_READY_SLEEP              2u
#define COMM_PNC_REQUESTED                3u
#define COMM_PNC_REQUESTED_PASSIVE        4u

/* PNC send signal types */
#define COMM_SEND_ACTIVE_SIG_ONLY         0u
#define COMM_SEND_PASSIVE_SIG_ONLY        1u
#define COMM_SEND_ALL_SIG                 2u

/* PNC gateway types */
#define COMM_GATEWAY_TYPE_ACTIVE          0u
#define COMM_GATEWAY_TYPE_PASSIVE         1u
#define COMM_GATEWAY_TYPE_NONE            2u

#define COMM_NO_COMMUNICATION	  0
#define COMM_SILENT_COMMUNICATION 1
#define COMM_FULL_COMMUNICATION	  2

/* Initialization status of the ComM */
typedef uint8 ComM_InitStatusType;

#define COMM_UNINIT             0u
#define COMM_INIT               1u

/* User byte mask type */
typedef struct 
{
  uint8 ByteIndex;
  uint8 SetMask;
  uint8 ClearMask;
  NetworkHandleType Channel;
} ComM_UserByteMaskType;

/* PNC info type */
typedef struct
{
  uint8 ByteIndex;
  uint8 SetMask;
  uint8 ClearMask;
  PNCHandleType PncId;
} ComM_PncInfoType;

#endif /* COMM_TYPES_H */

