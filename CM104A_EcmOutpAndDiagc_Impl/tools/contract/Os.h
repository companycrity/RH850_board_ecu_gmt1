#ifndef _OS_H
# define _OS_H

typedef unsigned char  osuint8;
typedef unsigned short osuint16;
typedef unsigned long  osuint32;
typedef signed   char  osint8;
typedef signed   short osint16;
typedef signed   long  osint32;

#define osReadICR16(addr)   (*(volatile osuint16*)(addr)) 

#define osqFunc1
#define osqFunc2 

osqFunc1 void osqFunc2 osPsysWriteICR16(osuint32 addr, osuint16 value);
osqFunc1 void osqFunc2 osPsysClearICRReq(osuint32 addr);
osqFunc1 osuint8 osqFunc2 osPsysGetIMR(osuint16 index);
osqFunc1 void    osqFunc2 osPsysSetIMR(osuint16 index);
osqFunc1 void    osqFunc2 osPsysClearIMR(osuint16 index);

#define osWriteICR16(addr, val)  osPsysWriteICR16((addr), (val))
 
#define osClearICRReq(addr)      osPsysClearICRReq(addr)     

#define osGetIMRmEI(index)       osPsysGetIMR(index)
#define osSetIMRmEI(index)       osPsysSetIMR(index)
#define osClearIMRmEI(index)     osPsysClearIMR(index)   

extern void SuspendAllInterrupts(void);
extern void ResumeAllInterrupts(void);
extern void SuspendOSInterrupts(void);
extern void ResumeOSInterrupts(void);

#endif 
/*_OS_H */
