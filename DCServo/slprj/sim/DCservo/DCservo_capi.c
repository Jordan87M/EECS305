#include "__cf_DCservo.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DCservo_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "DCservo.h"
#include "DCservo_capi.h"
#include "DCservo_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 1 ,
TARGET_STRING ( "DCservo/Integrator" ) , TARGET_STRING ( "" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 1 , 2 , TARGET_STRING (
"DCservo/1//(Js+b)" ) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 , 1 , - 1 , 0 } , { 2 , 5 , TARGET_STRING ( "DCservo/filter" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 3 , 4 , TARGET_STRING ( "DCservo/filter1" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 4 , 3 ,
TARGET_STRING ( "DCservo/filter2" ) , TARGET_STRING ( "" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 5 , 0 , TARGET_STRING (
"DCservo/k//(Ls+R)" ) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 , 1 , - 1 , 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 ,
0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void DCservo_InitializeDataAddr ( void * dataAddr [ ] , paioewifyb *
localDW , nukvwudi4i * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
euoqkojr3o ) ; dataAddr [ 1 ] = ( void * ) ( & localX -> gf3q0msrrv ) ;
dataAddr [ 2 ] = ( void * ) ( & localX -> lxjccoidzz ) ; dataAddr [ 3 ] = (
void * ) ( & localX -> p5erdkarcx ) ; dataAddr [ 4 ] = ( void * ) ( & localX
-> k0dnvvgkfb ) ; dataAddr [ 5 ] = ( void * ) ( & localX -> axit1n0har ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DCservo_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 6 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 1345728756U , 2137277581U , 2750375990U ,
3328736752U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * DCservo_GetCAPIStaticMap ( ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void DCservo_InitializeSystemRan ( mapchp3byv * const ix0vxp4hgn ,
sysRanDType * systemRan [ ] , paioewifyb * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( ix0vxp4hgn ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = fx3obz21i3 [ 0
] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems
[ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void DCservo_InitializeDataMapInfo ( mapchp3byv * const ix0vxp4hgn ,
paioewifyb * localDW , nukvwudi4i * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( ix0vxp4hgn -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ix0vxp4hgn -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ix0vxp4hgn -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; DCservo_InitializeDataAddr ( ix0vxp4hgn ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
ix0vxp4hgn -> DataMapInfo . mmi , ix0vxp4hgn -> DataMapInfo . dataAddress ) ;
DCservo_InitializeVarDimsAddr ( ix0vxp4hgn -> DataMapInfo . vardimsAddress )
; rtwCAPI_SetVarDimsAddressMap ( ix0vxp4hgn -> DataMapInfo . mmi , ix0vxp4hgn
-> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( ix0vxp4hgn ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( ix0vxp4hgn ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetInstanceLoggingInfo ( ix0vxp4hgn
-> DataMapInfo . mmi , & ix0vxp4hgn -> DataMapInfo . mmiLogInstanceInfo ) ;
rtwCAPI_SetChildMMIArray ( ix0vxp4hgn -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ix0vxp4hgn -> DataMapInfo . mmi , 0 ) ;
DCservo_InitializeSystemRan ( ix0vxp4hgn , ix0vxp4hgn -> DataMapInfo .
systemRan , localDW , ix0vxp4hgn -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( ix0vxp4hgn -> DataMapInfo . mmi ,
ix0vxp4hgn -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( ix0vxp4hgn
-> DataMapInfo . mmi , ix0vxp4hgn -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( ix0vxp4hgn -> DataMapInfo . mmi , & fx3obz21i3 [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DCservo_host_InitializeDataMapInfo ( DCservo_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
