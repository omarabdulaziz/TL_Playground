/**************************************************************************************************\
 *** 
 *** Generation date: 2024-01-04 12:51:05
 ***
 *** TargetLink version      : 5.2p1 from 23-Mar-2022
 *** Code generator version  : Build Id 5.2.0.27 from 2022-03-21 17:27:57
\**************************************************************************************************/

#ifndef TL_SIM_LIMITS_H
#define TL_SIM_LIMITS_H

#include <float.h>

#define tl_sim_FLOAT32MAX FLT_MAX /* Upper limit of tl_sim_Float32 */
#define tl_sim_FLOAT32NMIN (-FLT_MAX) /* Lower limit of tl_sim_Float32 */
#define tl_sim_FLOAT64MAX DBL_MAX /* Upper limit of tl_sim_Float64 */
#define tl_sim_FLOAT64NMIN (-DBL_MAX) /* Lower limit of tl_sim_Float64 */
#define tl_sim_INT16MAX 32767 /* Upper limit of tl_sim_Int16 */
#define tl_sim_INT16MIN (-tl_sim_INT16MAX - 1) /* Lower limit of tl_sim_Int16 */
#define tl_sim_INT32MAX 2147483647L /* Upper limit of tl_sim_Int32 */
#define tl_sim_INT32MIN (-tl_sim_INT32MAX - 1L) /* Lower limit of tl_sim_Int32 */
#define tl_sim_INT8MAX 127 /* Upper limit of tl_sim_Int8 */
#define tl_sim_INT8MIN (-tl_sim_INT8MAX - 1) /* Lower limit of tl_sim_Int8 */
#define tl_sim_UINT16MAX 65535U /* Upper limit of tl_sim_UInt16 */
#define tl_sim_UINT16MIN 0U /* Lower limit of tl_sim_UInt16 */
#define tl_sim_UINT32MAX 4294967295UL /* Upper limit of tl_sim_UInt32 */
#define tl_sim_UINT32MIN 0UL /* Lower limit of tl_sim_UInt32 */
#define tl_sim_UINT8MAX 255U /* Upper limit of tl_sim_UInt8 */
#define tl_sim_UINT8MIN 0U /* Lower limit of tl_sim_UInt8 */

#endif /* TL_SIM_LIMITS_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
