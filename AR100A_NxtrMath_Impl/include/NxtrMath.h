/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : NxtrMath.h
* Module Description: Nexteer Math Library Header
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/04/15  1        LWW       Initial Version                                                                 EA4#73																	
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef NXTRMATH_H
#define NXTRMATH_H

/************************************************ Include Statements *************************************************/
#include <math.h>
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 1.1 [NXTRDEV 1.1.1]: Inline functions are used for Nexteer Math library macros to allow for throughput optimization */
/* MISRA-C:2004 Rule 8.5 [NXTRDEV 8.5.1]: Function definitions are required to be in a header for inline function usage */

/****************************************************** Macros *******************************************************/

/* MISRA-C:2004 Rule 19.7 [NXTRDEV 19.7.1]: This rule is only intended to apply in situations where a function call is permitted.  This macro is targeted 
											for the pre-processor to resolve to a constant and therefore a function call is not permitted */ 
#define TblSize_m(Tbl)   (sizeof(Tbl)/sizeof((Tbl)[0]))

/*********************************************** Exported Declarations ***********************************************/
INLINE FUNC(float32, NxtrMath_CODE) Blnd_f32(float32 Inp1,
											 float32 Inp2,
											 float32 Fac);

INLINE FUNC(uint8, NxtrMath_CODE) Abslt_u08_s08(sint8 Inp);

INLINE FUNC(uint16, NxtrMath_CODE) Abslt_u16_s16(sint16 Inp);

INLINE FUNC(uint32, NxtrMath_CODE) Abslt_u32_s32(sint32 Inp);

INLINE FUNC(float32, NxtrMath_CODE) Abslt_f32_f32(float32 Inp);

INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_s08(sint8 Inp);

INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_s16(sint16 Inp);

INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_s32(sint32 Inp);

INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_f32(float32 Inp);

INLINE FUNC(sint8, NxtrMath_CODE) Min_s08(sint8 Inp1,
										sint8 Inp2);

INLINE FUNC(uint8, NxtrMath_CODE) Min_u08(uint8 Inp1,
										uint8 Inp2);

INLINE FUNC(sint16, NxtrMath_CODE) Min_s16(sint16 Inp1,
											sint16 Inp2);

INLINE FUNC(uint16, NxtrMath_CODE) Min_u16(uint16 Inp1,
											uint16 Inp2);

INLINE FUNC(sint32, NxtrMath_CODE) Min_s32(sint32 Inp1,
											sint32 Inp2);

INLINE FUNC(uint32, NxtrMath_CODE) Min_u32(uint32 Inp1,
											uint32 Inp2);

INLINE FUNC(float32, NxtrMath_CODE) Min_f32(float32 Inp1,
											float32 Inp2);

INLINE FUNC(sint8, NxtrMath_CODE) Max_s08(sint8 Inp1,
										sint8 Inp2);

INLINE FUNC(uint8, NxtrMath_CODE) Max_u08(uint8 Inp1,
										uint8 Inp2);

INLINE FUNC(sint16, NxtrMath_CODE) Max_s16(sint16 Inp1,
											sint16 Inp2);

INLINE FUNC(uint16, NxtrMath_CODE) Max_u16(uint16 Inp1,
											uint16 Inp2);

INLINE FUNC(sint32, NxtrMath_CODE) Max_s32(sint32 Inp1,
											sint32 Inp2);

INLINE FUNC(uint32, NxtrMath_CODE) Max_u32(uint32 Inp1,
											uint32 Inp2);

INLINE FUNC(float32, NxtrMath_CODE) Max_f32(float32 Inp1,
											float32 Inp2);	

INLINE FUNC(sint8, NxtrMath_CODE) Lim_s08(sint8 Inp,
											sint8 RngLo,
											sint8 RngHi);

INLINE FUNC(uint8, NxtrMath_CODE) Lim_u08(uint8 Inp,
											uint8 RngLo,
											uint8 RngHi);

INLINE FUNC(sint16, NxtrMath_CODE) Lim_s16(sint16 Inp,
											sint16 RngLo,
											sint16 RngHi);

INLINE FUNC(uint16, NxtrMath_CODE) Lim_u16(uint16 Inp,
											uint16 RngLo,
											uint16 RngHi);

INLINE FUNC(sint32, NxtrMath_CODE) Lim_s32(sint32 Inp,
											sint32 RngLo,
											sint32 RngHi);

INLINE FUNC(uint32, NxtrMath_CODE) Lim_u32(uint32 Inp,
											uint32 RngLo,
											uint32 RngHi);

INLINE FUNC(float32, NxtrMath_CODE) Lim_f32(float32 Inp,
												float32 RngLo,
												float32 RngHi);

