#include "__cf_DCservoclean.h"
#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME DCservoclean_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define rt_logging_h
#include "DCservoclean_types.h"
#include "DCservoclean.h"
#include "DCservoclean_private.h"
MdlRefChildMdlRec childModels [ 1 ] = { "DCservoclean" , "DCservoclean" , 0 }
; const char * rt_GetMatSignalLoggingFileName ( void ) { return NULL ; }
const char * rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void
* rt_GetOSigstreamManager ( void ) { return NULL ; } boolean_T
slIsRapidAcceleratorSimulating ( void ) { return false ; } void
rt_RAccelReplaceFromFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void rt_RAccelReplaceToFilename (
const char * blockpath , char * fileName ) { ( void ) blockpath ; ( void )
fileName ; } static void mdlInitializeConditions ( SimStruct * S ) {
f05abvqawqk * dw = ( f05abvqawqk * ) ssGetDWork ( S , 0 ) ; n1alfnmhvy *
localX = ( n1alfnmhvy * ) ssGetContStates ( S ) ; afxpaifzbi ( & ( dw -> rtdw
) , localX ) ; } static void mdlReset ( SimStruct * S ) { f05abvqawqk * dw =
( f05abvqawqk * ) ssGetDWork ( S , 0 ) ; n1alfnmhvy * localX = ( n1alfnmhvy *
) ssGetContStates ( S ) ; acznout2yc ( & ( dw -> rtdw ) , localX ) ; } static
void mdlInitializeSizes ( SimStruct * S ) { ssSetNumSFcnParams ( S , 0 ) ;
ssFxpSetU32BitRegionCompliant ( S , 1 ) ; rt_InitInfAndNaN ( sizeof ( real_T
) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S ->
mdlInfo -> genericFcn ; real_T lifeSpan = rtInf ; real_T startTime = 0.0 ;
real_T stopTime = 10.0 ; int_T hwSettings [ 15 ] ; int_T opSettings [ 2 ] ;
boolean_T concurrTaskSupport = 0 ; boolean_T disallowsMdlRefFromVarStepTop =
0 ; ModelRefChildSolverInfo solverInfo = { 0 , 5 , 0.001 , 0.01 , 0.0 , 0.0 }
; ( fcn ) ( S , GEN_FCN_CHK_MODELREF_SOLVER_TYPE_EARLY , 1 , ( NULL ) ) ; (
fcn ) ( S , GEN_FCN_MODELREF_RATE_GROUPED , 0 , ( NULL ) ) ; if ( ! ( fcn ) (
S , GEN_FCN_CHK_MODELREF_LIFE_SPAN , - 1 , & lifeSpan ) ) return ; if ( ! (
fcn ) ( S , GEN_FCN_CHK_MODELREF_START_TIME , - 1 , & startTime ) ) return ;
if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_STOP_TIME , - 1 , & stopTime ) )
return ; hwSettings [ 0 ] = 8 ; hwSettings [ 1 ] = 16 ; hwSettings [ 2 ] = 32
; hwSettings [ 3 ] = 32 ; hwSettings [ 4 ] = 32 ; hwSettings [ 5 ] = 64 ;
hwSettings [ 6 ] = 64 ; hwSettings [ 7 ] = 0 ; hwSettings [ 8 ] = 1 ;
hwSettings [ 9 ] = 64 ; hwSettings [ 10 ] = 1 ; hwSettings [ 11 ] = 0 ;
hwSettings [ 12 ] = 0 ; hwSettings [ 13 ] = 64 ; hwSettings [ 14 ] = 0 ; if (
! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_HARDWARE_SETTINGS , 15 , hwSettings ) )
return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_DATA_DICTIONARY , 0 , (
void * ) "" ) ) return ; slmrSetDataDictionarySet ( S , "" ) ; opSettings [ 0
] = 0 ; opSettings [ 1 ] = 0 ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_OPTIM_SETTINGS , 2 , opSettings ) ) return ; if ( ! (
fcn ) ( S , GEN_FCN_CHK_MODELREF_CONCURRETNT_TASK_SUPPORT , ( int_T )
concurrTaskSupport , ( NULL ) ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_SOLVER_TYPE , 0 , & disallowsMdlRefFromVarStepTop ) )
return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_SOLVER_NAME , 0 , ( void *
) "ode15s" ) ) return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_SOLVER_MODE
, SOLVER_MODE_SINGLETASKING , ( NULL ) ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_VSOLVER_OPTS , - 1 , & solverInfo ) ) return ; ( fcn ) (
S , GEN_FCN_CHK_MODELREF_FRAME_UPGRADE_DIAGNOSTICS , 2 , ( NULL ) ) ; }
slmrSetModelRefMaxFreqHz ( S , - 1.000000 ) ;
slmrSetModelRefAutoSolverStatusFlags ( S , 5 ) ; { static const char *
globalVarList [ ] = { "eps" } ; ssRegModelRefGlobalVarUsage ( S , 1 , ( void
* ) globalVarList ) ; } ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates
( S , 2 ) ; ssSetNumDiscStates ( S , 0 ) ; ssSetNumPeriodicContStates ( S , 0
) ; { const char * modelNames [ ] = { "" } ; const size_t numModelNames = 0 ;
slmrSetHasNonBuiltinLoggedState ( S , numModelNames , modelNames ) ; }
ssSetSymbolicDimsSupport ( S , true ) ; slmrInitializeIOPortDataVectors ( S ,
1 , 1 ) ; if ( ! ssSetNumInputPorts ( S , 1 ) ) return ; if ( !
ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 0 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S , 1 ) ) return ; if ( !
ssSetOutputPortVectorDimension ( S , 0 , 2 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 0 , false ) ;
slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 0 , false ) ;
slmrModelRefSetOutputPortDrivenByResetITVS ( S , 0 , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
slmrModelRefSetHasDescExpFcnMdl ( S , false ) ; { real_T minValue =
rtMinusInf ; real_T maxValue = rtInf ; ssSetModelRefInputSignalDesignMin ( S
, 0 , & minValue ) ; ssSetModelRefInputSignalDesignMax ( S , 0 , & maxValue )
; } { real_T minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 0 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 0 , & maxValue ) ; }
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_DCservoclean_RegisterSimStateChecksum ( S ) ; { static ssRTWStorageType
storageClass [ 2 ] = { SS_RTW_STORAGE_AUTO , SS_RTW_STORAGE_AUTO } ;
ssSetModelRefPortRTWStorageClasses ( S , storageClass ) ; }
ssSetModelRefSignalLoggingSaveFormat ( S , SS_DATASET_FORMAT ) ;
slmrSetModelRefLoggingSaveFormat ( S , SS_DATASET_FORMAT ) ;
ssSetNumSampleTimes ( S , PORT_BASED_SAMPLE_TIMES ) ;
ssSetParameterTuningCompliance ( S , true ) ; ssSetNumRWork ( S , 0 ) ;
ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 ) ;
{ int_T zcsIdx = 0 ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"UprLim" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_CONT ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
} ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 0 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetOptimizeModelRefInitCode ( S , 0 )
; ssSetModelReferenceConsistentOutportInitialization ( S , true ) ;
ssSetAcceptsFcnCallInputs ( S ) ; ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
false ) ; ssRegisterMsgForNotSupportingMultiExecInst ( S ,
 "<diag_root><diag id=\"Simulink:blocks:BlockDoesNotSupportMultiExecInstances\"><arguments><arg type=\"encoded\">RABDAHMAZQByAHYAbwBjAGwAZQBhAG4ALwBTAGMAbwBwAGUAAAA=</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments></diag>\n</diag_root>"
) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetModelRefHasParforForEachSS
( S , false ) ; ssSetModelRefHasVariantModelOrSubsystem ( S , false ) ;
ssSetNumExplicitTaskingTs ( S , 0 ) ; ssSetParameterChangeEventTID ( S , - 1
) ; ssSetOptions ( S , SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE |
SS_OPTION_WORKS_WITH_CODE_REUSE ) ; if ( S -> mdlInfo -> genericFcn != ( NULL
) ) { if ( ! ssRegModelRefChildModel ( S , 1 , childModels ) ) { return ; } }
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_DCservoclean_MdlInfoRegFcn ( S , "DCservoclean" , & retVal ) ; if ( !
retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( f05abvqawqk ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrSetDataTypeOverrideSettings ( S , 0 , 0 ) ;
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterSystemResetMethod ( S , mdlReset ) ;
ssSetSimulinkVersionGeneratedIn ( S , "8.7" ) ; ssSetNeedAbsoluteTime ( S , 1
) ; ssSetModelRefHasEnablePort ( S , 0 ) ; } static void
mdlInitializeSampleTimes ( SimStruct * S ) { return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_START
static void mdlStart ( SimStruct * S ) { f05abvqawqk * dw = ( f05abvqawqk * )
ssGetDWork ( S , 0 ) ; n1alfnmhvy * localX = ( n1alfnmhvy * ) ssGetContStates
( S ) ; void * sysRanPtr = ( NULL ) ; int sysTid = 0 ;
ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ; ssGetContextSysTid ( S , &
sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid = 0 ; } bxopqgt4zc ( S ,
ssGetSampleTimeTaskID ( S , 0 ) , & ( dw -> rtm ) , & ( dw -> rtb ) , & ( dw
-> rtdw ) , localX , sysRanPtr , sysTid , ( NULL ) , ( NULL ) , 0 , - 1 ) ;
ssSetModelMappingInfoPtr ( S , & ( dw -> rtm . DataMapInfo . mmi ) ) ; if ( S
-> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo ->
genericFcn ; } } static void mdlOutputs ( SimStruct * S , int_T tid ) {
f05abvqawqk * dw = ( f05abvqawqk * ) ssGetDWork ( S , 0 ) ; const real_T *
i_i_i31o4falcm = ( real_T * ) ssGetInputPortSignal ( S , 0 ) ; real_T *
o_B_1_1 = ( real_T * ) ssGetOutputPortSignal ( S , 0 ) ; n1alfnmhvy * localX
= ( n1alfnmhvy * ) ssGetContStates ( S ) ; if ( tid != CONSTANT_TID && tid !=
PARAMETER_TUNING_TID ) { DCservoclean ( & ( dw -> rtm ) , i_i_i31o4falcm ,
o_B_1_1 , & ( dw -> rtb ) , & ( dw -> rtdw ) , localX ) ; } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { f05abvqawqk * dw = (
f05abvqawqk * ) ssGetDWork ( S , 0 ) ; a4kpk5sb22 ( & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) ) ; return ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { f05abvqawqk * dw = (
f05abvqawqk * ) ssGetDWork ( S , 0 ) ; const real_T * i_i_i31o4falcm = (
real_T * ) ssGetInputPortSignal ( S , 0 ) ; ithzt3xjjt * localZCSV = (
ithzt3xjjt * ) ssGetNonsampledZCs ( S ) ; ktuotylly0 ( i_i_i31o4falcm ,
localZCSV ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { f05abvqawqk * dw = (
f05abvqawqk * ) ssGetDWork ( S , 0 ) ; n1alfnmhvy * localX = ( n1alfnmhvy * )
ssGetContStates ( S ) ; gz4xiwp4qd * localXdot = ( gz4xiwp4qd * ) ssGetdX ( S
) ; nfnjqtss3j ( & ( dw -> rtb ) , localX , localXdot ) ; } static void
mdlTerminate ( SimStruct * S ) { return ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
dwFieldNames [ 5 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , } ; mxArray * ss = mxCreateStructMatrix ( 1 , 1 , 5 ,
dwFieldNames ) ; { const n1alfnmhvy * localX = ( const n1alfnmhvy * )
ssGetContStates ( S ) ; const size_t numBytes = sizeof ( n1alfnmhvy ) ;
mxArray * storedX = mxCreateNumericMatrix ( 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; UINT8_T * rawData = ( UINT8_T * ) mxGetData ( storedX ) ; memcpy (
& rawData [ 0 ] , localX , numBytes ) ; mxSetFieldByNumber ( ss , 0 , 0 ,
storedX ) ; } { mxArray * mdlrefDW = mr_DCservoclean_GetDWork ( ssGetDWork (
S , 0 ) ) ; mxSetFieldByNumber ( ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data
= mr_DCservoclean_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss ,
0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar (
( double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { {
n1alfnmhvy * localX = ( n1alfnmhvy * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( n1alfnmhvy ) ; const mxArray * storedX =
mxGetFieldByNumber ( ss , 0 , 0 ) ; const UINT8_T * rawData = ( const UINT8_T
* ) mxGetData ( storedX ) ; memcpy ( localX , & rawData [ 0 ] , numBytes ) ;
} mr_DCservoclean_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber ( ss ,
0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber ( ss
, 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar (
mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
