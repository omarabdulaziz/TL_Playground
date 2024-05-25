/**************************************************************************************************\
 *** 
 *** Simulink model       : pipt1
 *** TargetLink subsystem : pipt1/picontroller
 *** Codefile             : picontroller_fri.h
 ***
 *** Generation date: 2024-01-04 12:51:25
 ***
 *** TargetLink version      : 5.2p1 from 23-Mar-2022
 *** Code generator version  : Build Id 5.2.0.27 from 2022-03-21 17:27:57
\**************************************************************************************************/

#ifndef PICONTROLLER_FRI_H
#define PICONTROLLER_FRI_H

#include "tl_defines_a.h"
#include "tl_basetypes.h"
#ifdef TL_FRAME
#include "picontroller_frm.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**************************************************************************************************\
   SLGlobal: Default storage class for global variables | Width: 16
\**************************************************************************************************/
extern UInt16 Sa1_REF; /* LSB: 2^-11 OFF: 0 MIN/MAX: 0 .. 31.99951171875 */
extern Int16 Sa1_U; /* LSB: 2^-6 OFF: 0 MIN/MAX: -512 .. 511.984375 */
extern UInt16 Sa1_Y; /* LSB: 2^-11 OFF: 0 MIN/MAX: 0 .. 31.99951171875 */

/**************************************************************************************************\
   GlobalStep: Default function class for not static model step functions
\**************************************************************************************************/
extern void picontroller(void);

#ifdef __cplusplus
}
#endif

#endif /* PICONTROLLER_FRI_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