INLINE FUNC(float32, NxtrMath_CODE) Arctan2_f32(float32 Numer,
												float32 Denom);

INLINE FUNC(float32, NxtrMath_CODE) Sin_f32(float32 Inp);

INLINE FUNC(float32, NxtrMath_CODE) Cos_f32(float32 Inp);

INLINE FUNC(float32, NxtrMath_CODE) Exp_f32(float32 Inp);

INLINE FUNC(float32, NxtrMath_CODE) Sqrt_f32(float32 Inp);

INLINE FUNC(float32, NxtrMath_CODE) Mod_f32(float32 Numer,
												float32 Denom);	
												
/*****************************************************************************
*  Name:           Blnd_f32()
*  Description:    Unity gain blend of two input signals
*  Inputs:         Inp1 - first signal to be blended 
*				   Inp2 - second signal to be blended
*				   Fac - contribution of the second signal
*  Outputs:        Blended signal result
*  Usage Notes:    Fac input is constrained to min of 0.0 and max of 1.0 for
*                  proper functionality
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Blnd_f32(float32 Inp1,
											 float32 Inp2,
											 float32 Fac)
{
    return (((Inp1 * (1.0F - Fac)) + (Inp2 * Fac)));
}

/*****************************************************************************
*  Name:           Abslt_u08_s08()
*  Description:    8bit Absolute Value
*  Inputs:         Inp
*  Outputs:        Absolute Value of Input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint8, NxtrMath_CODE) Abslt_u08_s08(sint8 Inp)
{
	/* Rollover in the following line of code will occur if Inp is -128, however, type castings will provide proper overall result */
    return (((Inp)>=0)?((uint8)(Inp)):((uint8)(sint8)(-(Inp))));
}

/*****************************************************************************
*  Name:           Abslt_u16_s16()
*  Description:    16bit Absolute Value
*  Inputs:         Inp
*  Outputs:        Absolute Value of Input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint16, NxtrMath_CODE) Abslt_u16_s16(sint16 Inp)
{
	/* Rollover in the following line of code will occur if Inp is -32768, however, type castings will provide proper overall result */
    return (((Inp)>=0)?((uint16)(Inp)):((uint16)(sint16)(-(Inp))));
}

/*****************************************************************************
*  Name:           Abslt_u32_s32()
*  Description:    32bit Absolute Value
*  Inputs:         Inp
*  Outputs:        Absolute Value of Input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint32, NxtrMath_CODE) Abslt_u32_s32(sint32 Inp)
{
	/* Rollover in the following line of code will occur if Inp is -2147483648, however, type castings will provide proper overall result */
    return (((Inp)>=0)?((uint32)(Inp)):((uint32)(sint32)(-(Inp))));
}

