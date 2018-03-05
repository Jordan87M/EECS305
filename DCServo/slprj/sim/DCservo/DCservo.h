#include "__cf_DCservo.h"
#ifndef RTW_HEADER_DCservo_h_
#define RTW_HEADER_DCservo_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef DCservo_COMMON_INCLUDES_
#define DCservo_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "DCservo_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_nrand_Upu32_Yd_f_pw_snf.h"
typedef struct { real_T djhklczuwk ; real_T pw3n0iel1a ; real_T fwdjmhgt3f ;
real_T n3eh4jgulp ; real_T bpbmoyzcoi ; real_T k2gcdolop2 ; real_T maa0lyq3no
; real_T kgkyv5mm5e ; real_T gaieiu5e4d ; real_T fdadodbwsk ; real_T
nnllb3tpat ; real_T hrauqe30wu ; real_T oerpqs5xdi ; real_T htrw0hsuu1 ;
real_T ialjxmaway ; real_T fyxp31xztq ; real_T e1hi1meqnd ; real_T cnyu23mnax
; real_T b4aurbrurr ; real_T e4vr2itcsp ; } du0qazvlms ; typedef struct {
real_T bd4qevfu0d ; real_T m0ow4tpwqz ; real_T cbahey41qk ; real_T jg54ty1cwy
; real_T em2ikp5wu2 ; real_T lnvkvswkmk ; real_T owjscwly4b ; real_T
lg3idyg3gn ; real_T bk3k3eisqv ; real_T dyzqy0mjwq ; real_T hcmfe3tedl ;
uint32_T eyqjo1awuw ; uint32_T lz1uqk0kv5 ; uint32_T fxvp5f2lww ; int_T
a0eakleq5i ; } paioewifyb ; typedef struct { real_T axit1n0har ; real_T
euoqkojr3o ; real_T gf3q0msrrv ; real_T k0dnvvgkfb ; real_T p5erdkarcx ;
real_T lxjccoidzz ; } nukvwudi4i ; typedef struct { real_T axit1n0har ;
real_T euoqkojr3o ; real_T gf3q0msrrv ; real_T k0dnvvgkfb ; real_T p5erdkarcx
; real_T lxjccoidzz ; } gzx2cfvdiw ; typedef struct { boolean_T axit1n0har ;
boolean_T euoqkojr3o ; boolean_T gf3q0msrrv ; boolean_T k0dnvvgkfb ;
boolean_T p5erdkarcx ; boolean_T lxjccoidzz ; } pdhjve0l4r ; typedef struct {
real_T axit1n0har ; real_T euoqkojr3o ; real_T gf3q0msrrv ; real_T k0dnvvgkfb
; real_T p5erdkarcx ; real_T lxjccoidzz ; } lcv1lygmsw ; typedef struct {
real_T ikd15zkvaz ; real_T ifnsgkdepc ; } l0b2hn4zu4 ; struct pkszrv0byt_ {
real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ;
real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11
; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ;
real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T
P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ;
} ; struct dwmtvsq20q { struct SimStruct_tag * _mdlRefSfcnS ; struct { real_T
mr_nonContSig0 [ 1 ] ; real_T mr_nonContSig1 [ 1 ] ; real_T mr_nonContSig2 [
1 ] ; } NonContDerivMemory ; ssNonContDerivSigInfo nonContDerivSignal [ 3 ] ;
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 6 ] ; int32_T * vardimsAddress [ 6
] ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ; }
; typedef struct { du0qazvlms rtb ; paioewifyb rtdw ; mapchp3byv rtm ; }
axyxzivhdbq ; extern void ltgy3lilz0 ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , mapchp3byv * const
ix0vxp4hgn , du0qazvlms * localB , paioewifyb * localDW , nukvwudi4i * localX
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_DCservo_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_DCservo_GetDWork ( const
axyxzivhdbq * mdlrefDW ) ; extern void mr_DCservo_SetDWork ( axyxzivhdbq *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_DCservo_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_DCservo_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * DCservo_GetCAPIStaticMap ( void ) ; extern
void oq0u0vzqg1 ( paioewifyb * localDW , nukvwudi4i * localX ) ; extern void
pjw4f2tpxz ( paioewifyb * localDW , nukvwudi4i * localX ) ; extern void
nw0hz2etnl ( du0qazvlms * localB , nukvwudi4i * localX , gzx2cfvdiw *
localXdot ) ; extern void d02nrneqww ( const real_T * p4f1dmv33s , l0b2hn4zu4
* localZCSV ) ; extern void io42xjwmdi ( mapchp3byv * const ix0vxp4hgn ,
du0qazvlms * localB , paioewifyb * localDW ) ; extern void io42xjwmdiTID2 (
void ) ; extern void DCservo ( mapchp3byv * const ix0vxp4hgn , const real_T *
p4f1dmv33s , real_T fde1fgfpxv [ 2 ] , du0qazvlms * localB , paioewifyb *
localDW , nukvwudi4i * localX ) ; extern void DCservoTID2 ( void ) ;
#endif
