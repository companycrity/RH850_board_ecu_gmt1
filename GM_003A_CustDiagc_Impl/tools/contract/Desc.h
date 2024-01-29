typedef unsigned int DescBitType;

typedef struct
{
  DescBitType reqType   :2; /* 0x01: Phys 0x02: Func */
  DescBitType resOnReq  :2; /* 0x01: Phys 0x02: Func */
  DescBitType suppPosRes:1; /* 0x00: No   0x02: Yes  */
} DescMsgAddInfo;

typedef struct
{
  uint8*             reqData;
  uint16          reqDataLen;
  uint8*             resData;
  uint16          resDataLen;
  DescMsgAddInfo      msgAddInfo;
  uint8 iContext;
} DescMsgContext;

#define DescGetHiByte(data)                                          ((uint8)(((uint16)(data))>>8))
#define DescGetLoByte(data)                                          ((uint8)(data))

#define DescGetHiHiByte(data)                                        ((uint8)(((uint32)(data))>>24))
#define DescGetHiLoByte(data)                                        ((uint8)(((uint32)(data))>>16))
#define DescGetLoHiByte(data)                                        ((uint8)(((uint32)(data))>>8))
#define DescGetLoLoByte(data)                                        ((uint8)(data))

#define kDescNrcConditionsNotCorrect                                 (0x22U)
#define kDescNrcRequestOutOfRange                                    (0x31U)

extern FUNC(void, AUTOMATIC) DescSetNegResponse(VAR(uint8, AUTOMATIC), VAR(uint8, AUTOMATIC));
extern FUNC(void, AUTOMATIC) DescProcessingDone(VAR(uint8, AUTOMATIC));
