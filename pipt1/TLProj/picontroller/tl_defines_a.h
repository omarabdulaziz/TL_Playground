/**************************************************************************************************\
 *** 
 *** Simulink model       : pipt1
 *** TargetLink subsystem : pipt1/picontroller
 *** Codefile             : tl_defines_a.h
 ***
 *** Generation date: 2024-05-25 22:52:13
 ***
 *** TargetLink version      : 5.2p1 from 23-Mar-2022
 *** Code generator version  : Build Id 5.2.0.27 from 2022-03-21 17:27:57
\**************************************************************************************************/

#ifndef TL_DEFINES_A_H
#define TL_DEFINES_A_H

#ifdef TL_FRAME
#include "picontroller_frm.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**************************************************************************************************\
   TL_CG_MACROCL_GLOBAL: Default macro class for macros with module extent
\**************************************************************************************************/
#define CAL const volatile
#define STATIC_CAL static const volatile
#define STATIC_DISP static

#ifndef TL_FRAME

#ifndef LOG_VAR
#define LOG_VAR(param_0, param_1, param_2)
#endif /* LOG_VAR */

#endif /* TL_FRAME */

#ifdef __cplusplus
}
#endif

#endif /* TL_DEFINES_A_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
