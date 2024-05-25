/**************************************************************************************************\
 *** 
 *** Simulink model       : poscontrol
 *** TargetLink subsystem : poscontrol/controller
 *** Codefile             : Controller.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2024-05-26 00:59:14
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
 *** Inlining Threshold                       : 5
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
 *** TargetLink version      : 5.2p1 from 23-Mar-2022
 *** Code generator version  : Build Id 5.2.0.27 from 2022-03-21 17:27:57
\**************************************************************************************************/

#ifndef CONTROLLER_H
#define CONTROLLER_H

/*------------------------------------------------------------------------------------------------*\
  DEFINES (OPT)
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

#include "tl_basetypes.h"

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
   CAL: global calibratable parameters (ROM) | Width: 8
\**************************************************************************************************/
extern const volatile Int8 LinTable[25]; /* 
   LSB: 2^-3 OFF: 0 MIN/MAX: -12 .. 12
   Description: linearized output values */

/**************************************************************************************************\
   DISP: global observable variables (RAM) | Width: 16
\**************************************************************************************************/
extern Int16 SPI; /* 
   LSB: 2^-9 OFF: 0 MIN/MAX: -64 .. 63.998046875
   Description: controller output signal */

/**************************************************************************************************\
   GLOBAL_INTERFACE: mergeable global variables (RAM) | Width: 16
\**************************************************************************************************/
extern Int16 Position; /* 
   Unit: mm
   LSB: 2^-10 OFF: 0 MIN/MAX: -12 .. 12
   Description: measured position */
extern Int16 Reference; /* 
   Unit: mm
   LSB: 2^-10 OFF: 0 MIN/MAX: -32 .. 31.9990234375
   Description: reference position */
extern Int16 UPI; /* 
   LSB: 2^-9 OFF: 0 MIN/MAX: -64 .. 63.998046875
   Description: Controller Output */

/*------------------------------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
   GlobalFcnSpecStep: Default function class for not static model step functions
\**************************************************************************************************/
extern void Controller(void);

/**************************************************************************************************\
   GlobalLookup1D_Ctrl: Derived TL_CG default function class.
\**************************************************************************************************/
extern Int8 Tab1DnMS4I2T1563_Ctrl(UInt8 Nx, const Int8 * z_table, UInt8 diffx, Int8 startx, Int8 x);

#ifdef __cplusplus
}
#endif

#endif /* CONTROLLER_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/
