/**************************************************************************************************\
 *** 
 *** Simulink model       : Scaling
 *** TargetLink subsystem : Scaling/Subsystem
 *** Codefile             : Subsystem.c
 ***
 *** Generation date: 2024-05-22 11:29:52
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
 *** Sa1            Subsystem
 *** 
 *** SUBSYS         CORRESPONDING MODEL BLOCK (REFERENCED MODEL)
 *** 
 *** SF-NODE        CORRESPONDING STATEFLOW NODE                    DESCRIPTION
 *** 
 *** TargetLink version      : 5.2p1 from 23-Mar-2022
 *** Code generator version  : Build Id 5.2.0.27 from 2022-03-21 17:27:57
\**************************************************************************************************/

#ifndef SUBSYSTEM_C
#define SUBSYSTEM_C

/*------------------------------------------------------------------------------------------------*\
  DEFINES (OPT)
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

#include "tl_defines_a.h"
#include "Subsystem.h"

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
   SLGlobal: Default storage class for global variables | Width: 8
\**************************************************************************************************/
UInt8 Sa1_InPort; /* LSB: 2^1 OFF: 0 MIN/MAX: 0 .. 510 */
UInt8 Sa1_OutPort;

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
 ***      Subsystem
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
void Subsystem(void)
{
   LOG_VAR(a, _Sa1_InPort, Sa1_InPort);

   /* TargetLink outport: Subsystem/OutPort */
   Sa1_OutPort = (UInt8) (Sa1_InPort << 1);
}

/*------------------------------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*------------------------------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif

#endif /* SUBSYSTEM_C */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