/*****************************************************************************
*  Name:           Abslt_f32_f32()
*  Description:    Single Precision Float Absolute Value
*  Inputs:         Inp
*  Outputs:        Absolute Value of Input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Abslt_f32_f32(float32 Inp)
{
    return (fabsf(Inp));
}

/*****************************************************************************
*  Name:           Sign_s08_s08()
*  Description:    8bit Sign
*  Inputs:         Inp
*  Outputs:        Sign of input (inputs of zero treated as positive)
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_s08(sint8 Inp)
{
    return (((Inp)>=0)?((sint8)(1)):((sint8)-1));
}

/*****************************************************************************
*  Name:           Sign_s08_s16()
*  Description:    16bit Sign
*  Inputs:         Inp
*  Outputs:        Sign of input (inputs of zero treated as positive)
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_s16(sint16 Inp)
{
    return (((Inp)>=0)?((sint8)(1)):((sint8)-1));
}

/*****************************************************************************
*  Name:           Sign_s08_s32()
*  Description:    32bit Sign
*  Inputs:         Inp
*  Outputs:        Sign of input (inputs of zero treated as positive)
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_s32(sint32 Inp)
{
    return (((Inp)>=0)?((sint8)(1)):((sint8)-1));
}

/*****************************************************************************
*  Name:           Sign_s08_f32()
*  Description:    Single Precision Float Sign
*  Inputs:         Inp
*  Outputs:        Sign of input (inputs of zero treated as positive)
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_f32(float32 Inp)
{
    return (((Inp)>=0.0F)?((sint8)(1)):((sint8)-1));
}

/*****************************************************************************
*  Name:           Min_s08()
*  Description:    8bit signed minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Min_s08(sint8 Inp1,
										sint8 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Min_u08()
*  Description:    8bit unsigned minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint8, NxtrMath_CODE) Min_u08(uint8 Inp1,
										uint8 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Min_s16()
*  Description:    16bit signed minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint16, NxtrMath_CODE) Min_s16(sint16 Inp1,
											sint16 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Min_u16()
*  Description:    16bit unsigned minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint16, NxtrMath_CODE) Min_u16(uint16 Inp1,
											uint16 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Min_s32()
*  Description:    32bit signed minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint32, NxtrMath_CODE) Min_s32(sint32 Inp1,
											sint32 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Min_u32()
*  Description:    32bit unsigned minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint32, NxtrMath_CODE) Min_u32(uint32 Inp1,
											uint32 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Min_f32()
*  Description:    Single Precision Float minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Min_f32(float32 Inp1,
											float32 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_s08()
*  Description:    8bit signed maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Max_s08(sint8 Inp1,
										sint8 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_u08()
*  Description:    8bit unsigned maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint8, NxtrMath_CODE) Max_u08(uint8 Inp1,
										uint8 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_s16()
*  Description:    16bit signed maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint16, NxtrMath_CODE) Max_s16(sint16 Inp1,
											sint16 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_u16()
*  Description:    16bit unsigned maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint16, NxtrMath_CODE) Max_u16(uint16 Inp1,
											uint16 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_s32()
*  Description:    32bit signed maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint32, NxtrMath_CODE) Max_s32(sint32 Inp1,
											sint32 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_u32()
*  Description:    32bit unsigned maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint32, NxtrMath_CODE) Max_u32(uint32 Inp1,
											uint32 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_f32()
*  Description:    Single Precision Float maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Max_f32(float32 Inp1,
											float32 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}


/*****************************************************************************
*  Name:           Lim_s08()
*  Description:    8bit signed limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Lim_s08(sint8 Inp,
											sint8 RngLo,
											sint8 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Lim_u08()
*  Description:    8bit unsigned limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint8, NxtrMath_CODE) Lim_u08(uint8 Inp,
											uint8 RngLo,
											uint8 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Lim_s16()
*  Description:    16bit signed limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint16, NxtrMath_CODE) Lim_s16(sint16 Inp,
											sint16 RngLo,
											sint16 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Lim_u16()
*  Description:    16bit unsigned limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint16, NxtrMath_CODE) Lim_u16(uint16 Inp,
											uint16 RngLo,
											uint16 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Lim_s32()
*  Description:    32bit signed limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint32, NxtrMath_CODE) Lim_s32(sint32 Inp,
											sint32 RngLo,
											sint32 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Lim_u32()
*  Description:    32bit unsigned limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint32, NxtrMath_CODE) Lim_u32(uint32 Inp,
											uint32 RngLo,
											uint32 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Lim_f32()
*  Description:    Single Precision Float limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Lim_f32(float32 Inp,
												float32 RngLo,
												float32 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Arctan2_f32()
*  Description:    Single Precision Float Arctangent 2
*  Inputs:         Numer, Denom
*  Outputs:        Arctangent of Num/Den
*  Usage Notes:    Numer and Denom must not be both zero
*                  The output is in the range of -pi to pi radians
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Arctan2_f32(float32 Numer,
												float32 Denom)
{
    return (atan2f(Numer, Denom));
}

/*****************************************************************************
*  Name:           Sin_f32()
*  Description:    Single Precision Float Sine
*  Inputs:         Inp
*  Outputs:        Sine of input
*  Usage Notes:    Inp must be in radians
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Sin_f32(float32 Inp)
{
    return (sinf(Inp));
}

/*****************************************************************************
*  Name:           Cos_f32()
*  Description:    Single Precision Float Cosine
*  Inputs:         Inp
*  Outputs:        Cosine of input
*  Usage Notes:    Inp must be in radians
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Cos_f32(float32 Inp)
{
    return (cosf(Inp));
}

/*****************************************************************************
*  Name:           Exp_f32()
*  Description:    Single Precision Float Exponential
*  Inputs:         Inp
*  Outputs:        Exponential of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Exp_f32(float32 Inp)
{
    return (expf(Inp));
}

/*****************************************************************************
*  Name:           Sqrt_f32()
*  Description:    Single Precision Float Square Root
*  Inputs:         Inp
*  Outputs:        Square Root of input
*  Usage Notes:    Input must not be negative
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Sqrt_f32(float32 Inp)
{
    return (sqrtf(Inp));
}

/*****************************************************************************
*  Name:           Mod_f32()
*  Description:    Single Precision Float Modulus
*  Inputs:         Numer, Denom
*  Outputs:        Remainder of Numer over Denom
*  Usage Notes:    The output sign is the same sign as Numer
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Mod_f32(float32 Numer,
												float32 Denom)
{
    return (fmodf(Numer, Denom));
}

#endif

