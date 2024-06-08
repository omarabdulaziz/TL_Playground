/**************************************************************************************************\
 *** 
 *** Simulink model       : Functions
 *** TargetLink subsystem : Functions/MathOperations
 *** Codefile             : MathOperations.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2024-06-08 15:00:26
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : Standard
 *** Compiler                                 : <unknown>
 *** Target                                   : Generic
 *** ANSI-C compatible code                   : yes
 *** Code Optimization                        : enabled
 *** Constant style                           : decimal
 *** Clean code option                        : disabled
 *** Logging mode                             : According to block-specific data
 *** Code Coverage                            : disabled
 *** Generate empty conditional branches      : disabled
 *** Loop unroll threshold                    : 5
 *** Utilize bitwise shift operations         : AvoidPotentiallyUndefinedShiftsBasedOnSignedness
 *** Handle unscaled SF expr. with TL type    : enabled
 *** Assignment of conditions                 : AllBooleanOutputs 
 *** Scope reduction only to function level   : disabled
 *** Exploit ranges if not erasable           : disabled
 *** Exploit Compute Through Overflow         : optimized
 *** Linker sections                          : enabled
 *** Enable Assembler                         : disabled
 *** Variable name length                     : 31 chars
 *** Use global bitfields                     : disabled
 *** Stateflow: use of bitfields              : enabled
 *** State activity encoding limit            : 5
 *** Omit zero inits in restart function      : disabled
 *** Share functions between TL subsystems    : disabled
 *** Generate 64bit functions                 : enabled
 *** Inlining Threshold                       : 6
 *** Line break limit                         : 100
 *** Target optimized boolean data type       : enabled
 *** Keep saturation elements                 : disabled
 *** Extended variable sharing                : disabled
 *** Extended lifetime optimization           : enabled
 *** Style definition file                    : C:\Program Files\dSPACE TargetLink 5.2\Matlab\Tl\Con
 ***                                            fig\codegen\cconfig.xml
 *** Root style sheet                         : C:\Program Files\dSPACE TargetLink 5.2\Matlab\Tl\XML
 ***                                            \CodeGen\Stylesheets\TL_CSourceCodeSS.xsl
 ***
 *** SUBSYS         CORRESPONDING SIMULINK SUBSYSTEM
 *** Sa1            MathOperations
 *** Sa2            MathOperations/Subtract
 *** Sa3            MathOperations/Sum
 *** 
 *** SUBSYS         CORRESPONDING MODEL BLOCK (REFERENCED MODEL)
 *** 
 *** SF-NODE        CORRESPONDING STATEFLOW NODE                    DESCRIPTION
 *** 
 *** TargetLink version      : 5.2p1 from 23-Mar-2022
 *** Code generator version  : Build Id 5.2.0.27 from 2022-03-21 17:27:57
\**************************************************************************************************/

#ifndef MATHOPERATIONS_C
#define MATHOPERATIONS_C

/*------------------------------------------------------------------------------------------------*\
  DEFINES (OPT)
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

#include "MathOperations.h"

#ifdef __cplusplus
extern "C" {
#endif

/*------------------------------------------------------------------------------------------------*\
  ENUMS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  TYPEDEFS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  VARIABLES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
   SLGlobal: Default storage class for global variables | Width: 16
\**************************************************************************************************/
Int16 Sa1_In1;
Int16 Sa1_In2;
Int16 Sa1_OutPort;

/*------------------------------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  INLINE FUNCTIONS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION DEFINITIONS
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
 ***  FUNCTION:
 ***      MathOperations
 *** 
 ***  DESCRIPTION:
 ***      
 *** 
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***
 ***  RETURNS:
 ***      void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/
void MathOperations(void)
{
   /* TargetLink outport: MathOperations/OutPort
      # combined # Product: MathOperations/Product
      # combined # Sum: MathOperations/Subtract/Sum1
      # combined # Sum: MathOperations/Sum/Sum */
   Sa1_OutPort = ((Int16) (Sa1_In1 + 1)) * ((Int16) (Sa1_In2 - 1));
}

/*------------------------------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*------------------------------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif

#endif /* MATHOPERATIONS_C */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/