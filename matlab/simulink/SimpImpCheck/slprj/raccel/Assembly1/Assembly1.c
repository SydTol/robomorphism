#include "__cf_Assembly1.h"
#include "rt_logging_mmi.h"
#include "Assembly1_capi.h"
#include <math.h>
#include "Assembly1.h"
#include "Assembly1_private.h"
#include "Assembly1_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "10.0 (R2019b) 18-Jul-2019" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj//raccel//Assembly1//Assembly1_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; MassMatrix rtMassMatrix ; DW rtDW ; static SimStruct model_S
; SimStruct * const rtS = & model_S ; void MdlInitialize ( void ) { boolean_T
tmp ; int_T tmp_p ; char * tmp_e ; tmp = false ; if ( tmp ) { tmp_p = strcmp
( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } tmp = false ; if ( tmp ) { tmp_p =
strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } tmp = false ; if ( tmp ) { tmp_p =
strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } tmp = false ; if ( tmp ) { tmp_p =
strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } { static int_T modelMassMatrixIr [ 16
] = { 0 , 1 , 2 , 3 , 4 , 5 , 7 , 9 , 6 , 8 , 13 , 14 , 12 , 18 , 19 , 17 } ;
static int_T modelMassMatrixJc [ 23 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 8 , 9 ,
10 , 10 , 10 , 10 , 12 , 13 , 13 , 13 , 13 , 15 , 16 , 16 , 16 , 16 } ;
static real_T modelMassMatrixPr [ 16 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 } ; ( void )
memcpy ( rtMassMatrix . ir , modelMassMatrixIr , 16 * sizeof ( int_T ) ) ; (
void ) memcpy ( rtMassMatrix . jc , modelMassMatrixJc , 23 * sizeof ( int_T )
) ; ( void ) memcpy ( rtMassMatrix . pr , modelMassMatrixPr , 16 * sizeof (
real_T ) ) ; } } void MdlStart ( void ) { NeslSimulator * tmp ; boolean_T
tmp_p ; NeuDiagnosticManager * diagnosticManager ; NeModelParameters
modelParameters ; real_T tmp_e ; NeuDiagnosticTree * diagnosticTree ; int32_T
tmp_i ; char * msg ; NeslSimulationData * simulationData ; real_T time ;
NeModelParameters modelParameters_p ; real_T time_p ; NeModelParameters
modelParameters_e ; real_T time_e ; NeModelParameters modelParameters_i ;
real_T time_i ; NeModelParameters modelParameters_m ; real_T time_m ;
NeModelParameters modelParameters_g ; real_T time_g ; NeModelParameters
modelParameters_j ; real_T time_j ; NeModelParameters modelParameters_f ;
real_T time_f ; NeParameterBundle expl_temp ; NeParameterBundle expl_temp_p ;
NeParameterBundle expl_temp_e ; NeParameterBundle expl_temp_i ; { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void *
* pOSigstreamManagerAddr = ( NULL ) ; const int maxErrorBufferSize = 16384 ;
char errMsgCreatingOSigstreamManager [ 16384 ] ; bool
errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } { static int_T rt_ToWksWidths [ ] = {
1 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 1 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0
} ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
"Assembly1/To Workspace1" ; rtDW . chbtvsma4c . LoggedData =
rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) ,
ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "xPos" , 1 , 0 ,
1 , 0.0 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . chbtvsma4c
. LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 1
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 1 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0
} ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
"Assembly1/To Workspace3" ; rtDW . fy3ytfnr0f . LoggedData =
rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) ,
ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "yPos" , 1 , 0 ,
1 , 0.0 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . fy3ytfnr0f
. LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 1
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 1 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0
} ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
"Assembly1/MotorSubSys\n/To Workspace3" ; rtDW . eqn5wqgu33 . LoggedData =
rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) ,
ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) ,
"normalisedTorque" , 1 , 0 , 1 , 0.001 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . eqn5wqgu33 . LoggedData == ( NULL ) )
return ; } { int_T dimensions [ 1 ] = { 1 } ; rtDW . bu2nsr0afw . LoggedData
= rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) ,
ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "desiredTorque"
, SS_DOUBLE , 0 , 0 , 0 , 1 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , (
NULL ) , 0 , 1 , 0.0 , 1 ) ; if ( rtDW . bu2nsr0afw . LoggedData == ( NULL )
) return ; } tmp = nesl_lease_simulator ( "Assembly1/Solver Configuration_1"
, 0 , 0 ) ; rtDW . j34f1tmhj5 = ( void * ) tmp ; tmp_p = pointer_is_null (
rtDW . j34f1tmhj5 ) ; if ( tmp_p ) { Assembly1_3ef711a9_1_gateway ( ) ; tmp =
nesl_lease_simulator ( "Assembly1/Solver Configuration_1" , 0 , 0 ) ; rtDW .
j34f1tmhj5 = ( void * ) tmp ; } simulationData = nesl_create_simulation_data
( ) ; rtDW . cn1keqm2rr = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . jkiv5jchi2 = ( void * ) diagnosticManager
; modelParameters . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters .
mSolverTolerance = 0.001 ; modelParameters . mVariableStepSolver = true ;
modelParameters . mFixedStepSize = 0.001 ; modelParameters . mStartTime = 0.0
; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_NONE ; modelParameters .
mRTWModifiedTimeStamp = 5.02988822E+8 ; tmp_e = 0.001 ; modelParameters .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jkiv5jchi2 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . j34f1tmhj5
, & modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
expl_temp . mRealParameters . mN = 0 ; expl_temp . mRealParameters . mX =
NULL ; expl_temp . mLogicalParameters . mN = 0 ; expl_temp .
mLogicalParameters . mX = NULL ; expl_temp . mIntegerParameters . mN = 0 ;
expl_temp . mIntegerParameters . mX = NULL ; expl_temp . mIndexParameters .
mN = 0 ; expl_temp . mIndexParameters . mX = NULL ; nesl_simulator_set_rtps (
( NeslSimulator * ) rtDW . j34f1tmhj5 , expl_temp ) ; simulationData = (
NeslSimulationData * ) rtDW . cn1keqm2rr ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 6 ;
simulationData -> mData -> mContStates . mX = & rtX . onsy5ggnz4 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . hulwpi0wcl ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
osr1cl1ae3 ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS
) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp_p
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . jkiv5jchi2 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . j34f1tmhj5 ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Assembly1/Solver Configuration_1" , 1 , 0 ) ; rtDW . ebnkz3vyz1 = ( void * )
tmp ; tmp_p = pointer_is_null ( rtDW . ebnkz3vyz1 ) ; if ( tmp_p ) {
Assembly1_3ef711a9_1_gateway ( ) ; tmp = nesl_lease_simulator (
"Assembly1/Solver Configuration_1" , 1 , 0 ) ; rtDW . ebnkz3vyz1 = ( void * )
tmp ; } simulationData = nesl_create_simulation_data ( ) ; rtDW . ngwhbyugnx
= ( void * ) simulationData ; diagnosticManager = rtw_create_diagnostics ( )
; rtDW . ewwm4tqlno = ( void * ) diagnosticManager ; modelParameters_p .
mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverTolerance =
0.001 ; modelParameters_p . mVariableStepSolver = true ; modelParameters_p .
mFixedStepSize = 0.001 ; modelParameters_p . mStartTime = 0.0 ;
modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_p .
mRTWModifiedTimeStamp = 5.02988822E+8 ; tmp_e = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_p . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_p . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ewwm4tqlno ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . ebnkz3vyz1
, & modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . ngwhbyugnx ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . im1pevikpw ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . gug5wv1c3f ; tmp_p = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp_p ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp_p = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp_p ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ewwm4tqlno ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ebnkz3vyz1 ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Assembly1/MotorSubSys /Solver Configuration1_1" , 0 , 0 ) ; rtDW .
lw0140esdt = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . lw0140esdt ) ;
if ( tmp_p ) { Assembly1_d7f0d859_1_gateway ( ) ; tmp = nesl_lease_simulator
( "Assembly1/MotorSubSys /Solver Configuration1_1" , 0 , 0 ) ; rtDW .
lw0140esdt = ( void * ) tmp ; } simulationData = nesl_create_simulation_data
( ) ; rtDW . bh3wkjeszc = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . culhpxxaih = ( void * ) diagnosticManager
; modelParameters_e . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_e .
mSolverTolerance = 0.001 ; modelParameters_e . mVariableStepSolver = true ;
modelParameters_e . mFixedStepSize = 0.001 ; modelParameters_e . mStartTime =
0.0 ; modelParameters_e . mLoadInitialState = false ; modelParameters_e .
mUseSimState = false ; modelParameters_e . mLinTrimCompile = false ;
modelParameters_e . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_e .
mRTWModifiedTimeStamp = 5.02988618E+8 ; tmp_e = 0.001 ; modelParameters_e .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_e . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_e . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . culhpxxaih ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . lw0140esdt
, & modelParameters_e , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
expl_temp_p . mRealParameters . mN = 0 ; expl_temp_p . mRealParameters . mX =
NULL ; expl_temp_p . mLogicalParameters . mN = 0 ; expl_temp_p .
mLogicalParameters . mX = NULL ; expl_temp_p . mIntegerParameters . mN = 0 ;
expl_temp_p . mIntegerParameters . mX = NULL ; expl_temp_p . mIndexParameters
. mN = 0 ; expl_temp_p . mIndexParameters . mX = NULL ;
nesl_simulator_set_rtps ( ( NeslSimulator * ) rtDW . lw0140esdt , expl_temp_p
) ; simulationData = ( NeslSimulationData * ) rtDW . bh3wkjeszc ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . ms5tvie2a2 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . nrev0sejyt ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
fulvewb14x [ 0 ] ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp_p ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS
) ; tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . culhpxxaih ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lw0140esdt ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Assembly1/MotorSubSys /Solver Configuration1_1" , 1 , 0 ) ; rtDW .
fwnqdgglb4 = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . fwnqdgglb4 ) ;
if ( tmp_p ) { Assembly1_d7f0d859_1_gateway ( ) ; tmp = nesl_lease_simulator
( "Assembly1/MotorSubSys /Solver Configuration1_1" , 1 , 0 ) ; rtDW .
fwnqdgglb4 = ( void * ) tmp ; } simulationData = nesl_create_simulation_data
( ) ; rtDW . bdjq0ta3fn = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . eyjaph4uza = ( void * ) diagnosticManager
; modelParameters_i . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_i .
mSolverTolerance = 0.001 ; modelParameters_i . mVariableStepSolver = true ;
modelParameters_i . mFixedStepSize = 0.001 ; modelParameters_i . mStartTime =
0.0 ; modelParameters_i . mLoadInitialState = false ; modelParameters_i .
mUseSimState = false ; modelParameters_i . mLinTrimCompile = false ;
modelParameters_i . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_i .
mRTWModifiedTimeStamp = 5.02988618E+8 ; tmp_e = 0.001 ; modelParameters_i .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_i . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_i . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . eyjaph4uza ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . fwnqdgglb4
, & modelParameters_i , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . bdjq0ta3fn ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . jqz5nrtbv4 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . n3wkgeymzw ; tmp_p = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp_p ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp_p = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp_p ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . eyjaph4uza ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . fwnqdgglb4 ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Assembly1/MotorSubSys 1/Solver Configuration1_1" , 0 , 0 ) ; rtDW .
nkwrexavzk = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . nkwrexavzk ) ;
if ( tmp_p ) { Assembly1_aa69c5c5_1_gateway ( ) ; tmp = nesl_lease_simulator
( "Assembly1/MotorSubSys 1/Solver Configuration1_1" , 0 , 0 ) ; rtDW .
nkwrexavzk = ( void * ) tmp ; } simulationData = nesl_create_simulation_data
( ) ; rtDW . khj0d2a154 = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . cryjuu4ual = ( void * ) diagnosticManager
; modelParameters_m . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_m .
mSolverTolerance = 0.001 ; modelParameters_m . mVariableStepSolver = true ;
modelParameters_m . mFixedStepSize = 0.001 ; modelParameters_m . mStartTime =
0.0 ; modelParameters_m . mLoadInitialState = false ; modelParameters_m .
mUseSimState = false ; modelParameters_m . mLinTrimCompile = false ;
modelParameters_m . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_m .
mRTWModifiedTimeStamp = 5.02988618E+8 ; tmp_e = 0.001 ; modelParameters_m .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_m . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_m . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . cryjuu4ual ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . nkwrexavzk
, & modelParameters_m , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
expl_temp_e . mRealParameters . mN = 0 ; expl_temp_e . mRealParameters . mX =
NULL ; expl_temp_e . mLogicalParameters . mN = 0 ; expl_temp_e .
mLogicalParameters . mX = NULL ; expl_temp_e . mIntegerParameters . mN = 0 ;
expl_temp_e . mIntegerParameters . mX = NULL ; expl_temp_e . mIndexParameters
. mN = 0 ; expl_temp_e . mIndexParameters . mX = NULL ;
nesl_simulator_set_rtps ( ( NeslSimulator * ) rtDW . nkwrexavzk , expl_temp_e
) ; simulationData = ( NeslSimulationData * ) rtDW . khj0d2a154 ; time_m =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_m ; simulationData -> mData -> mContStates .
mN = 5 ; simulationData -> mData -> mContStates . mX = & rtX . d3xih20wjl [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . jd1pi1xhn4 ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pldt5kkraj [ 0 ] ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp_p ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS
) ; tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . cryjuu4ual ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . nkwrexavzk ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Assembly1/MotorSubSys 1/Solver Configuration1_1" , 1 , 0 ) ; rtDW .
l53yhgr44w = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . l53yhgr44w ) ;
if ( tmp_p ) { Assembly1_aa69c5c5_1_gateway ( ) ; tmp = nesl_lease_simulator
( "Assembly1/MotorSubSys 1/Solver Configuration1_1" , 1 , 0 ) ; rtDW .
l53yhgr44w = ( void * ) tmp ; } simulationData = nesl_create_simulation_data
( ) ; rtDW . mer5fxqibo = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . lhrjdkocrx = ( void * ) diagnosticManager
; modelParameters_g . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_g .
mSolverTolerance = 0.001 ; modelParameters_g . mVariableStepSolver = true ;
modelParameters_g . mFixedStepSize = 0.001 ; modelParameters_g . mStartTime =
0.0 ; modelParameters_g . mLoadInitialState = false ; modelParameters_g .
mUseSimState = false ; modelParameters_g . mLinTrimCompile = false ;
modelParameters_g . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_g .
mRTWModifiedTimeStamp = 5.02988618E+8 ; tmp_e = 0.001 ; modelParameters_g .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_g . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_g . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lhrjdkocrx ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . l53yhgr44w
, & modelParameters_g , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . mer5fxqibo ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . onjn0sqovd ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ine0wrogr1 ; tmp_p = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp_p ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp_p = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp_p ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lhrjdkocrx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . l53yhgr44w ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Assembly1/MotorSubSys 2/Solver Configuration1_1" , 0 , 0 ) ; rtDW .
pu2bujddd5 = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . pu2bujddd5 ) ;
if ( tmp_p ) { Assembly1_e38647b6_1_gateway ( ) ; tmp = nesl_lease_simulator
( "Assembly1/MotorSubSys 2/Solver Configuration1_1" , 0 , 0 ) ; rtDW .
pu2bujddd5 = ( void * ) tmp ; } simulationData = nesl_create_simulation_data
( ) ; rtDW . h14n5cqflx = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . enml431ah0 = ( void * ) diagnosticManager
; modelParameters_j . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_j .
mSolverTolerance = 0.001 ; modelParameters_j . mVariableStepSolver = true ;
modelParameters_j . mFixedStepSize = 0.001 ; modelParameters_j . mStartTime =
0.0 ; modelParameters_j . mLoadInitialState = false ; modelParameters_j .
mUseSimState = false ; modelParameters_j . mLinTrimCompile = false ;
modelParameters_j . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_j .
mRTWModifiedTimeStamp = 5.02988618E+8 ; tmp_e = 0.001 ; modelParameters_j .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_j . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_j . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . enml431ah0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . pu2bujddd5
, & modelParameters_j , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
expl_temp_i . mRealParameters . mN = 0 ; expl_temp_i . mRealParameters . mX =
NULL ; expl_temp_i . mLogicalParameters . mN = 0 ; expl_temp_i .
mLogicalParameters . mX = NULL ; expl_temp_i . mIntegerParameters . mN = 0 ;
expl_temp_i . mIntegerParameters . mX = NULL ; expl_temp_i . mIndexParameters
. mN = 0 ; expl_temp_i . mIndexParameters . mX = NULL ;
nesl_simulator_set_rtps ( ( NeslSimulator * ) rtDW . pu2bujddd5 , expl_temp_i
) ; simulationData = ( NeslSimulationData * ) rtDW . h14n5cqflx ; time_j =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_j ; simulationData -> mData -> mContStates .
mN = 5 ; simulationData -> mData -> mContStates . mX = & rtX . bqyvhwr1me [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . cyoazv120t ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
mw4lmbhnkl [ 0 ] ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp_p ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS
) ; tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . enml431ah0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . pu2bujddd5 ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Assembly1/MotorSubSys 2/Solver Configuration1_1" , 1 , 0 ) ; rtDW .
lf2p3a1qfd = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . lf2p3a1qfd ) ;
if ( tmp_p ) { Assembly1_e38647b6_1_gateway ( ) ; tmp = nesl_lease_simulator
( "Assembly1/MotorSubSys 2/Solver Configuration1_1" , 1 , 0 ) ; rtDW .
lf2p3a1qfd = ( void * ) tmp ; } simulationData = nesl_create_simulation_data
( ) ; rtDW . atymz31saa = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . irkatqjv53 = ( void * ) diagnosticManager
; modelParameters_f . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_f .
mSolverTolerance = 0.001 ; modelParameters_f . mVariableStepSolver = true ;
modelParameters_f . mFixedStepSize = 0.001 ; modelParameters_f . mStartTime =
0.0 ; modelParameters_f . mLoadInitialState = false ; modelParameters_f .
mUseSimState = false ; modelParameters_f . mLinTrimCompile = false ;
modelParameters_f . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_f .
mRTWModifiedTimeStamp = 5.02988618E+8 ; tmp_e = 0.001 ; modelParameters_f .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_f . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_f . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . irkatqjv53 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . lf2p3a1qfd
, & modelParameters_f , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . atymz31saa ; time_f = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_f ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . ionvv3zokq ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . a25cheyog3 ; tmp_p = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp_p ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp_p = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp_p ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . irkatqjv53 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lf2p3a1qfd ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 12 ] ; int_T tmp_e [ 4 ] ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T i ; char * msg ; real_T time_p ;
real_T tmp_i [ 18 ] ; int_T tmp_m [ 5 ] ; real_T time_e ; real_T tmp_g [ 4 ]
; int_T tmp_j [ 2 ] ; real_T time_i ; real_T tmp_f [ 13 ] ; int_T tmp_c [ 3 ]
; real_T time_m ; real_T tmp_k [ 4 ] ; int_T tmp_b [ 2 ] ; real_T time_g ;
real_T tmp_n [ 12 ] ; int_T tmp_l [ 3 ] ; real_T time_j ; real_T tmp_d [ 4 ]
; int_T tmp_o [ 2 ] ; real_T time_f ; real_T tmp_dz [ 12 ] ; int_T tmp_fs [ 3
] ; real_T xPos ; real_T yPos ; real_T controlTorques [ 3 ] ; real_T tmp_ck [
9 ] ; real_T tmp_f2 [ 9 ] ; real_T tmp_kt [ 3 ] ; real_T ho1ozys3q0_idx_0 ;
real_T ho1ozys3q0_idx_1 ; real_T ho1ozys3q0_idx_2 ; real_T tmp_lt ; real_T
tmp_hn ; real_T tmp_ap ; real_T tmp_pj ; real_T tmp_po ; real_T tmp_pk ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . lyliwmyio0 [ 0 ] = rtP .
Length1_Value ; rtB . lyliwmyio0 [ 1 ] = rtP . Length2_Value ; rtB .
lyliwmyio0 [ 2 ] = rtP . Length3_Value ; } simulationData = (
NeslSimulationData * ) rtDW . cn1keqm2rr ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 6 ;
simulationData -> mData -> mContStates . mX = & rtX . onsy5ggnz4 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . hulwpi0wcl ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
osr1cl1ae3 ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
f2qb1e2yww [ 0 ] ; tmp_p [ 1 ] = rtB . f2qb1e2yww [ 1 ] ; tmp_p [ 2 ] = rtB .
f2qb1e2yww [ 2 ] ; tmp_p [ 3 ] = rtB . f2qb1e2yww [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . muuzxzxw4l [ 0 ] ; tmp_p [ 5 ] = rtB . muuzxzxw4l [ 1 ] ;
tmp_p [ 6 ] = rtB . muuzxzxw4l [ 2 ] ; tmp_p [ 7 ] = rtB . muuzxzxw4l [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . a22n54l2kn [ 0 ] ; tmp_p [ 9 ] = rtB .
a22n54l2kn [ 1 ] ; tmp_p [ 10 ] = rtB . a22n54l2kn [ 2 ] ; tmp_p [ 11 ] = rtB
. a22n54l2kn [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData -> mData ->
mInputValues . mN = 12 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 6 ; simulationData -> mData ->
mOutputs . mX = & rtB . co1k2zqmio [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jkiv5jchi2 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW . j34f1tmhj5 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . ngwhbyugnx ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . im1pevikpw ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . gug5wv1c3f ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_m [ 0 ] = 0 ;
tmp_i [ 0 ] = rtB . f2qb1e2yww [ 0 ] ; tmp_i [ 1 ] = rtB . f2qb1e2yww [ 1 ] ;
tmp_i [ 2 ] = rtB . f2qb1e2yww [ 2 ] ; tmp_i [ 3 ] = rtB . f2qb1e2yww [ 3 ] ;
tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . muuzxzxw4l [ 0 ] ; tmp_i [ 5 ] = rtB .
muuzxzxw4l [ 1 ] ; tmp_i [ 6 ] = rtB . muuzxzxw4l [ 2 ] ; tmp_i [ 7 ] = rtB .
muuzxzxw4l [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . a22n54l2kn [ 0 ] ;
tmp_i [ 9 ] = rtB . a22n54l2kn [ 1 ] ; tmp_i [ 10 ] = rtB . a22n54l2kn [ 2 ]
; tmp_i [ 11 ] = rtB . a22n54l2kn [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] =
rtB . co1k2zqmio [ 0 ] ; tmp_i [ 13 ] = rtB . co1k2zqmio [ 1 ] ; tmp_i [ 14 ]
= rtB . co1k2zqmio [ 2 ] ; tmp_i [ 15 ] = rtB . co1k2zqmio [ 3 ] ; tmp_i [ 16
] = rtB . co1k2zqmio [ 4 ] ; tmp_i [ 17 ] = rtB . co1k2zqmio [ 5 ] ; tmp_m [
4 ] = 18 ; simulationData -> mData -> mInputValues . mN = 18 ; simulationData
-> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 3 ; simulationData
-> mData -> mOutputs . mX = & rtB . ivye1rtk20 [ 0 ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ewwm4tqlno ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW . ebnkz3vyz1 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
ho1ozys3q0_idx_0 = rtB . ivye1rtk20 [ 0 ] ; ho1ozys3q0_idx_1 = rtB .
ivye1rtk20 [ 1 ] ; ho1ozys3q0_idx_2 = rtB . ivye1rtk20 [ 2 ] ; xPos = (
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0
[ 1 ] + rtB . lyliwmyio0 [ 0 ] * muDoubleScalarCos ( ho1ozys3q0_idx_0 ) ) +
muDoubleScalarCos ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ; yPos = ( muDoubleScalarSin (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0 [ 1 ] + rtB .
lyliwmyio0 [ 0 ] * muDoubleScalarSin ( ho1ozys3q0_idx_0 ) ) +
muDoubleScalarSin ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ; tmp_lt = rtP .
GoalLocation_Value [ 0 ] - xPos ; tmp_hn = rtP . GoalLocation_Value [ 1 ] -
yPos ; tmp_ap = rtP . Velocity_Value [ 0 ] - ( ( muDoubleScalarSin (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * - rtB . lyliwmyio0 [ 1 ] - rtB .
lyliwmyio0 [ 0 ] * muDoubleScalarSin ( ho1ozys3q0_idx_0 ) ) -
muDoubleScalarSin ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ) ; tmp_pj = rtP . Velocity_Value
[ 1 ] - ( ( muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB .
lyliwmyio0 [ 1 ] + rtB . lyliwmyio0 [ 0 ] * muDoubleScalarCos (
ho1ozys3q0_idx_0 ) ) + muDoubleScalarCos ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ) ; tmp_ck [
0 ] = ( ( ( ( ( ( muDoubleScalarSin ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 )
+ ho1ozys3q0_idx_2 ) * 5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] /
7.2057594037927936E+16 + 5.653631132464783E+15 * muDoubleScalarSin (
ho1ozys3q0_idx_0 ) * rtB . lyliwmyio0 [ 0 ] / 7.2057594037927936E+16 ) +
muDoubleScalarSin ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 1 ] / 7.2057594037927936E+16 ) * (
( muDoubleScalarSin ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB .
lyliwmyio0 [ 1 ] + rtB . lyliwmyio0 [ 0 ] * muDoubleScalarSin (
ho1ozys3q0_idx_0 ) ) + muDoubleScalarSin ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ) + (
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
4.322095789375391E+15 * rtB . lyliwmyio0 [ 1 ] / 1.8014398509481984E+16 +
4.322095789375391E+15 * muDoubleScalarCos ( ho1ozys3q0_idx_0 ) * rtB .
lyliwmyio0 [ 0 ] / 1.8014398509481984E+16 ) * ( muDoubleScalarCos (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0 [ 1 ] + rtB .
lyliwmyio0 [ 0 ] * muDoubleScalarCos ( ho1ozys3q0_idx_0 ) ) ) + (
muDoubleScalarSin ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
4.322095789375391E+15 * rtB . lyliwmyio0 [ 1 ] / 1.8014398509481984E+16 +
4.322095789375391E+15 * muDoubleScalarSin ( ho1ozys3q0_idx_0 ) * rtB .
lyliwmyio0 [ 0 ] / 1.8014398509481984E+16 ) * ( muDoubleScalarSin (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0 [ 1 ] + rtB .
lyliwmyio0 [ 0 ] * muDoubleScalarSin ( ho1ozys3q0_idx_0 ) ) ) + ( (
muDoubleScalarCos ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * 5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] /
7.2057594037927936E+16 + 5.653631132464783E+15 * muDoubleScalarCos (
ho1ozys3q0_idx_0 ) * rtB . lyliwmyio0 [ 0 ] / 7.2057594037927936E+16 ) +
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 1 ] / 7.2057594037927936E+16 ) * (
( muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB .
lyliwmyio0 [ 1 ] + rtB . lyliwmyio0 [ 0 ] * muDoubleScalarCos (
ho1ozys3q0_idx_0 ) ) + muDoubleScalarCos ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ) ) +
4.516478355052105E+15 * rtB . lyliwmyio0 [ 0 ] * muDoubleScalarCos (
ho1ozys3q0_idx_0 ) * rtB . lyliwmyio0 [ 0 ] * muDoubleScalarCos (
ho1ozys3q0_idx_0 ) / 1.8014398509481984E+16 ) + 4.516478355052105E+15 * rtB .
lyliwmyio0 [ 0 ] * muDoubleScalarSin ( ho1ozys3q0_idx_0 ) * rtB . lyliwmyio0
[ 0 ] * muDoubleScalarSin ( ho1ozys3q0_idx_0 ) / 1.8014398509481984E+16 ;
tmp_ck [ 3 ] = ( ( ( ( muDoubleScalarCos ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * 5.653631132464783E+15 * rtB .
lyliwmyio0 [ 2 ] / 7.2057594037927936E+16 + 5.653631132464783E+15 *
muDoubleScalarCos ( ho1ozys3q0_idx_0 ) * rtB . lyliwmyio0 [ 0 ] /
7.2057594037927936E+16 ) + muDoubleScalarCos ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) * 5.653631132464783E+15 * rtB . lyliwmyio0 [ 1 ] /
7.2057594037927936E+16 ) * ( muDoubleScalarCos ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] +
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0
[ 1 ] ) + ( ( muDoubleScalarSin ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * 5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] /
7.2057594037927936E+16 + 5.653631132464783E+15 * muDoubleScalarSin (
ho1ozys3q0_idx_0 ) * rtB . lyliwmyio0 [ 0 ] / 7.2057594037927936E+16 ) +
muDoubleScalarSin ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 1 ] / 7.2057594037927936E+16 ) * (
muDoubleScalarSin ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] + muDoubleScalarSin (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0 [ 1 ] ) ) + (
muDoubleScalarSin ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
4.322095789375391E+15 * rtB . lyliwmyio0 [ 1 ] / 1.8014398509481984E+16 +
4.322095789375391E+15 * muDoubleScalarSin ( ho1ozys3q0_idx_0 ) * rtB .
lyliwmyio0 [ 0 ] / 1.8014398509481984E+16 ) * ( muDoubleScalarSin (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0 [ 1 ] ) ) + (
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
4.322095789375391E+15 * rtB . lyliwmyio0 [ 1 ] / 1.8014398509481984E+16 +
4.322095789375391E+15 * muDoubleScalarCos ( ho1ozys3q0_idx_0 ) * rtB .
lyliwmyio0 [ 0 ] / 1.8014398509481984E+16 ) * ( muDoubleScalarCos (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0 [ 1 ] ) ; tmp_ck [ 6
] = ( ( muDoubleScalarCos ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * 5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] /
7.2057594037927936E+16 + 5.653631132464783E+15 * muDoubleScalarCos (
ho1ozys3q0_idx_0 ) * rtB . lyliwmyio0 [ 0 ] / 7.2057594037927936E+16 ) +
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 1 ] / 7.2057594037927936E+16 ) * (
muDoubleScalarCos ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ) + ( ( muDoubleScalarSin ( (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] / 7.2057594037927936E+16 +
5.653631132464783E+15 * muDoubleScalarSin ( ho1ozys3q0_idx_0 ) * rtB .
lyliwmyio0 [ 0 ] / 7.2057594037927936E+16 ) + muDoubleScalarSin (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * 5.653631132464783E+15 * rtB .
lyliwmyio0 [ 1 ] / 7.2057594037927936E+16 ) * ( muDoubleScalarSin ( (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0
[ 2 ] ) ; tmp_ck [ 1 ] = ( ( ( muDoubleScalarSin ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * 5.653631132464783E+15 * rtB .
lyliwmyio0 [ 2 ] / 7.2057594037927936E+16 + muDoubleScalarSin (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * 5.653631132464783E+15 * rtB .
lyliwmyio0 [ 1 ] / 7.2057594037927936E+16 ) * ( ( muDoubleScalarSin (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0 [ 1 ] + rtB .
lyliwmyio0 [ 0 ] * muDoubleScalarSin ( ho1ozys3q0_idx_0 ) ) +
muDoubleScalarSin ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ) + ( muDoubleScalarCos ( (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] / 7.2057594037927936E+16 +
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 1 ] / 7.2057594037927936E+16 ) * (
( muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB .
lyliwmyio0 [ 1 ] + rtB . lyliwmyio0 [ 0 ] * muDoubleScalarCos (
ho1ozys3q0_idx_0 ) ) + muDoubleScalarCos ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ) ) +
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
4.322095789375391E+15 * rtB . lyliwmyio0 [ 1 ] * ( muDoubleScalarCos (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0 [ 1 ] + rtB .
lyliwmyio0 [ 0 ] * muDoubleScalarCos ( ho1ozys3q0_idx_0 ) ) /
1.8014398509481984E+16 ) + muDoubleScalarSin ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) * 4.322095789375391E+15 * rtB . lyliwmyio0 [ 1 ] * (
muDoubleScalarSin ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0
[ 1 ] + rtB . lyliwmyio0 [ 0 ] * muDoubleScalarSin ( ho1ozys3q0_idx_0 ) ) /
1.8014398509481984E+16 ; tmp_ck [ 4 ] = ( ( ( muDoubleScalarCos ( (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] / 7.2057594037927936E+16 +
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 1 ] / 7.2057594037927936E+16 ) * (
muDoubleScalarCos ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] + muDoubleScalarCos (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0 [ 1 ] ) + (
muDoubleScalarSin ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * 5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] /
7.2057594037927936E+16 + muDoubleScalarSin ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) * 5.653631132464783E+15 * rtB . lyliwmyio0 [ 1 ] /
7.2057594037927936E+16 ) * ( muDoubleScalarSin ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] +
muDoubleScalarSin ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0
[ 1 ] ) ) + 4.322095789375391E+15 * rtB . lyliwmyio0 [ 1 ] *
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * muDoubleScalarCos
( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0 [ 1 ] /
1.8014398509481984E+16 ) + 4.322095789375391E+15 * rtB . lyliwmyio0 [ 1 ] *
muDoubleScalarSin ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * muDoubleScalarSin
( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0 [ 1 ] /
1.8014398509481984E+16 ; tmp_ck [ 7 ] = ( muDoubleScalarCos ( (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] / 7.2057594037927936E+16 +
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 1 ] / 7.2057594037927936E+16 ) * (
muDoubleScalarCos ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ) + ( muDoubleScalarSin ( (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] / 7.2057594037927936E+16 +
muDoubleScalarSin ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) *
5.653631132464783E+15 * rtB . lyliwmyio0 [ 1 ] / 7.2057594037927936E+16 ) * (
muDoubleScalarSin ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ) ; tmp_ck [ 2 ] =
muDoubleScalarCos ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * 5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] * ( (
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0
[ 1 ] + rtB . lyliwmyio0 [ 0 ] * muDoubleScalarCos ( ho1ozys3q0_idx_0 ) ) +
muDoubleScalarCos ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ) / 7.2057594037927936E+16 +
muDoubleScalarSin ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * 5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] * ( (
muDoubleScalarSin ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0
[ 1 ] + rtB . lyliwmyio0 [ 0 ] * muDoubleScalarSin ( ho1ozys3q0_idx_0 ) ) +
muDoubleScalarSin ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ) / 7.2057594037927936E+16 ;
tmp_ck [ 5 ] = muDoubleScalarCos ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * 5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] * (
muDoubleScalarCos ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] + muDoubleScalarCos (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0 [ 1 ] ) /
7.2057594037927936E+16 + muDoubleScalarSin ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * 5.653631132464783E+15 * rtB .
lyliwmyio0 [ 2 ] * ( muDoubleScalarSin ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] +
muDoubleScalarSin ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0
[ 1 ] ) / 7.2057594037927936E+16 ; tmp_ck [ 8 ] = ( muDoubleScalarCos ( (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * (
5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] ) * rtB . lyliwmyio0 [ 2 ] *
muDoubleScalarCos ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) / 7.2057594037927936E+16 + muDoubleScalarSin ( (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * (
5.653631132464783E+15 * rtB . lyliwmyio0 [ 2 ] ) * rtB . lyliwmyio0 [ 2 ] *
muDoubleScalarSin ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) / 7.2057594037927936E+16 ) + 1765.966 ; tmp_po = rtP .
accel_Value [ 0 ] - ( ( muDoubleScalarCos ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) * - rtB . lyliwmyio0 [ 1 ] - rtB . lyliwmyio0 [ 0 ] *
muDoubleScalarCos ( ho1ozys3q0_idx_0 ) ) - muDoubleScalarCos ( (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0
[ 2 ] ) ; tmp_pk = rtP . accel_Value [ 1 ] - ( ( muDoubleScalarSin (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * - rtB . lyliwmyio0 [ 1 ] - rtB .
lyliwmyio0 [ 0 ] * muDoubleScalarSin ( ho1ozys3q0_idx_0 ) ) -
muDoubleScalarSin ( ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) +
ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ) ; tmp_f2 [ 0 ] = (
muDoubleScalarSin ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * - rtB .
lyliwmyio0 [ 1 ] - rtB . lyliwmyio0 [ 0 ] * muDoubleScalarSin (
ho1ozys3q0_idx_0 ) ) - muDoubleScalarSin ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ; tmp_f2 [ 3
] = ( muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB .
lyliwmyio0 [ 1 ] + rtB . lyliwmyio0 [ 0 ] * muDoubleScalarCos (
ho1ozys3q0_idx_0 ) ) + muDoubleScalarCos ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ; tmp_f2 [ 6
] = 0.0 ; tmp_f2 [ 1 ] = muDoubleScalarSin ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) * - rtB . lyliwmyio0 [ 1 ] - muDoubleScalarSin ( (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0
[ 2 ] ; tmp_f2 [ 4 ] = muDoubleScalarCos ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] +
muDoubleScalarCos ( ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) * rtB . lyliwmyio0
[ 1 ] ; tmp_f2 [ 7 ] = 0.0 ; tmp_f2 [ 2 ] = muDoubleScalarSin ( (
ho1ozys3q0_idx_0 + ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * - rtB .
lyliwmyio0 [ 2 ] ; tmp_f2 [ 5 ] = muDoubleScalarCos ( ( ho1ozys3q0_idx_0 +
ho1ozys3q0_idx_1 ) + ho1ozys3q0_idx_2 ) * rtB . lyliwmyio0 [ 2 ] ; tmp_f2 [ 8
] = 0.0 ; for ( i = 0 ; i < 3 ; i ++ ) { rtB . bsnpyezm2e [ i ] = 0.0 ; rtB .
nyn4bpigfe [ i ] = 0.0 ; rtB . e15gfpfe5w [ i ] = 0.0 ; rtB . bsnpyezm2e [ i
] += rtB . mrerd0iytt [ i ] * tmp_lt ; rtB . nyn4bpigfe [ i ] += rtB .
c2u24du2rp [ i ] * tmp_ap ; rtB . e15gfpfe5w [ i ] += tmp_ck [ i ] * tmp_po ;
rtB . bsnpyezm2e [ i ] += rtB . mrerd0iytt [ i + 3 ] * tmp_hn ; rtB .
nyn4bpigfe [ i ] += rtB . c2u24du2rp [ i + 3 ] * tmp_pj ; rtB . e15gfpfe5w [
i ] += tmp_ck [ i + 3 ] * tmp_pk ; rtB . bsnpyezm2e [ i ] += rtB . mrerd0iytt
[ i + 6 ] * rtP . GoalLocation_Value [ 2 ] ; rtB . nyn4bpigfe [ i ] += rtB .
c2u24du2rp [ i + 6 ] * rtP . Velocity_Value [ 2 ] ; rtB . e15gfpfe5w [ i ] +=
tmp_ck [ i + 6 ] * rtP . accel_Value [ 2 ] ; tmp_kt [ i ] = ( rtB .
e15gfpfe5w [ i ] + rtB . bsnpyezm2e [ i ] ) + rtB . nyn4bpigfe [ i ] ; } for
( i = 0 ; i < 3 ; i ++ ) { controlTorques [ i ] = 0.0 * tmp_kt [ 2 ] + (
tmp_f2 [ i + 3 ] * tmp_kt [ 1 ] + tmp_f2 [ i ] * tmp_kt [ 0 ] ) ; } rtB .
fbuanqik5o = controlTorques [ 0 ] ; rtB . korqbvw5sq = controlTorques [ 1 ] ;
rtB . glryjuizod = controlTorques [ 2 ] ; rtB . primmsbaty = xPos ; rtB .
fdofaimx1g = yPos ; { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . chbtvsma4c .
LoggedData , & locTime , & rtB . primmsbaty ) ; } } } } { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . fy3ytfnr0f . LoggedData , & locTime , & rtB .
fdofaimx1g ) ; } } } } rtB . mfr2tvqlet [ 0 ] = rtB . glryjuizod ; rtB .
mfr2tvqlet [ 1 ] = 0.0 ; rtB . mfr2tvqlet [ 2 ] = 0.0 ; rtB . mfr2tvqlet [ 3
] = 0.0 ; simulationData = ( NeslSimulationData * ) rtDW . bh3wkjeszc ;
time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_e ; simulationData -> mData ->
mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX .
ms5tvie2a2 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . nrev0sejyt ;
simulationData -> mData -> mModeVector . mN = 3 ; simulationData -> mData ->
mModeVector . mX = & rtDW . fulvewb14x [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_j [
0 ] = 0 ; tmp_g [ 0 ] = rtB . mfr2tvqlet [ 0 ] ; tmp_g [ 1 ] = rtB .
mfr2tvqlet [ 1 ] ; tmp_g [ 2 ] = rtB . mfr2tvqlet [ 2 ] ; tmp_g [ 3 ] = rtB .
mfr2tvqlet [ 3 ] ; tmp_j [ 1 ] = 4 ; simulationData -> mData -> mInputValues
. mN = 4 ; simulationData -> mData -> mInputValues . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 2 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_j [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 9 ; simulationData -> mData -> mOutputs . mX = & rtB . fusvirqcpv [ 0 ]
; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulationData -> mData -> mTolerances . mN
= 0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData ->
mData -> mCstateHasChanged = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . culhpxxaih ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lw0140esdt ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . bdjq0ta3fn ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . jqz5nrtbv4 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . n3wkgeymzw ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_c [ 0 ] = 0 ;
tmp_f [ 0 ] = rtB . mfr2tvqlet [ 0 ] ; tmp_f [ 1 ] = rtB . mfr2tvqlet [ 1 ] ;
tmp_f [ 2 ] = rtB . mfr2tvqlet [ 2 ] ; tmp_f [ 3 ] = rtB . mfr2tvqlet [ 3 ] ;
tmp_c [ 1 ] = 4 ; memcpy ( & tmp_f [ 4 ] , & rtB . fusvirqcpv [ 0 ] , 9U *
sizeof ( real_T ) ) ; tmp_c [ 2 ] = 13 ; simulationData -> mData ->
mInputValues . mN = 13 ; simulationData -> mData -> mInputValues . mX = &
tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 3 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 2 ; simulationData -> mData ->
mOutputs . mX = & rtB . mp13huktqq [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . eyjaph4uza ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW . fwnqdgglb4 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
if ( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW
. dc0rgh5eng = rtB . mp13huktqq [ 0 ] ; } if ( ssIsSampleHit ( rtS , 2 , 0 )
) { rtB . nmep4bwbvk = rtDW . dc0rgh5eng ; { double locTime = ssGetTaskTime (
rtS , 2 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval
( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . eqn5wqgu33 .
LoggedData , & locTime , & rtB . nmep4bwbvk ) ; } } } } } if ( ssGetLogOutput
( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . bu2nsr0afw . LoggedData ) , & rtB . glryjuizod , 0 ) ; }
} } rtB . ivpptgv24m = rtP . GAIN_Gain * rtB . mp13huktqq [ 1 ] ; rtB .
ki1zyukxvx [ 0 ] = rtB . fbuanqik5o ; rtB . ki1zyukxvx [ 1 ] = 0.0 ; rtB .
ki1zyukxvx [ 2 ] = 0.0 ; rtB . ki1zyukxvx [ 3 ] = 0.0 ; simulationData = (
NeslSimulationData * ) rtDW . khj0d2a154 ; time_m = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_m ; simulationData -> mData -> mContStates . mN = 5 ;
simulationData -> mData -> mContStates . mX = & rtX . d3xih20wjl [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . jd1pi1xhn4 ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pldt5kkraj [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_b [ 0 ] = 0 ; tmp_k [ 0 ] = rtB .
ki1zyukxvx [ 0 ] ; tmp_k [ 1 ] = rtB . ki1zyukxvx [ 1 ] ; tmp_k [ 2 ] = rtB .
ki1zyukxvx [ 2 ] ; tmp_k [ 3 ] = rtB . ki1zyukxvx [ 3 ] ; tmp_b [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_k [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_b [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 8 ; simulationData -> mData ->
mOutputs . mX = & rtB . frsgfxkt3q [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . cryjuu4ual ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW . nkwrexavzk ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . mer5fxqibo ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . onjn0sqovd ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ine0wrogr1 ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_l [ 0 ] = 0 ;
tmp_n [ 0 ] = rtB . ki1zyukxvx [ 0 ] ; tmp_n [ 1 ] = rtB . ki1zyukxvx [ 1 ] ;
tmp_n [ 2 ] = rtB . ki1zyukxvx [ 2 ] ; tmp_n [ 3 ] = rtB . ki1zyukxvx [ 3 ] ;
tmp_l [ 1 ] = 4 ; memcpy ( & tmp_n [ 4 ] , & rtB . frsgfxkt3q [ 0 ] , sizeof
( real_T ) << 3U ) ; tmp_l [ 2 ] = 12 ; simulationData -> mData ->
mInputValues . mN = 12 ; simulationData -> mData -> mInputValues . mX = &
tmp_n [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 3 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_l [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 1 ; simulationData -> mData ->
mOutputs . mX = & rtB . k2z5lg5kdn ; simulationData -> mData -> mSampleHits .
mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData
-> mData -> mIsFundamentalSampleHit = false ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lhrjdkocrx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . l53yhgr44w ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . njek1qn1tc [ 0 ] = rtB . korqbvw5sq ; rtB . njek1qn1tc [ 1 ] = 0.0 ;
rtB . njek1qn1tc [ 2 ] = 0.0 ; rtB . njek1qn1tc [ 3 ] = 0.0 ; simulationData
= ( NeslSimulationData * ) rtDW . h14n5cqflx ; time_j = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_j ; simulationData -> mData -> mContStates . mN = 5 ;
simulationData -> mData -> mContStates . mX = & rtX . bqyvhwr1me [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cyoazv120t ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
mw4lmbhnkl [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_o [ 0 ] = 0 ; tmp_d [ 0 ] = rtB .
njek1qn1tc [ 0 ] ; tmp_d [ 1 ] = rtB . njek1qn1tc [ 1 ] ; tmp_d [ 2 ] = rtB .
njek1qn1tc [ 2 ] ; tmp_d [ 3 ] = rtB . njek1qn1tc [ 3 ] ; tmp_o [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_d [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_o [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 8 ; simulationData -> mData ->
mOutputs . mX = & rtB . czgg222wvg [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . enml431ah0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW . pu2bujddd5 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . atymz31saa ; time_f = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_f ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . ionvv3zokq ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . a25cheyog3 ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_fs [ 0 ] = 0
; tmp_dz [ 0 ] = rtB . njek1qn1tc [ 0 ] ; tmp_dz [ 1 ] = rtB . njek1qn1tc [ 1
] ; tmp_dz [ 2 ] = rtB . njek1qn1tc [ 2 ] ; tmp_dz [ 3 ] = rtB . njek1qn1tc [
3 ] ; tmp_fs [ 1 ] = 4 ; memcpy ( & tmp_dz [ 4 ] , & rtB . czgg222wvg [ 0 ] ,
sizeof ( real_T ) << 3U ) ; tmp_fs [ 2 ] = 12 ; simulationData -> mData ->
mInputValues . mN = 12 ; simulationData -> mData -> mInputValues . mX = &
tmp_dz [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 3 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_fs [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 1 ; simulationData -> mData ->
mOutputs . mX = & rtB . aijj1xqxw3 ; simulationData -> mData -> mSampleHits .
mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData
-> mData -> mIsFundamentalSampleHit = false ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . irkatqjv53 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lf2p3a1qfd ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . f2qb1e2yww [ 0 ] = rtB . k2z5lg5kdn ; rtB . f2qb1e2yww [ 1 ] = 0.0 ;
rtB . f2qb1e2yww [ 2 ] = 0.0 ; rtB . f2qb1e2yww [ 3 ] = 0.0 ; rtB .
muuzxzxw4l [ 0 ] = rtB . aijj1xqxw3 ; rtB . muuzxzxw4l [ 1 ] = 0.0 ; rtB .
muuzxzxw4l [ 2 ] = 0.0 ; rtB . muuzxzxw4l [ 3 ] = 0.0 ; rtB . a22n54l2kn [ 0
] = rtB . mp13huktqq [ 0 ] ; rtB . a22n54l2kn [ 1 ] = 0.0 ; rtB . a22n54l2kn
[ 2 ] = 0.0 ; rtB . a22n54l2kn [ 3 ] = 0.0 ; UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID3 ( int_T tid ) { int32_T i ; for ( i = 0 ; i < 9 ; i ++ )
{ rtB . c2u24du2rp [ i ] = rtP . Damping_Value * rtP . _Value [ i ] ; rtB .
mrerd0iytt [ i ] = rtP . Stiffness_Value * rtP . I_Value [ i ] ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 12 ] ; int_T tmp_e [ 4 ] ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ; real_T
time_p ; real_T tmp_m [ 4 ] ; int_T tmp_g [ 2 ] ; real_T time_e ; real_T
tmp_j [ 4 ] ; int_T tmp_f [ 2 ] ; real_T time_i ; real_T tmp_c [ 4 ] ; int_T
tmp_k [ 2 ] ; simulationData = ( NeslSimulationData * ) rtDW . cn1keqm2rr ;
time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX .
onsy5ggnz4 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . hulwpi0wcl ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . osr1cl1ae3 ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
f2qb1e2yww [ 0 ] ; tmp_p [ 1 ] = rtB . f2qb1e2yww [ 1 ] ; tmp_p [ 2 ] = rtB .
f2qb1e2yww [ 2 ] ; tmp_p [ 3 ] = rtB . f2qb1e2yww [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . muuzxzxw4l [ 0 ] ; tmp_p [ 5 ] = rtB . muuzxzxw4l [ 1 ] ;
tmp_p [ 6 ] = rtB . muuzxzxw4l [ 2 ] ; tmp_p [ 7 ] = rtB . muuzxzxw4l [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . a22n54l2kn [ 0 ] ; tmp_p [ 9 ] = rtB .
a22n54l2kn [ 1 ] ; tmp_p [ 10 ] = rtB . a22n54l2kn [ 2 ] ; tmp_p [ 11 ] = rtB
. a22n54l2kn [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData -> mData ->
mInputValues . mN = 12 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jkiv5jchi2 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . j34f1tmhj5 ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . bh3wkjeszc ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 6 ;
simulationData -> mData -> mContStates . mX = & rtX . ms5tvie2a2 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . nrev0sejyt ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
fulvewb14x [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
mfr2tvqlet [ 0 ] ; tmp_m [ 1 ] = rtB . mfr2tvqlet [ 1 ] ; tmp_m [ 2 ] = rtB .
mfr2tvqlet [ 2 ] ; tmp_m [ 3 ] = rtB . mfr2tvqlet [ 3 ] ; tmp_g [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . culhpxxaih ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . lw0140esdt ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . khj0d2a154 ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 5 ;
simulationData -> mData -> mContStates . mX = & rtX . d3xih20wjl [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . jd1pi1xhn4 ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pldt5kkraj [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0 ] = 0 ; tmp_j [ 0 ] = rtB .
ki1zyukxvx [ 0 ] ; tmp_j [ 1 ] = rtB . ki1zyukxvx [ 1 ] ; tmp_j [ 2 ] = rtB .
ki1zyukxvx [ 2 ] ; tmp_j [ 3 ] = rtB . ki1zyukxvx [ 3 ] ; tmp_f [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . cryjuu4ual ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . nkwrexavzk ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . h14n5cqflx ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 5 ;
simulationData -> mData -> mContStates . mX = & rtX . bqyvhwr1me [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cyoazv120t ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
mw4lmbhnkl [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_k [ 0 ] = 0 ; tmp_c [ 0 ] = rtB .
njek1qn1tc [ 0 ] ; tmp_c [ 1 ] = rtB . njek1qn1tc [ 1 ] ; tmp_c [ 2 ] = rtB .
njek1qn1tc [ 2 ] ; tmp_c [ 3 ] = rtB . njek1qn1tc [ 3 ] ; tmp_k [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_c [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_k [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . enml431ah0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . pu2bujddd5 ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 12 ] ; int_T tmp_e [ 4 ] ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ; real_T
time_p ; real_T tmp_m [ 4 ] ; int_T tmp_g [ 2 ] ; real_T time_e ; real_T
tmp_j [ 4 ] ; int_T tmp_f [ 2 ] ; real_T time_i ; real_T tmp_c [ 4 ] ; int_T
tmp_k [ 2 ] ; XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
simulationData = ( NeslSimulationData * ) rtDW . cn1keqm2rr ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 6 ;
simulationData -> mData -> mContStates . mX = & rtX . onsy5ggnz4 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . hulwpi0wcl ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
osr1cl1ae3 ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
f2qb1e2yww [ 0 ] ; tmp_p [ 1 ] = rtB . f2qb1e2yww [ 1 ] ; tmp_p [ 2 ] = rtB .
f2qb1e2yww [ 2 ] ; tmp_p [ 3 ] = rtB . f2qb1e2yww [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . muuzxzxw4l [ 0 ] ; tmp_p [ 5 ] = rtB . muuzxzxw4l [ 1 ] ;
tmp_p [ 6 ] = rtB . muuzxzxw4l [ 2 ] ; tmp_p [ 7 ] = rtB . muuzxzxw4l [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . a22n54l2kn [ 0 ] ; tmp_p [ 9 ] = rtB .
a22n54l2kn [ 1 ] ; tmp_p [ 10 ] = rtB . a22n54l2kn [ 2 ] ; tmp_p [ 11 ] = rtB
. a22n54l2kn [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData -> mData ->
mInputValues . mN = 12 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 6 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> onsy5ggnz4 [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . jkiv5jchi2 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . j34f1tmhj5 ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . bh3wkjeszc ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . ms5tvie2a2 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . nrev0sejyt ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
fulvewb14x [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
mfr2tvqlet [ 0 ] ; tmp_m [ 1 ] = rtB . mfr2tvqlet [ 1 ] ; tmp_m [ 2 ] = rtB .
mfr2tvqlet [ 2 ] ; tmp_m [ 3 ] = rtB . mfr2tvqlet [ 3 ] ; tmp_g [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mDx . mN = 6 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> ms5tvie2a2 [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . culhpxxaih ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lw0140esdt ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . khj0d2a154 ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 5 ; simulationData -> mData -> mContStates . mX = & rtX . d3xih20wjl [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . jd1pi1xhn4 ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pldt5kkraj [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0 ] = 0 ; tmp_j [ 0 ] = rtB .
ki1zyukxvx [ 0 ] ; tmp_j [ 1 ] = rtB . ki1zyukxvx [ 1 ] ; tmp_j [ 2 ] = rtB .
ki1zyukxvx [ 2 ] ; tmp_j [ 3 ] = rtB . ki1zyukxvx [ 3 ] ; tmp_f [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mDx . mN = 5 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> d3xih20wjl [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . cryjuu4ual ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . nkwrexavzk ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . h14n5cqflx ; time_i =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 5 ; simulationData -> mData -> mContStates . mX = & rtX . bqyvhwr1me [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . cyoazv120t ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
mw4lmbhnkl [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_k [ 0 ] = 0 ; tmp_c [ 0 ] = rtB .
njek1qn1tc [ 0 ] ; tmp_c [ 1 ] = rtB . njek1qn1tc [ 1 ] ; tmp_c [ 2 ] = rtB .
njek1qn1tc [ 2 ] ; tmp_c [ 3 ] = rtB . njek1qn1tc [ 3 ] ; tmp_k [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_c [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_k [ 0 ] ;
simulationData -> mData -> mDx . mN = 5 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> bqyvhwr1me [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . enml431ah0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . pu2bujddd5 ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 12 ] ; int_T tmp_e [ 4 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; real_T time_p ; real_T tmp_m [ 4 ] ; int_T
tmp_g [ 2 ] ; real_T time_e ; real_T tmp_j [ 4 ] ; int_T tmp_f [ 2 ] ; real_T
time_i ; real_T tmp_c [ 4 ] ; int_T tmp_k [ 2 ] ; simulationData = (
NeslSimulationData * ) rtDW . cn1keqm2rr ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 6 ;
simulationData -> mData -> mContStates . mX = & rtX . onsy5ggnz4 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . hulwpi0wcl ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
osr1cl1ae3 ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
f2qb1e2yww [ 0 ] ; tmp_p [ 1 ] = rtB . f2qb1e2yww [ 1 ] ; tmp_p [ 2 ] = rtB .
f2qb1e2yww [ 2 ] ; tmp_p [ 3 ] = rtB . f2qb1e2yww [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . muuzxzxw4l [ 0 ] ; tmp_p [ 5 ] = rtB . muuzxzxw4l [ 1 ] ;
tmp_p [ 6 ] = rtB . muuzxzxw4l [ 2 ] ; tmp_p [ 7 ] = rtB . muuzxzxw4l [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . a22n54l2kn [ 0 ] ; tmp_p [ 9 ] = rtB .
a22n54l2kn [ 1 ] ; tmp_p [ 10 ] = rtB . a22n54l2kn [ 2 ] ; tmp_p [ 11 ] = rtB
. a22n54l2kn [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData -> mData ->
mInputValues . mN = 12 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jkiv5jchi2 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . j34f1tmhj5 ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . bh3wkjeszc ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . ms5tvie2a2 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . nrev0sejyt ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
fulvewb14x [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
mfr2tvqlet [ 0 ] ; tmp_m [ 1 ] = rtB . mfr2tvqlet [ 1 ] ; tmp_m [ 2 ] = rtB .
mfr2tvqlet [ 2 ] ; tmp_m [ 3 ] = rtB . mfr2tvqlet [ 3 ] ; tmp_g [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . culhpxxaih ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . lw0140esdt ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . khj0d2a154 ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 5 ; simulationData -> mData -> mContStates . mX = & rtX . d3xih20wjl [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . jd1pi1xhn4 ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pldt5kkraj [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0 ] = 0 ; tmp_j [ 0 ] = rtB .
ki1zyukxvx [ 0 ] ; tmp_j [ 1 ] = rtB . ki1zyukxvx [ 1 ] ; tmp_j [ 2 ] = rtB .
ki1zyukxvx [ 2 ] ; tmp_j [ 3 ] = rtB . ki1zyukxvx [ 3 ] ; tmp_f [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . cryjuu4ual ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . nkwrexavzk ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . h14n5cqflx ; time_i =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 5 ; simulationData -> mData -> mContStates . mX = & rtX . bqyvhwr1me [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . cyoazv120t ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
mw4lmbhnkl [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_k [ 0 ] = 0 ; tmp_c [ 0 ] = rtB .
njek1qn1tc [ 0 ] ; tmp_c [ 1 ] = rtB . njek1qn1tc [ 1 ] ; tmp_c [ 2 ] = rtB .
njek1qn1tc [ 2 ] ; tmp_c [ 3 ] = rtB . njek1qn1tc [ 3 ] ; tmp_k [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_c [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_k [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . enml431ah0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . pu2bujddd5 ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlForcingFunction ( void ) { NeslSimulationData *
simulationData ; real_T time ; boolean_T tmp ; real_T tmp_p [ 12 ] ; int_T
tmp_e [ 4 ] ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; int32_T tmp_i ; char * msg ; real_T time_p ; real_T tmp_m [
4 ] ; int_T tmp_g [ 2 ] ; real_T time_e ; real_T tmp_j [ 4 ] ; int_T tmp_f [
2 ] ; real_T time_i ; real_T tmp_c [ 4 ] ; int_T tmp_k [ 2 ] ; XDot * _rtXdot
; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; simulationData = (
NeslSimulationData * ) rtDW . cn1keqm2rr ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 6 ;
simulationData -> mData -> mContStates . mX = & rtX . onsy5ggnz4 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . hulwpi0wcl ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
osr1cl1ae3 ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
f2qb1e2yww [ 0 ] ; tmp_p [ 1 ] = rtB . f2qb1e2yww [ 1 ] ; tmp_p [ 2 ] = rtB .
f2qb1e2yww [ 2 ] ; tmp_p [ 3 ] = rtB . f2qb1e2yww [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . muuzxzxw4l [ 0 ] ; tmp_p [ 5 ] = rtB . muuzxzxw4l [ 1 ] ;
tmp_p [ 6 ] = rtB . muuzxzxw4l [ 2 ] ; tmp_p [ 7 ] = rtB . muuzxzxw4l [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . a22n54l2kn [ 0 ] ; tmp_p [ 9 ] = rtB .
a22n54l2kn [ 1 ] ; tmp_p [ 10 ] = rtB . a22n54l2kn [ 2 ] ; tmp_p [ 11 ] = rtB
. a22n54l2kn [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData -> mData ->
mInputValues . mN = 12 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 6 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> onsy5ggnz4 [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . jkiv5jchi2 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . j34f1tmhj5 ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . bh3wkjeszc ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . ms5tvie2a2 [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . nrev0sejyt ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
fulvewb14x [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
mfr2tvqlet [ 0 ] ; tmp_m [ 1 ] = rtB . mfr2tvqlet [ 1 ] ; tmp_m [ 2 ] = rtB .
mfr2tvqlet [ 2 ] ; tmp_m [ 3 ] = rtB . mfr2tvqlet [ 3 ] ; tmp_g [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mDx . mN = 6 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> ms5tvie2a2 [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . culhpxxaih ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lw0140esdt ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . khj0d2a154 ;
time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_e ; simulationData -> mData ->
mContStates . mN = 5 ; simulationData -> mData -> mContStates . mX = & rtX .
d3xih20wjl [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . jd1pi1xhn4 ;
simulationData -> mData -> mModeVector . mN = 3 ; simulationData -> mData ->
mModeVector . mX = & rtDW . pldt5kkraj [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_f [
0 ] = 0 ; tmp_j [ 0 ] = rtB . ki1zyukxvx [ 0 ] ; tmp_j [ 1 ] = rtB .
ki1zyukxvx [ 1 ] ; tmp_j [ 2 ] = rtB . ki1zyukxvx [ 2 ] ; tmp_j [ 3 ] = rtB .
ki1zyukxvx [ 3 ] ; tmp_f [ 1 ] = 4 ; simulationData -> mData -> mInputValues
. mN = 4 ; simulationData -> mData -> mInputValues . mX = & tmp_j [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 2 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_f [ 0 ] ; simulationData -> mData -> mDx . mN =
5 ; simulationData -> mData -> mDx . mX = & _rtXdot -> d3xih20wjl [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . cryjuu4ual ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . nkwrexavzk ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . h14n5cqflx ;
time_i = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_i ; simulationData -> mData ->
mContStates . mN = 5 ; simulationData -> mData -> mContStates . mX = & rtX .
bqyvhwr1me [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . cyoazv120t ;
simulationData -> mData -> mModeVector . mN = 3 ; simulationData -> mData ->
mModeVector . mX = & rtDW . mw4lmbhnkl [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_k [
0 ] = 0 ; tmp_c [ 0 ] = rtB . njek1qn1tc [ 0 ] ; tmp_c [ 1 ] = rtB .
njek1qn1tc [ 1 ] ; tmp_c [ 2 ] = rtB . njek1qn1tc [ 2 ] ; tmp_c [ 3 ] = rtB .
njek1qn1tc [ 3 ] ; tmp_k [ 1 ] = 4 ; simulationData -> mData -> mInputValues
. mN = 4 ; simulationData -> mData -> mInputValues . mX = & tmp_c [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 2 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_k [ 0 ] ; simulationData -> mData -> mDx . mN =
5 ; simulationData -> mData -> mDx . mX = & _rtXdot -> bqyvhwr1me [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . enml431ah0 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . pu2bujddd5 ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } } void MdlMassMatrix ( void ) { NeslSimulationData *
simulationData ; real_T time ; boolean_T tmp ; real_T tmp_p [ 4 ] ; int_T
tmp_e [ 2 ] ; real_T * tmp_i ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_m ; char * msg ; real_T
time_p ; real_T tmp_g [ 4 ] ; int_T tmp_j [ 2 ] ; real_T time_e ; real_T
tmp_f [ 4 ] ; int_T tmp_c [ 2 ] ; simulationData = ( NeslSimulationData * )
rtDW . bh3wkjeszc ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX =
& rtX . ms5tvie2a2 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . nrev0sejyt ;
simulationData -> mData -> mModeVector . mN = 3 ; simulationData -> mData ->
mModeVector . mX = & rtDW . fulvewb14x [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_e [
0 ] = 0 ; tmp_p [ 0 ] = rtB . mfr2tvqlet [ 0 ] ; tmp_p [ 1 ] = rtB .
mfr2tvqlet [ 1 ] ; tmp_p [ 2 ] = rtB . mfr2tvqlet [ 2 ] ; tmp_p [ 3 ] = rtB .
mfr2tvqlet [ 3 ] ; tmp_e [ 1 ] = 4 ; simulationData -> mData -> mInputValues
. mN = 4 ; simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 2 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i = rtMassMatrix . pr ; tmp_i =
double_pointer_shift ( tmp_i , rtDW . fx1szshdqv ) ; simulationData -> mData
-> mMassMatrixPr . mN = 4 ; simulationData -> mData -> mMassMatrixPr . mX =
tmp_i ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . culhpxxaih ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = ne_simulator_method ( ( NeslSimulator * ) rtDW . lw0140esdt ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . khj0d2a154 ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 5 ; simulationData -> mData -> mContStates . mX = & rtX . d3xih20wjl [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . jd1pi1xhn4 ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pldt5kkraj [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_j [ 0 ] = 0 ; tmp_g [ 0 ] = rtB .
ki1zyukxvx [ 0 ] ; tmp_g [ 1 ] = rtB . ki1zyukxvx [ 1 ] ; tmp_g [ 2 ] = rtB .
ki1zyukxvx [ 2 ] ; tmp_g [ 3 ] = rtB . ki1zyukxvx [ 3 ] ; tmp_j [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_g [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0 ] ;
tmp_i = rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW .
czbikmwyj1 ) ; simulationData -> mData -> mMassMatrixPr . mN = 3 ;
simulationData -> mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . cryjuu4ual ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . nkwrexavzk ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . h14n5cqflx ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 5 ; simulationData -> mData -> mContStates . mX = & rtX . bqyvhwr1me [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . cyoazv120t ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
mw4lmbhnkl [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_c [ 0 ] = 0 ; tmp_f [ 0 ] = rtB .
njek1qn1tc [ 0 ] ; tmp_f [ 1 ] = rtB . njek1qn1tc [ 1 ] ; tmp_f [ 2 ] = rtB .
njek1qn1tc [ 2 ] ; tmp_f [ 3 ] = rtB . njek1qn1tc [ 3 ] ; tmp_c [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ;
tmp_i = rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW .
d3ac2seyd3 ) ; simulationData -> mData -> mMassMatrixPr . mN = 3 ;
simulationData -> mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . enml431ah0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . pu2bujddd5 ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlZeroCrossings ( void ) { NeslSimulationData * simulationData
; real_T time ; boolean_T tmp ; real_T tmp_p [ 4 ] ; int_T tmp_e [ 2 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; real_T time_p ; real_T tmp_m [ 4 ] ; int_T
tmp_g [ 2 ] ; real_T time_e ; real_T tmp_j [ 4 ] ; int_T tmp_f [ 2 ] ; ZCV *
_rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ;
simulationData = ( NeslSimulationData * ) rtDW . bh3wkjeszc ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 6 ;
simulationData -> mData -> mContStates . mX = & rtX . ms5tvie2a2 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . nrev0sejyt ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
fulvewb14x [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
mfr2tvqlet [ 0 ] ; tmp_p [ 1 ] = rtB . mfr2tvqlet [ 1 ] ; tmp_p [ 2 ] = rtB .
mfr2tvqlet [ 2 ] ; tmp_p [ 3 ] = rtB . mfr2tvqlet [ 3 ] ; tmp_e [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 4 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> g1uwlzzmub ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . culhpxxaih ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . lw0140esdt ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . khj0d2a154 ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 5 ; simulationData -> mData -> mContStates . mX = & rtX . d3xih20wjl [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . jd1pi1xhn4 ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pldt5kkraj [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
ki1zyukxvx [ 0 ] ; tmp_m [ 1 ] = rtB . ki1zyukxvx [ 1 ] ; tmp_m [ 2 ] = rtB .
ki1zyukxvx [ 2 ] ; tmp_m [ 3 ] = rtB . ki1zyukxvx [ 3 ] ; tmp_g [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 4 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> aqw4ariikj ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . cryjuu4ual ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . nkwrexavzk ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . h14n5cqflx ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 5 ; simulationData -> mData -> mContStates . mX = & rtX . bqyvhwr1me [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . cyoazv120t ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
mw4lmbhnkl [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0 ] = 0 ; tmp_j [ 0 ] = rtB .
njek1qn1tc [ 0 ] ; tmp_j [ 1 ] = rtB . njek1qn1tc [ 1 ] ; tmp_j [ 2 ] = rtB .
njek1qn1tc [ 2 ] ; tmp_j [ 3 ] = rtB . njek1qn1tc [ 3 ] ; tmp_f [ 1 ] = 4 ;
simulationData -> mData -> mInputValues . mN = 4 ; simulationData -> mData ->
mInputValues . mX = & tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets
. mN = 2 ; simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 4 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> imvtmvbck3 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . enml431ah0 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . pu2bujddd5 ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . jkiv5jchi2 ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . cn1keqm2rr ) ; nesl_erase_simulator (
"Assembly1/Solver Configuration_1" ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . ewwm4tqlno ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . ngwhbyugnx ) ; nesl_erase_simulator (
"Assembly1/Solver Configuration_1" ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . culhpxxaih ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . bh3wkjeszc ) ; nesl_erase_simulator (
"Assembly1/MotorSubSys /Solver Configuration1_1" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . eyjaph4uza
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . bdjq0ta3fn
) ; nesl_erase_simulator ( "Assembly1/MotorSubSys /Solver Configuration1_1" )
; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
cryjuu4ual ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
khj0d2a154 ) ; nesl_erase_simulator (
"Assembly1/MotorSubSys 1/Solver Configuration1_1" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . lhrjdkocrx
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . mer5fxqibo
) ; nesl_erase_simulator ( "Assembly1/MotorSubSys 1/Solver Configuration1_1"
) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
enml431ah0 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
h14n5cqflx ) ; nesl_erase_simulator (
"Assembly1/MotorSubSys 2/Solver Configuration1_1" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . irkatqjv53
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . atymz31saa
) ; nesl_erase_simulator ( "Assembly1/MotorSubSys 2/Solver Configuration1_1"
) ; if ( rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 22 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
3 ) ; ssSetNumBlocks ( rtS , 120 ) ; ssSetNumBlockIO ( rtS , 27 ) ;
ssSetNumBlockParams ( rtS , 33 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.001 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 1297423731U ) ;
ssSetChecksumVal ( rtS , 1 , 135611111U ) ; ssSetChecksumVal ( rtS , 2 ,
1216189137U ) ; ssSetChecksumVal ( rtS , 3 , 409340220U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { rtDW . fx1szshdqv = 6 ; rtDW . czbikmwyj1 = 10 ;
rtDW . d3ac2seyd3 = 13 ; } { static DataTypeTransInfo dtInfo ; ( void )
memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 14 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } Assembly1_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Assembly1" ) ; ssSetPath ( rtS , "Assembly1" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 100.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) ,
( NULL ) ) ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3 ;
static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 22 ] ; static real_T absTol [ 22 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 22 ] = {
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U } ; static uint8_T zcAttributes [ 12 ] = { (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) } ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 1 ] = { { 3 * sizeof ( real_T ) , ( char * ) ( & rtB .
lyliwmyio0 [ 0 ] ) , ( NULL ) } } ; ssSetSolverRelTol ( rtS , 0.001 ) ;
ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ;
ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.001 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
1 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode23t" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset
( rtS , true ) ; ssSetAbsTolVector ( rtS , absTol ) ;
ssSetAbsTolControlVector ( rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete
( rtS , absTol ) ; ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl )
; ssSetSolverStateProjection ( rtS , 1 ) ; ( void ) memset ( ( void * ) &
mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ; ssSetModelMethods2 ( rtS , &
mdlMethods2 ) ; ( void ) memset ( ( void * ) & mdlMethods3 , 0 , sizeof (
mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , & mdlMethods3 ) ;
ssSetModelProjection ( rtS , MdlProjection ) ; ssSetMassMatrixType ( rtS , (
ssMatrixType ) 1 ) ; ssSetMassMatrixNzMax ( rtS , 16 ) ; ssSetModelMassMatrix
( rtS , MdlMassMatrix ) ; ssSetModelForcingFunction ( rtS ,
MdlForcingFunction ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 1 )
; ssSetSolverMassMatrixNzMax ( rtS , 16 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 12 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 12 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; { int_T
* ir = rtMassMatrix . ir ; int_T * jc = rtMassMatrix . jc ; real_T * pr =
rtMassMatrix . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS
, jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0
, 16 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 22 + 1 )
* sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 16 * sizeof (
real_T ) ) ; } } ssSetChecksumVal ( rtS , 0 , 1297423731U ) ;
ssSetChecksumVal ( rtS , 1 , 135611111U ) ; ssSetChecksumVal ( rtS , 2 ,
1216189137U ) ; ssSetChecksumVal ( rtS , 3 , 409340220U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 4 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
