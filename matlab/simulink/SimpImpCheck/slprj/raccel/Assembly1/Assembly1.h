#include "__cf_Assembly1.h"
#ifndef RTW_HEADER_Assembly1_h_
#define RTW_HEADER_Assembly1_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Assembly1_COMMON_INCLUDES_
#define Assembly1_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "Assembly1_3ef711a9_1_gateway.h"
#include "Assembly1_d7f0d859_1_gateway.h"
#include "Assembly1_aa69c5c5_1_gateway.h"
#include "Assembly1_e38647b6_1_gateway.h"
#endif
#include "Assembly1_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Assembly1
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (27) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (22)   
#elif NCSTATES != 22
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T co1k2zqmio [ 6 ] ; real_T ivye1rtk20 [ 3 ] ; real_T
mfr2tvqlet [ 4 ] ; real_T fusvirqcpv [ 9 ] ; real_T mp13huktqq [ 2 ] ; real_T
nmep4bwbvk ; real_T ivpptgv24m ; real_T ki1zyukxvx [ 4 ] ; real_T frsgfxkt3q
[ 8 ] ; real_T k2z5lg5kdn ; real_T njek1qn1tc [ 4 ] ; real_T czgg222wvg [ 8 ]
; real_T aijj1xqxw3 ; real_T f2qb1e2yww [ 4 ] ; real_T muuzxzxw4l [ 4 ] ;
real_T a22n54l2kn [ 4 ] ; real_T c2u24du2rp [ 9 ] ; real_T mrerd0iytt [ 9 ] ;
real_T lyliwmyio0 [ 3 ] ; real_T primmsbaty ; real_T fdofaimx1g ; real_T
fbuanqik5o ; real_T korqbvw5sq ; real_T glryjuizod ; real_T bsnpyezm2e [ 3 ]
; real_T nyn4bpigfe [ 3 ] ; real_T e15gfpfe5w [ 3 ] ; } B ; typedef struct {
real_T gmwt5nplpe [ 2 ] ; real_T brle23pjg2 [ 2 ] ; real_T d3og1ajffx [ 2 ] ;
real_T f0inrntm42 [ 2 ] ; real_T nuj1fz0fxi [ 2 ] ; real_T cptvkir1vg [ 2 ] ;
real_T hulwpi0wcl ; real_T im1pevikpw ; real_T nrev0sejyt ; real_T jqz5nrtbv4
; real_T dc0rgh5eng ; real_T jd1pi1xhn4 ; real_T onjn0sqovd ; real_T
cyoazv120t ; real_T ionvv3zokq ; void * j34f1tmhj5 ; void * cn1keqm2rr ; void
* jkiv5jchi2 ; void * fmeyr3eqdt ; void * psc3wznusv ; void * ebnkz3vyz1 ;
void * ngwhbyugnx ; void * ewwm4tqlno ; void * kg5jiwuyn0 ; void * onzz15ah1p
; struct { void * LoggedData [ 3 ] ; } p1ooa01wfg ; struct { void *
LoggedData ; } chbtvsma4c ; struct { void * LoggedData ; } fy3ytfnr0f ; void
* lw0140esdt ; void * bh3wkjeszc ; void * culhpxxaih ; void * eiv15bbldc ;
void * ijjifvd0g3 ; void * fwnqdgglb4 ; void * bdjq0ta3fn ; void * eyjaph4uza
; void * bjfczscd1q ; void * nur3sucol0 ; struct { void * LoggedData ; }
bhnjxdow4x ; struct { void * LoggedData ; } eqn5wqgu33 ; struct { void *
LoggedData ; } bu2nsr0afw ; struct { void * LoggedData ; } dnvg3vkfoz ; void
* nkwrexavzk ; void * khj0d2a154 ; void * cryjuu4ual ; void * dqexmtups0 ;
void * e3uhjaopgl ; void * l53yhgr44w ; void * mer5fxqibo ; void * lhrjdkocrx
; void * d0zsnonvxo ; void * koox14veuw ; void * pu2bujddd5 ; void *
h14n5cqflx ; void * enml431ah0 ; void * gv3sgij0wm ; void * gdo2ywgcxo ; void
* lf2p3a1qfd ; void * atymz31saa ; void * irkatqjv53 ; void * gkziowfp4v ;
void * ldazzt5nyy ; int_T osr1cl1ae3 ; int_T gug5wv1c3f ; int_T fulvewb14x [
3 ] ; int_T n3wkgeymzw ; int_T pldt5kkraj [ 3 ] ; int_T ine0wrogr1 ; int_T
mw4lmbhnkl [ 3 ] ; int_T a25cheyog3 ; int32_T fx1szshdqv ; int32_T czbikmwyj1
; int32_T d3ac2seyd3 ; boolean_T mrdlqavfra ; boolean_T jphyxtkcij ;
boolean_T jo2lkovo15 ; boolean_T nwgvjfx0qr ; boolean_T j5qg1md2vq ;
boolean_T eeyftk0s2j ; boolean_T jz13omuq2t ; boolean_T metcajx0yb ; } DW ;
typedef struct { real_T onsy5ggnz4 [ 6 ] ; real_T ms5tvie2a2 [ 6 ] ; real_T
d3xih20wjl [ 5 ] ; real_T bqyvhwr1me [ 5 ] ; } X ; typedef struct { real_T
onsy5ggnz4 [ 6 ] ; real_T ms5tvie2a2 [ 6 ] ; real_T d3xih20wjl [ 5 ] ; real_T
bqyvhwr1me [ 5 ] ; } XDot ; typedef struct { boolean_T onsy5ggnz4 [ 6 ] ;
boolean_T ms5tvie2a2 [ 6 ] ; boolean_T d3xih20wjl [ 5 ] ; boolean_T
bqyvhwr1me [ 5 ] ; } XDis ; typedef struct { real_T onsy5ggnz4 [ 6 ] ; real_T
ms5tvie2a2 [ 6 ] ; real_T d3xih20wjl [ 5 ] ; real_T bqyvhwr1me [ 5 ] ; }
CStateAbsTol ; typedef struct { real_T g1uwlzzmub ; real_T cqcc2smlxd ;
real_T i0fnbyatr1 ; real_T pusnihrbco ; real_T aqw4ariikj ; real_T etxzphx1ep
; real_T bs40t2ic0n ; real_T ezjsumqeri ; real_T imvtmvbck3 ; real_T
pmj3ljukpj ; real_T li0rwmz002 ; real_T d4mdo5lwc3 ; } ZCV ; typedef struct {
int_T ir [ 16 ] ; int_T jc [ 23 ] ; real_T pr [ 16 ] ; } MassMatrix ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
GAIN_Gain ; real_T _Value [ 9 ] ; real_T Damping_Value ; real_T
GoalLocation_Value [ 3 ] ; real_T I_Value [ 9 ] ; real_T Length1_Value ;
real_T Length2_Value ; real_T Length3_Value ; real_T Stiffness_Value ; real_T
Velocity_Value [ 3 ] ; real_T accel_Value [ 3 ] ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern MassMatrix rtMassMatrix ; extern P rtP ; extern const
rtwCAPI_ModelMappingStaticInfo * Assembly1_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
