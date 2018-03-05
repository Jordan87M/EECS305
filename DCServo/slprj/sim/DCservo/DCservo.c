#include "__cf_DCservo.h"
#include "DCservo_capi.h"
#include "DCservo.h"
#include "DCservo_private.h"
int_T fx3obz21i3 [ 3 ] ; static RegMdlInfo rtMdlInfo_DCservo [ 42 ] = { {
"axyxzivhdbq" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "DCservo" }
, { "l0b2hn4zu4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DCservo" } , { "lcv1lygmsw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DCservo" } , { "pdhjve0l4r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DCservo" } , { "gzx2cfvdiw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DCservo" } , {
"nukvwudi4i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DCservo" } , { "k52cnaxxmv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DCservo" } , { "ilzb0g1uqw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DCservo" } , { "jiwh1zv2mu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DCservo" } , {
"met1ij15rw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DCservo" } , { "paioewifyb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DCservo" } , { "du0qazvlms" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DCservo" } , { "crimmz23te" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DCservo" } , {
"f2vhztm54f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DCservo" } , { "pvw54bmbrf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DCservo" } , { "d02nrneqww" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DCservo" } , { "nw0hz2etnl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DCservo" } , {
"io42xjwmdi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DCservo" } , { "pjw4f2tpxz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DCservo" } , { "oq0u0vzqg1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DCservo" } , { "ltgy3lilz0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DCservo" } , {
"ots5pgxt0g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DCservo" } , { "DCservo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL
) } , { "dwmtvsq20q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void *
) "DCservo" } , { "mapchp3byv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "DCservo" } , { "fx3obz21i3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "DCservo" } , { "ly4ldqrac2q" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DCservo" } , {
"nlk2m0dmyko" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DCservo" } , { "mr_DCservo_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DCservo" } , {
"mr_DCservo_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DCservo" } , {
"mr_DCservo_cacheBitFieldToCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "DCservo" } , {
"mr_DCservo_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DCservo" } , {
"mr_DCservo_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "DCservo" } , { "mr_DCservo_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DCservo" } , {
"mr_DCservo_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "DCservo" } , { "mr_DCservo_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DCservo" } , {
"mr_DCservo_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "DCservo" } , { "mr_DCservo_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DCservo" } , {
"mr_DCservo_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"DCservo" } , { "mr_DCservo_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "DCservo" } , { "DCservo.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1
, ( NULL ) } , { "DCservo.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"DCservo" } } ; pkszrv0byt pkszrv0bytx = { - 6.666666666666667 ,
0.066666666666666666 , 100.0 , 0.0 , - 10.0 , 100.0 , - 0.8 , 0.8 , 0.00012 ,
- 72.0 , 60.0 , - 60.0 , 50.0 , 1.0 , 1.0 , 7.3E-5 , 0.0 ,
0.0013416407864998738 , 0.0 , 0.0 , 0.0010488088481701515 , 0.0 , 0.0 ,
0.0013038404810405298 , 0.0 , 12.0 , - 12.0 , 0.01 } ; void oq0u0vzqg1 (
paioewifyb * localDW , nukvwudi4i * localX ) { uint32_T tseed ; int32_T r ;
int32_T t ; real_T tmp ; localX -> axit1n0har = 0.0 ; localDW -> bd4qevfu0d =
( rtInf ) ; localDW -> cbahey41qk = ( rtInf ) ; localX -> euoqkojr3o =
pkszrv0bytx . P_3 ; localX -> gf3q0msrrv = 0.0 ; localDW -> em2ikp5wu2 = (
rtInf ) ; localDW -> owjscwly4b = ( rtInf ) ; localX -> k0dnvvgkfb = 0.0 ;
localX -> p5erdkarcx = 0.0 ; localX -> lxjccoidzz = 0.0 ; tmp =
muDoubleScalarFloor ( pkszrv0bytx . P_18 ) ; if ( muDoubleScalarIsNaN ( tmp )
|| muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp =
muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T
) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; r = ( int32_T ) (
tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed -
( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed < 1U ) {
tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } localDW -> eyqjo1awuw = tseed ; localDW -> bk3k3eisqv =
rt_nrand_Upu32_Yd_f_pw_snf ( & localDW -> eyqjo1awuw ) * pkszrv0bytx . P_17 +
pkszrv0bytx . P_16 ; tmp = muDoubleScalarFloor ( pkszrv0bytx . P_21 ) ; if (
muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; }
else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0
? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; r = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } localDW -> lz1uqk0kv5 = tseed ; localDW -> dyzqy0mjwq =
rt_nrand_Upu32_Yd_f_pw_snf ( & localDW -> lz1uqk0kv5 ) * pkszrv0bytx . P_20 +
pkszrv0bytx . P_19 ; tmp = muDoubleScalarFloor ( pkszrv0bytx . P_24 ) ; if (
muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; }
else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0
? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; r = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } localDW -> fxvp5f2lww = tseed ; localDW -> hcmfe3tedl =
rt_nrand_Upu32_Yd_f_pw_snf ( & localDW -> fxvp5f2lww ) * pkszrv0bytx . P_23 +
pkszrv0bytx . P_22 ; } void pjw4f2tpxz ( paioewifyb * localDW , nukvwudi4i *
localX ) { uint32_T tseed ; int32_T r ; int32_T t ; real_T tmp ; localX ->
axit1n0har = 0.0 ; localDW -> bd4qevfu0d = ( rtInf ) ; localDW -> cbahey41qk
= ( rtInf ) ; localX -> euoqkojr3o = pkszrv0bytx . P_3 ; localX -> gf3q0msrrv
= 0.0 ; localDW -> em2ikp5wu2 = ( rtInf ) ; localDW -> owjscwly4b = ( rtInf )
; localX -> k0dnvvgkfb = 0.0 ; localX -> p5erdkarcx = 0.0 ; localX ->
lxjccoidzz = 0.0 ; tmp = muDoubleScalarFloor ( pkszrv0bytx . P_18 ) ; if (
muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; }
else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0
? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; r = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } localDW -> eyqjo1awuw = tseed ; localDW -> bk3k3eisqv =
rt_nrand_Upu32_Yd_f_pw_snf ( & localDW -> eyqjo1awuw ) * pkszrv0bytx . P_17 +
pkszrv0bytx . P_16 ; tmp = muDoubleScalarFloor ( pkszrv0bytx . P_21 ) ; if (
muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; }
else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0
? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; r = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } localDW -> lz1uqk0kv5 = tseed ; localDW -> dyzqy0mjwq =
rt_nrand_Upu32_Yd_f_pw_snf ( & localDW -> lz1uqk0kv5 ) * pkszrv0bytx . P_20 +
pkszrv0bytx . P_19 ; tmp = muDoubleScalarFloor ( pkszrv0bytx . P_24 ) ; if (
muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; }
else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0
? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; r = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } localDW -> fxvp5f2lww = tseed ; localDW -> hcmfe3tedl =
rt_nrand_Upu32_Yd_f_pw_snf ( & localDW -> fxvp5f2lww ) * pkszrv0bytx . P_23 +
pkszrv0bytx . P_22 ; } void DCservo ( mapchp3byv * const ix0vxp4hgn , const
real_T * p4f1dmv33s , real_T fde1fgfpxv [ 2 ] , du0qazvlms * localB ,
paioewifyb * localDW , nukvwudi4i * localX ) { real_T it2qna51zs ; real_T
dnvwwu0h4x ; real_T * lastU ; real_T lastTime ; localB -> djhklczuwk = 0.0 ;
localB -> djhklczuwk += pkszrv0bytx . P_1 * localX -> axit1n0har ; localB ->
pw3n0iel1a = pkszrv0bytx . P_2 * localB -> djhklczuwk ; if ( ( localDW ->
bd4qevfu0d >= rtmGetTaskTime ( ix0vxp4hgn , 0 ) ) && ( localDW -> cbahey41qk
>= rtmGetTaskTime ( ix0vxp4hgn , 0 ) ) ) { it2qna51zs = 0.0 ; } else {
lastTime = localDW -> bd4qevfu0d ; lastU = & localDW -> m0ow4tpwqz ; if (
localDW -> bd4qevfu0d < localDW -> cbahey41qk ) { if ( localDW -> cbahey41qk
< rtmGetTaskTime ( ix0vxp4hgn , 0 ) ) { lastTime = localDW -> cbahey41qk ;
lastU = & localDW -> jg54ty1cwy ; } } else { if ( localDW -> bd4qevfu0d >=
rtmGetTaskTime ( ix0vxp4hgn , 0 ) ) { lastTime = localDW -> cbahey41qk ;
lastU = & localDW -> jg54ty1cwy ; } } it2qna51zs = ( localB -> pw3n0iel1a - *
lastU ) / ( rtmGetTaskTime ( ix0vxp4hgn , 0 ) - lastTime ) ; } localB ->
fwdjmhgt3f = localX -> euoqkojr3o ; localB -> n3eh4jgulp = 0.0 ; localB ->
n3eh4jgulp += pkszrv0bytx . P_5 * localX -> gf3q0msrrv ; if ( ( localDW ->
em2ikp5wu2 >= rtmGetTaskTime ( ix0vxp4hgn , 0 ) ) && ( localDW -> owjscwly4b
>= rtmGetTaskTime ( ix0vxp4hgn , 0 ) ) ) { dnvwwu0h4x = 0.0 ; } else {
lastTime = localDW -> em2ikp5wu2 ; lastU = & localDW -> lnvkvswkmk ; if (
localDW -> em2ikp5wu2 < localDW -> owjscwly4b ) { if ( localDW -> owjscwly4b
< rtmGetTaskTime ( ix0vxp4hgn , 0 ) ) { lastTime = localDW -> owjscwly4b ;
lastU = & localDW -> lg3idyg3gn ; } } else { if ( localDW -> em2ikp5wu2 >=
rtmGetTaskTime ( ix0vxp4hgn , 0 ) ) { lastTime = localDW -> owjscwly4b ;
lastU = & localDW -> lg3idyg3gn ; } } dnvwwu0h4x = ( localB -> n3eh4jgulp - *
lastU ) / ( rtmGetTaskTime ( ix0vxp4hgn , 0 ) - lastTime ) ; } localB ->
bpbmoyzcoi = 0.0 ; localB -> bpbmoyzcoi += pkszrv0bytx . P_7 * localX ->
k0dnvvgkfb ; if ( rtmIsMajorTimeStep ( ix0vxp4hgn ) && rtmIsSampleHit (
ix0vxp4hgn , 1 , 0 ) ) { } localB -> k2gcdolop2 = 0.0 ; localB -> k2gcdolop2
+= pkszrv0bytx . P_10 * localX -> p5erdkarcx ; localB -> maa0lyq3no = 0.0 ;
localB -> maa0lyq3no += pkszrv0bytx . P_12 * localX -> lxjccoidzz ; localB ->
kgkyv5mm5e = localB -> fwdjmhgt3f + localB -> maa0lyq3no ; localB ->
gaieiu5e4d = localB -> n3eh4jgulp + localB -> k2gcdolop2 ; localB ->
fdadodbwsk = pkszrv0bytx . P_13 * localB -> kgkyv5mm5e ; localB -> nnllb3tpat
= localB -> fdadodbwsk + pkszrv0bytx . P_8 ; localB -> hrauqe30wu =
pkszrv0bytx . P_14 * localB -> gaieiu5e4d ; localB -> oerpqs5xdi = localB ->
hrauqe30wu + pkszrv0bytx . P_15 ; if ( rtmIsMajorTimeStep ( ix0vxp4hgn ) &&
rtmIsSampleHit ( ix0vxp4hgn , 1 , 0 ) ) { localB -> htrw0hsuu1 = localDW ->
bk3k3eisqv ; localB -> ialjxmaway = localDW -> dyzqy0mjwq ; localB ->
fyxp31xztq = localDW -> hcmfe3tedl ; } if ( rtmIsMajorTimeStep ( ix0vxp4hgn )
) { localDW -> a0eakleq5i = * p4f1dmv33s >= pkszrv0bytx . P_25 ? 1 : *
p4f1dmv33s > pkszrv0bytx . P_26 ? 0 : - 1 ; } localB -> e1hi1meqnd = localDW
-> a0eakleq5i == 1 ? pkszrv0bytx . P_25 : localDW -> a0eakleq5i == - 1 ?
pkszrv0bytx . P_26 : * p4f1dmv33s ; localB -> cnyu23mnax = pkszrv0bytx . P_27
* localB -> n3eh4jgulp ; localB -> b4aurbrurr = localB -> e1hi1meqnd - localB
-> cnyu23mnax ; localB -> e4vr2itcsp = localB -> djhklczuwk - localB ->
bpbmoyzcoi ; fde1fgfpxv [ 0 ] = localB -> nnllb3tpat ; fde1fgfpxv [ 1 ] =
localB -> oerpqs5xdi ; } void DCservoTID2 ( void ) { } void io42xjwmdi (
mapchp3byv * const ix0vxp4hgn , du0qazvlms * localB , paioewifyb * localDW )
{ real_T * lastU ; if ( rtmIsMajorTimeStep ( ix0vxp4hgn ) ) { if ( memcmp (
ix0vxp4hgn -> nonContDerivSignal [ 0 ] . pCurrVal , ix0vxp4hgn ->
nonContDerivSignal [ 0 ] . pPrevVal , ix0vxp4hgn -> nonContDerivSignal [ 0 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ix0vxp4hgn -> nonContDerivSignal [
0 ] . pPrevVal , ix0vxp4hgn -> nonContDerivSignal [ 0 ] . pCurrVal ,
ix0vxp4hgn -> nonContDerivSignal [ 0 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ix0vxp4hgn -> _mdlRefSfcnS ) ; } if ( memcmp (
ix0vxp4hgn -> nonContDerivSignal [ 1 ] . pCurrVal , ix0vxp4hgn ->
nonContDerivSignal [ 1 ] . pPrevVal , ix0vxp4hgn -> nonContDerivSignal [ 1 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ix0vxp4hgn -> nonContDerivSignal [
1 ] . pPrevVal , ix0vxp4hgn -> nonContDerivSignal [ 1 ] . pCurrVal ,
ix0vxp4hgn -> nonContDerivSignal [ 1 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ix0vxp4hgn -> _mdlRefSfcnS ) ; } if ( memcmp (
ix0vxp4hgn -> nonContDerivSignal [ 2 ] . pCurrVal , ix0vxp4hgn ->
nonContDerivSignal [ 2 ] . pPrevVal , ix0vxp4hgn -> nonContDerivSignal [ 2 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( ix0vxp4hgn -> nonContDerivSignal [
2 ] . pPrevVal , ix0vxp4hgn -> nonContDerivSignal [ 2 ] . pCurrVal ,
ix0vxp4hgn -> nonContDerivSignal [ 2 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( ix0vxp4hgn -> _mdlRefSfcnS ) ; } } if ( localDW ->
bd4qevfu0d == ( rtInf ) ) { localDW -> bd4qevfu0d = rtmGetTaskTime (
ix0vxp4hgn , 0 ) ; lastU = & localDW -> m0ow4tpwqz ; } else if ( localDW ->
cbahey41qk == ( rtInf ) ) { localDW -> cbahey41qk = rtmGetTaskTime (
ix0vxp4hgn , 0 ) ; lastU = & localDW -> jg54ty1cwy ; } else if ( localDW ->
bd4qevfu0d < localDW -> cbahey41qk ) { localDW -> bd4qevfu0d = rtmGetTaskTime
( ix0vxp4hgn , 0 ) ; lastU = & localDW -> m0ow4tpwqz ; } else { localDW ->
cbahey41qk = rtmGetTaskTime ( ix0vxp4hgn , 0 ) ; lastU = & localDW ->
jg54ty1cwy ; } * lastU = localB -> pw3n0iel1a ; if ( localDW -> em2ikp5wu2 ==
( rtInf ) ) { localDW -> em2ikp5wu2 = rtmGetTaskTime ( ix0vxp4hgn , 0 ) ;
lastU = & localDW -> lnvkvswkmk ; } else if ( localDW -> owjscwly4b == (
rtInf ) ) { localDW -> owjscwly4b = rtmGetTaskTime ( ix0vxp4hgn , 0 ) ; lastU
= & localDW -> lg3idyg3gn ; } else if ( localDW -> em2ikp5wu2 < localDW ->
owjscwly4b ) { localDW -> em2ikp5wu2 = rtmGetTaskTime ( ix0vxp4hgn , 0 ) ;
lastU = & localDW -> lnvkvswkmk ; } else { localDW -> owjscwly4b =
rtmGetTaskTime ( ix0vxp4hgn , 0 ) ; lastU = & localDW -> lg3idyg3gn ; } *
lastU = localB -> n3eh4jgulp ; if ( rtmIsMajorTimeStep ( ix0vxp4hgn ) &&
rtmIsSampleHit ( ix0vxp4hgn , 1 , 0 ) ) { localDW -> bk3k3eisqv =
rt_nrand_Upu32_Yd_f_pw_snf ( & localDW -> eyqjo1awuw ) * pkszrv0bytx . P_17 +
pkszrv0bytx . P_16 ; localDW -> dyzqy0mjwq = rt_nrand_Upu32_Yd_f_pw_snf ( &
localDW -> lz1uqk0kv5 ) * pkszrv0bytx . P_20 + pkszrv0bytx . P_19 ; localDW
-> hcmfe3tedl = rt_nrand_Upu32_Yd_f_pw_snf ( & localDW -> fxvp5f2lww ) *
pkszrv0bytx . P_23 + pkszrv0bytx . P_22 ; } } void io42xjwmdiTID2 ( void ) {
} void nw0hz2etnl ( du0qazvlms * localB , nukvwudi4i * localX , gzx2cfvdiw *
localXdot ) { localXdot -> axit1n0har = 0.0 ; localXdot -> axit1n0har +=
pkszrv0bytx . P_0 * localX -> axit1n0har ; localXdot -> axit1n0har += localB
-> b4aurbrurr ; localXdot -> euoqkojr3o = localB -> n3eh4jgulp ; localXdot ->
gf3q0msrrv = 0.0 ; localXdot -> gf3q0msrrv += pkszrv0bytx . P_4 * localX ->
gf3q0msrrv ; localXdot -> gf3q0msrrv += localB -> e4vr2itcsp ; localXdot ->
k0dnvvgkfb = 0.0 ; localXdot -> k0dnvvgkfb += pkszrv0bytx . P_6 * localX ->
k0dnvvgkfb ; localXdot -> k0dnvvgkfb += localB -> htrw0hsuu1 ; localXdot ->
p5erdkarcx = 0.0 ; localXdot -> p5erdkarcx += pkszrv0bytx . P_9 * localX ->
p5erdkarcx ; localXdot -> p5erdkarcx += localB -> fyxp31xztq ; localXdot ->
lxjccoidzz = 0.0 ; localXdot -> lxjccoidzz += pkszrv0bytx . P_11 * localX ->
lxjccoidzz ; localXdot -> lxjccoidzz += localB -> ialjxmaway ; } void
d02nrneqww ( const real_T * p4f1dmv33s , l0b2hn4zu4 * localZCSV ) { localZCSV
-> ikd15zkvaz = * p4f1dmv33s - pkszrv0bytx . P_25 ; localZCSV -> ifnsgkdepc =
* p4f1dmv33s - pkszrv0bytx . P_26 ; } void ltgy3lilz0 ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 ,
mapchp3byv * const ix0vxp4hgn , du0qazvlms * localB , paioewifyb * localDW ,
nukvwudi4i * localX , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) ix0vxp4hgn , 0 , sizeof ( mapchp3byv ) ) ;
fx3obz21i3 [ 0 ] = mdlref_TID0 ; fx3obz21i3 [ 1 ] = mdlref_TID1 ; fx3obz21i3
[ 2 ] = mdlref_TID2 ; ix0vxp4hgn -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; {
localB -> djhklczuwk = 0.0 ; localB -> pw3n0iel1a = 0.0 ; localB ->
fwdjmhgt3f = 0.0 ; localB -> n3eh4jgulp = 0.0 ; localB -> bpbmoyzcoi = 0.0 ;
localB -> k2gcdolop2 = 0.0 ; localB -> maa0lyq3no = 0.0 ; localB ->
kgkyv5mm5e = 0.0 ; localB -> gaieiu5e4d = 0.0 ; localB -> fdadodbwsk = 0.0 ;
localB -> nnllb3tpat = 0.0 ; localB -> hrauqe30wu = 0.0 ; localB ->
oerpqs5xdi = 0.0 ; localB -> htrw0hsuu1 = 0.0 ; localB -> ialjxmaway = 0.0 ;
localB -> fyxp31xztq = 0.0 ; localB -> e1hi1meqnd = 0.0 ; localB ->
cnyu23mnax = 0.0 ; localB -> b4aurbrurr = 0.0 ; localB -> e4vr2itcsp = 0.0 ;
} ( void ) memset ( ( void * ) localDW , 0 , sizeof ( paioewifyb ) ) ;
localDW -> bd4qevfu0d = 0.0 ; localDW -> m0ow4tpwqz = 0.0 ; localDW ->
cbahey41qk = 0.0 ; localDW -> jg54ty1cwy = 0.0 ; localDW -> em2ikp5wu2 = 0.0
; localDW -> lnvkvswkmk = 0.0 ; localDW -> owjscwly4b = 0.0 ; localDW ->
lg3idyg3gn = 0.0 ; localDW -> bk3k3eisqv = 0.0 ; localDW -> dyzqy0mjwq = 0.0
; localDW -> hcmfe3tedl = 0.0 ; DCservo_InitializeDataMapInfo ( ix0vxp4hgn ,
localDW , localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL )
) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( ix0vxp4hgn -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
ix0vxp4hgn -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( ix0vxp4hgn -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } ix0vxp4hgn -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) ix0vxp4hgn -> NonContDerivMemory . mr_nonContSig0 ; ix0vxp4hgn ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
ix0vxp4hgn -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> fyxp31xztq ) ; ; ix0vxp4hgn -> nonContDerivSignal [ 1 ] . pPrevVal = (
char_T * ) ix0vxp4hgn -> NonContDerivMemory . mr_nonContSig1 ; ix0vxp4hgn ->
nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
ix0vxp4hgn -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> ialjxmaway ) ; ; ix0vxp4hgn -> nonContDerivSignal [ 2 ] . pPrevVal = (
char_T * ) ix0vxp4hgn -> NonContDerivMemory . mr_nonContSig2 ; ix0vxp4hgn ->
nonContDerivSignal [ 2 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
ix0vxp4hgn -> nonContDerivSignal [ 2 ] . pCurrVal = ( char_T * ) ( & localB
-> htrw0hsuu1 ) ; ; } void mr_DCservo_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS
, char_T * modelName , int_T * retVal ) { * retVal = 0 ; * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_DCservo , 42 ) ; *
retVal = 1 ; } static void mr_DCservo_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_DCservo_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_DCservo_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_DCservo_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_DCservo_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_DCservo_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_DCservo_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) ; static uint_T
mr_DCservo_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_DCservo_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_DCservo_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_DCservo_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_DCservo_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_DCservo_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_DCservo_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_DCservo_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_DCservo_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T
fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray
, i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; }
mxArray * mr_DCservo_GetDWork ( const axyxzivhdbq * mdlrefDW ) { static const
char * dwFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray *
ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , dwFieldNames ) ;
mr_DCservo_cacheDataAsMxArray ( ssDW , 0 , 0 , & ( mdlrefDW -> rtb ) , sizeof
( mdlrefDW -> rtb ) ) ; { static const char * dwFieldNames [ 15 ] = {
"mdlrefDW->rtdw.bd4qevfu0d" , "mdlrefDW->rtdw.m0ow4tpwqz" ,
"mdlrefDW->rtdw.cbahey41qk" , "mdlrefDW->rtdw.jg54ty1cwy" ,
"mdlrefDW->rtdw.em2ikp5wu2" , "mdlrefDW->rtdw.lnvkvswkmk" ,
"mdlrefDW->rtdw.owjscwly4b" , "mdlrefDW->rtdw.lg3idyg3gn" ,
"mdlrefDW->rtdw.bk3k3eisqv" , "mdlrefDW->rtdw.dyzqy0mjwq" ,
"mdlrefDW->rtdw.hcmfe3tedl" , "mdlrefDW->rtdw.eyqjo1awuw" ,
"mdlrefDW->rtdw.lz1uqk0kv5" , "mdlrefDW->rtdw.fxvp5f2lww" ,
"mdlrefDW->rtdw.a0eakleq5i" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 15 , dwFieldNames ) ; mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 ,
0 , & ( mdlrefDW -> rtdw . bd4qevfu0d ) , sizeof ( mdlrefDW -> rtdw .
bd4qevfu0d ) ) ; mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 1 , & (
mdlrefDW -> rtdw . m0ow4tpwqz ) , sizeof ( mdlrefDW -> rtdw . m0ow4tpwqz ) )
; mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 2 , & ( mdlrefDW -> rtdw .
cbahey41qk ) , sizeof ( mdlrefDW -> rtdw . cbahey41qk ) ) ;
mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW -> rtdw .
jg54ty1cwy ) , sizeof ( mdlrefDW -> rtdw . jg54ty1cwy ) ) ;
mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 4 , & ( mdlrefDW -> rtdw .
em2ikp5wu2 ) , sizeof ( mdlrefDW -> rtdw . em2ikp5wu2 ) ) ;
mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 5 , & ( mdlrefDW -> rtdw .
lnvkvswkmk ) , sizeof ( mdlrefDW -> rtdw . lnvkvswkmk ) ) ;
mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 6 , & ( mdlrefDW -> rtdw .
owjscwly4b ) , sizeof ( mdlrefDW -> rtdw . owjscwly4b ) ) ;
mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 7 , & ( mdlrefDW -> rtdw .
lg3idyg3gn ) , sizeof ( mdlrefDW -> rtdw . lg3idyg3gn ) ) ;
mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 8 , & ( mdlrefDW -> rtdw .
bk3k3eisqv ) , sizeof ( mdlrefDW -> rtdw . bk3k3eisqv ) ) ;
mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 9 , & ( mdlrefDW -> rtdw .
dyzqy0mjwq ) , sizeof ( mdlrefDW -> rtdw . dyzqy0mjwq ) ) ;
mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 10 , & ( mdlrefDW -> rtdw .
hcmfe3tedl ) , sizeof ( mdlrefDW -> rtdw . hcmfe3tedl ) ) ;
mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 11 , & ( mdlrefDW -> rtdw .
eyqjo1awuw ) , sizeof ( mdlrefDW -> rtdw . eyqjo1awuw ) ) ;
mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 12 , & ( mdlrefDW -> rtdw .
lz1uqk0kv5 ) , sizeof ( mdlrefDW -> rtdw . lz1uqk0kv5 ) ) ;
mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 13 , & ( mdlrefDW -> rtdw .
fxvp5f2lww ) , sizeof ( mdlrefDW -> rtdw . fxvp5f2lww ) ) ;
mr_DCservo_cacheDataAsMxArray ( rtdwData , 0 , 14 , & ( mdlrefDW -> rtdw .
a0eakleq5i ) , sizeof ( mdlrefDW -> rtdw . a0eakleq5i ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_DCservo_SetDWork ( axyxzivhdbq * mdlrefDW , const mxArray * ssDW ) {
mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 ,
sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_DCservo_restoreDataFromMxArray ( & (
mdlrefDW -> rtdw . bd4qevfu0d ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW ->
rtdw . bd4qevfu0d ) ) ; mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW ->
rtdw . m0ow4tpwqz ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw .
m0ow4tpwqz ) ) ; mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw .
cbahey41qk ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . cbahey41qk ) )
; mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . jg54ty1cwy ) ,
rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . jg54ty1cwy ) ) ;
mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . em2ikp5wu2 ) ,
rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . em2ikp5wu2 ) ) ;
mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . lnvkvswkmk ) ,
rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . lnvkvswkmk ) ) ;
mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . owjscwly4b ) ,
rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . owjscwly4b ) ) ;
mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . lg3idyg3gn ) ,
rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . lg3idyg3gn ) ) ;
mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . bk3k3eisqv ) ,
rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . bk3k3eisqv ) ) ;
mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . dyzqy0mjwq ) ,
rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw . dyzqy0mjwq ) ) ;
mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . hcmfe3tedl ) ,
rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . hcmfe3tedl ) ) ;
mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . eyqjo1awuw ) ,
rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw . eyqjo1awuw ) ) ;
mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . lz1uqk0kv5 ) ,
rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw . lz1uqk0kv5 ) ) ;
mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . fxvp5f2lww ) ,
rtdwData , 0 , 13 , sizeof ( mdlrefDW -> rtdw . fxvp5f2lww ) ) ;
mr_DCservo_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . a0eakleq5i ) ,
rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . a0eakleq5i ) ) ; } } void
mr_DCservo_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum
[ 4 ] = { 161898969U , 2237313404U , 1026865842U , 3761715806U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "DCservo" , & chksum [ 0 ] ) ; }
mxArray * mr_DCservo_GetSimStateDisallowedBlocks ( ) { return NULL ; }
