#include "__cf_DCservo.h"
#ifndef RTW_HEADER_DCservo_cap_host_h_
#define RTW_HEADER_DCservo_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DCservo_host_DataMapInfo_T
;
#ifdef __cplusplus
extern "C" {
#endif
void DCservo_host_InitializeDataMapInfo ( DCservo_host_DataMapInfo_T *
dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
