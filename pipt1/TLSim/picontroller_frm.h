/************************************************************************************\
 ***
 *** Simulation frame file :  picontroller_frm.h
 *** Code generation unit  :  pipt1/picontroller/Subsystem/picontroller
 ***
 *** Generated by dSPACE TargetLink Version 5.2p1 from 23-Mar-2022
 *** Generation date:  04-Jan-2024 12:51:25
\***********************************************************************************/

#ifndef PICONTROLLER_FRM_H
#define PICONTROLLER_FRM_H

/**************************************************************************\
   definitions and includes
\**************************************************************************/

#ifndef TL_CODE_SFCN
#include "tl_sim_types.h"            /* simulation base data types  */
#include "ts_frame.h"                /* errCode handling            */
#endif

#ifdef __cplusplus
extern "C" {
#endif


/**************************************************************************\
  definitions for external simulation
\**************************************************************************/

#ifdef LOG_VARS


  /* io structures to store logged variables */
  struct LOG_STRUCT_a_flags {
    tl_sim_Int8 _Sa1_Y;
    tl_sim_Int8 _Sa1_e;
    tl_sim_Int8 _Sa1_sU;
    tl_sim_Int8 _Sa1_x;
  };
  struct LOG_STRUCT_a {
    tl_sim_UInt16 _Sa1_Y[1];
    tl_sim_Int16 _Sa1_e[1];
    tl_sim_Int16 _Sa1_sU[1];
    tl_sim_Int16 _Sa1_x[1];
    struct LOG_STRUCT_a_flags flags;
  };

  #if defined(PICONTROLLER_FRI_C) || defined(PICONTROLLER_FRI_CPP)
    struct LOG_STRUCT_a log_struct_a;
  #else
    extern struct LOG_STRUCT_a log_struct_a;
  #endif

  #ifndef LOG_VAR
  /* macro to store a single variable into the log structure */
  #define LOG_VAR(_subId,_name,_expr)              \
     log_struct_##_subId._name[0] = _expr;    \
     log_struct_##_subId.flags._name = 1
  #endif

  #ifndef LOG_VEC
  /* macro to store a vector variable into the log structure */
  #define LOG_VEC(_subId,_name,_width,_expr)       \
     {int i; for (i=0; i<_width; i++)       \
        log_struct_##_subId._name[i] = _expr[i]; }\
     log_struct_##_subId.flags._name = 1
  #endif

  #ifndef LOG_MATRIX
  /* macro to store a matrix variable into the log structure */
  #define LOG_MATRIX(_subId,_name,_row,_col,_expr)         \
     {int i,j;                                             \
     for (i=0; i<_row; i++)                                \
        for (j=0; j<_col; j++)                             \
           log_struct_##_subId._name[i][j] = _expr[i][j]; }\
     log_struct_##_subId.flags._name = 1
  #endif

  #ifndef LOG_BIT
  /* macro to store a single bitfield element into the log structure */
  #define LOG_BIT(_subId,_name,_expr)              \
     log_struct_##_subId._name[0] = _expr?1:0;\
     log_struct_##_subId.flags._name = 1
  #endif

#else /* LOG_VARS */


  /* define empty log macros */

  #ifndef LOG_VAR
  /* macro to store a single variable into the log structure */
  #define LOG_VAR(_subId,_name,_expr)              
  #endif

  #ifndef LOG_VEC
  /* macro to store a vector variable into the log structure */
  #define LOG_VEC(_subId,_name,_width,_expr)       
  #endif

  #ifndef LOG_MATRIX
  /* macro to store a matrix variable into the log structure */
  #define LOG_MATRIX(_subId,_name,_row,_col,_expr)       
  #endif

  #ifndef LOG_BIT
  /* macro to store a single bitfield element into the log structure */
  #define LOG_BIT(_subId,_name,_expr)              
  #endif


#endif /* LOG_VARS */


#ifdef __cplusplus
}
#endif

#endif /* PICONTROLLER_FRM_H */
