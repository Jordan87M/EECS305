#include "__cf_DCservoclean.h"
#ifndef RTW_HEADER_DCservoclean_h_
#define RTW_HEADER_DCservoclean_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef DCservoclean_COMMON_INCLUDES_
#define DCservoclean_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "DCservoclean_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T c1hbgudb3c ; real_T h1iumi15yy ; real_T py0uazbjom ;
real_T ocrwypepem ; real_T kwv5yg22t5 ; real_T ohbif0zasi ; real_T nok5ew4ix0
; } cws2waboyt ; typedef struct { real_T in1iw0pnm2 ; real_T emxj5gkuys ;
real_T pykjqp4f3e ; real_T hlhfiqximg ; real_T giw5nhwsyr ; real_T jtcdsqyb5i
; real_T pz12djtlhh ; real_T arvsihnkrs ; int_T o3fdzvux4q ; } dmlehgn2yj ;
typedef struct { real_T g1seaidjpz ; real_T m25s0wyutz ; } n1alfnmhvy ;
typedef struct { real_T g1seaidjpz ; real_T m25s0wyutz ; } gz4xiwp4qd ;
typedef struct { boolean_T g1seaidjpz ; boolean_T m25s0wyutz ; } ohcw4bsjs1 ;
typedef struct { real_T g1seaidjpz ; real_T m25s0wyutz ; } ay50aus4nk ;
typedef struct { real_T gx0cyjo4gc ; real_T elmcmojiw3 ; } ithzt3xjjt ;
struct jbxn24lpkq_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; } ; struct f55je0ypkk {
struct SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
2 ] ; int32_T * vardimsAddress [ 2 ] ; sysRanDType * systemRan [ 2 ] ; int_T
systemTid [ 2 ] ; } DataMapInfo ; } ; typedef struct { cws2waboyt rtb ;
dmlehgn2yj rtdw ; dfqytp2ywk rtm ; } f05abvqawqk ; extern void bxopqgt4zc (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , dfqytp2ywk * const bmrvyitb0r
, cws2waboyt * localB , dmlehgn2yj * localDW , n1alfnmhvy * localX , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_DCservoclean_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_DCservoclean_GetDWork (
const f05abvqawqk * mdlrefDW ) ; extern void mr_DCservoclean_SetDWork (
f05abvqawqk * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_DCservoclean_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_DCservoclean_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * DCservoclean_GetCAPIStaticMap ( void ) ;
extern void afxpaifzbi ( dmlehgn2yj * localDW , n1alfnmhvy * localX ) ;
extern void acznout2yc ( dmlehgn2yj * localDW , n1alfnmhvy * localX ) ;
extern void nfnjqtss3j ( cws2waboyt * localB , n1alfnmhvy * localX ,
gz4xiwp4qd * localXdot ) ; extern void ktuotylly0 ( const real_T * i0hefhp0ha
, ithzt3xjjt * localZCSV ) ; extern void a4kpk5sb22 ( dfqytp2ywk * const
bmrvyitb0r , cws2waboyt * localB , dmlehgn2yj * localDW ) ; extern void
DCservoclean ( dfqytp2ywk * const bmrvyitb0r , const real_T * i0hefhp0ha ,
real_T oqxpostojl [ 2 ] , cws2waboyt * localB , dmlehgn2yj * localDW ,
n1alfnmhvy * localX ) ;
#endif
