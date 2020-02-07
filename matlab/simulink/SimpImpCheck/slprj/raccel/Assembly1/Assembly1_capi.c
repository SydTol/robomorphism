#include "__cf_Assembly1.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Assembly1_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Assembly1.h"
#include "Assembly1_capi.h"
#include "Assembly1_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"Assembly1/MATLAB Function" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 1 , 1 , TARGET_STRING ( "Assembly1/MATLAB Function" ) , TARGET_STRING ( ""
) , 1 , 0 , 0 , 0 , 0 } , { 2 , 1 , TARGET_STRING (
"Assembly1/MATLAB Function" ) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } ,
{ 3 , 1 , TARGET_STRING ( "Assembly1/MATLAB Function" ) , TARGET_STRING ( ""
) , 3 , 0 , 0 , 0 , 0 } , { 4 , 1 , TARGET_STRING (
"Assembly1/MATLAB Function" ) , TARGET_STRING ( "" ) , 4 , 0 , 0 , 0 , 0 } ,
{ 5 , 1 , TARGET_STRING ( "Assembly1/MATLAB Function" ) , TARGET_STRING ( ""
) , 5 , 0 , 1 , 0 , 0 } , { 6 , 1 , TARGET_STRING (
"Assembly1/MATLAB Function" ) , TARGET_STRING ( "" ) , 6 , 0 , 1 , 0 , 0 } ,
{ 7 , 1 , TARGET_STRING ( "Assembly1/MATLAB Function" ) , TARGET_STRING ( ""
) , 7 , 0 , 1 , 0 , 0 } , { 8 , 2 , TARGET_STRING (
"Assembly1/MATLAB Function1" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } ,
{ 9 , 0 , TARGET_STRING ( "Assembly1/Product" ) , TARGET_STRING ( "" ) , 0 ,
0 , 3 , 0 , 2 } , { 10 , 0 , TARGET_STRING ( "Assembly1/Product1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
"Assembly1/MotorSubSys /Rate Transition" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 3 } , { 12 , 0 , TARGET_STRING (
"Assembly1/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( ""
) , 0 , 0 , 4 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"Assembly1/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING ( ""
) , 0 , 0 , 4 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"Assembly1/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING ( ""
) , 0 , 0 , 4 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"Assembly1/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"Assembly1/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 5 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"Assembly1/MotorSubSys /Solver Configuration1/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"Assembly1/MotorSubSys /Solver Configuration1/EVAL_KEY/OUTPUT_1_0" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"Assembly1/MotorSubSys /Solver Configuration1/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"Assembly1/MotorSubSys 1/Solver Configuration1/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"Assembly1/MotorSubSys 1/Solver Configuration1/EVAL_KEY/OUTPUT_1_0" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"Assembly1/MotorSubSys 1/Solver Configuration1/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"Assembly1/MotorSubSys 2/Solver Configuration1/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"Assembly1/MotorSubSys 2/Solver Configuration1/EVAL_KEY/OUTPUT_1_0" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"Assembly1/MotorSubSys 2/Solver Configuration1/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"Assembly1/MotorSubSys /Sensing/PS-Simulink Converter 1/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 27 , TARGET_STRING ( "Assembly1/  " ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 28 , TARGET_STRING (
"Assembly1/Damping " ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 29 ,
TARGET_STRING ( "Assembly1/GoalLocation" ) , TARGET_STRING ( "Value" ) , 0 ,
9 , 0 } , { 30 , TARGET_STRING ( "Assembly1/I" ) , TARGET_STRING ( "Value" )
, 0 , 3 , 0 } , { 31 , TARGET_STRING ( "Assembly1/Length1 " ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 32 , TARGET_STRING ( "Assembly1/Length2 " ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 33 , TARGET_STRING (
"Assembly1/Length3 " ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 34 ,
TARGET_STRING ( "Assembly1/Stiffness " ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 35 , TARGET_STRING ( "Assembly1/Velocity " ) , TARGET_STRING (
"Value" ) , 0 , 9 , 0 } , { 36 , TARGET_STRING ( "Assembly1/accel  " ) ,
TARGET_STRING ( "Value" ) , 0 , 9 , 0 } , { 37 , TARGET_STRING (
"Assembly1/MotorSubSys /Sensing/PS-Simulink Converter 1/EVAL_KEY/GAIN" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 ,
( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . primmsbaty , & rtB . fdofaimx1g ,
& rtB . fbuanqik5o , & rtB . korqbvw5sq , & rtB . glryjuizod , & rtB .
bsnpyezm2e [ 0 ] , & rtB . nyn4bpigfe [ 0 ] , & rtB . e15gfpfe5w [ 0 ] , &
rtB . lyliwmyio0 [ 0 ] , & rtB . mrerd0iytt [ 0 ] , & rtB . c2u24du2rp [ 0 ]
, & rtB . nmep4bwbvk , & rtB . a22n54l2kn [ 0 ] , & rtB . f2qb1e2yww [ 0 ] ,
& rtB . muuzxzxw4l [ 0 ] , & rtB . ivye1rtk20 [ 0 ] , & rtB . co1k2zqmio [ 0
] , & rtB . mfr2tvqlet [ 0 ] , & rtB . mp13huktqq [ 0 ] , & rtB . fusvirqcpv
[ 0 ] , & rtB . ki1zyukxvx [ 0 ] , & rtB . k2z5lg5kdn , & rtB . frsgfxkt3q [
0 ] , & rtB . njek1qn1tc [ 0 ] , & rtB . aijj1xqxw3 , & rtB . czgg222wvg [ 0
] , & rtB . ivpptgv24m , & rtP . _Value [ 0 ] , & rtP . Damping_Value , & rtP
. GoalLocation_Value [ 0 ] , & rtP . I_Value [ 0 ] , & rtP . Length1_Value ,
& rtP . Length2_Value , & rtP . Length3_Value , & rtP . Stiffness_Value , &
rtP . Velocity_Value [ 0 ] , & rtP . accel_Value [ 0 ] , & rtP . GAIN_Gain ,
} ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 ,
0 } , { rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_VECTOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 3 , 1 , 1 , 3 , 3 , 3 , 4 , 1 ,
6 , 1 , 2 , 1 , 9 , 1 , 8 , 1 } ; static const real_T rtcapiStoredFloats [ ]
= { 0.0 , 1.0 , 0.001 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { {
( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 0 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 1 , 0 } , { ( NULL ) , ( NULL ) , 3 , 0 } , { (
const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 2 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 27 , ( NULL ) , 0 , ( NULL ) , 0 } , {
rtBlockParameters , 11 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 1297423731U , 135611111U , 1216189137U ,
409340220U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
Assembly1_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Assembly1_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Assembly1_host_InitializeDataMapInfo ( Assembly1_host_DataMapInfo_T *
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
