#include "__cf_DCservoclean.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DCservoclean_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "DCservoclean.h"
#include "DCservoclean_capi.h"
#include "DCservoclean_private.h"
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
TARGET_STRING ( "DCservoclean/Integrator" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 1 , 0 ,
TARGET_STRING ( "DCservoclean/1//(Js+b)" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 0 , - 1 , ( NULL
) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void DCservoclean_InitializeDataAddr ( void * dataAddr [ ] ,
dmlehgn2yj * localDW , n1alfnmhvy * localX ) { dataAddr [ 0 ] = ( void * ) (
& localX -> m25s0wyutz ) ; dataAddr [ 1 ] = ( void * ) ( & localX ->
g1seaidjpz ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DCservoclean_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] )
{ vardimsAddr [ 0 ] = ( NULL ) ; }
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
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 2 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3586871820U , 739328507U , 1836419879U ,
1875105849U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * DCservoclean_GetCAPIStaticMap ( ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void DCservoclean_InitializeSystemRan ( dfqytp2ywk * const bmrvyitb0r
, sysRanDType * systemRan [ ] , dmlehgn2yj * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( bmrvyitb0r ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = p2hxe15xkj [ 0
] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems
[ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void DCservoclean_InitializeDataMapInfo ( dfqytp2ywk * const bmrvyitb0r ,
dmlehgn2yj * localDW , n1alfnmhvy * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( bmrvyitb0r -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( bmrvyitb0r -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( bmrvyitb0r -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; DCservoclean_InitializeDataAddr ( bmrvyitb0r ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
bmrvyitb0r -> DataMapInfo . mmi , bmrvyitb0r -> DataMapInfo . dataAddress ) ;
DCservoclean_InitializeVarDimsAddr ( bmrvyitb0r -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( bmrvyitb0r -> DataMapInfo .
mmi , bmrvyitb0r -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
bmrvyitb0r -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
bmrvyitb0r -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetInstanceLoggingInfo
( bmrvyitb0r -> DataMapInfo . mmi , & bmrvyitb0r -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( bmrvyitb0r -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( bmrvyitb0r -> DataMapInfo .
mmi , 0 ) ; DCservoclean_InitializeSystemRan ( bmrvyitb0r , bmrvyitb0r ->
DataMapInfo . systemRan , localDW , bmrvyitb0r -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( bmrvyitb0r -> DataMapInfo .
mmi , bmrvyitb0r -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
bmrvyitb0r -> DataMapInfo . mmi , bmrvyitb0r -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( bmrvyitb0r -> DataMapInfo . mmi , & p2hxe15xkj [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DCservoclean_host_InitializeDataMapInfo (
DCservoclean_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
