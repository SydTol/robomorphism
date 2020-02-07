#include "__cf_Assembly1.h"
#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"
PmfMessageId sm_ssci_recordRunTimeError ( const char * errorId , const char *
errorMsg , NeuDiagnosticManager * mgr ) ;
#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))
PmIntVector * pm_create_int_vector ( size_t , PmAllocator * ) ; int_T
pm_create_int_vector_fields ( PmIntVector * , size_t , PmAllocator * ) ;
int_T pm_create_real_vector_fields ( PmRealVector * , size_t , PmAllocator *
) ; int_T pm_create_char_vector_fields ( PmCharVector * , size_t ,
PmAllocator * ) ; int_T pm_create_bool_vector_fields ( PmBoolVector * ,
size_t , PmAllocator * ) ; void pm_rv_equals_rv ( const PmRealVector * ,
const PmRealVector * ) ; void sm_ssci_setupLoggerFcn_codeGen ( const NeDae *
dae , NeLoggerBuilder * neLoggerBuilder ) ; int32_T sm_ssci_logFcn_codeGen (
const NeDae * dae , const NeSystemInput * systemInput , PmRealVector * output
) ; extern const NeAssertData Assembly1_3ef711a9_1_assertData [ ] ; extern
const NeZCData Assembly1_3ef711a9_1_ZCData [ ] ; void
Assembly1_3ef711a9_1_computeRuntimeParameters ( const double *
runtimeRootVariables , double * runtimeParameters ) ; void
Assembly1_3ef711a9_1_validateRuntimeParameters ( const double *
runtimeParameters , int32_T * assertSatisfactionFlags ) ; void
Assembly1_3ef711a9_1_computeAsmRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; void Assembly1_3ef711a9_1_computeSimRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; PmfMessageId Assembly1_3ef711a9_1_deriv ( const RuntimeDerivedValuesBundle
* , const int * , const double * , const int * , const double * , const
double * , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Assembly1_3ef711a9_1_checkDynamics ( const RuntimeDerivedValuesBundle * ,
const double * , const double * , const double * , const double * , const
double * , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Assembly1_3ef711a9_1_outputDyn ( const RuntimeDerivedValuesBundle * , const
int * , const double * , const int * , const double * , const double * ,
const double * , const double * , double * , double * , int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Assembly1_3ef711a9_1_outputKin ( const RuntimeDerivedValuesBundle * , const
double * , const int * , const double * , const double * , const double * ,
const double * , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Assembly1_3ef711a9_1_output ( const RuntimeDerivedValuesBundle * , const
double * , const int * , const double * , const double * , const double * ,
const double * , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Assembly1_3ef711a9_1_computeAsmModeVector ( const double * , const double * ,
const double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId Assembly1_3ef711a9_1_computeSimModeVector ( const double * ,
const double * , const double * , int * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId Assembly1_3ef711a9_1_onModeChanged ( const double
* , const double * , const double * , const int * , int * , double * , double
* , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Assembly1_3ef711a9_1_computeZeroCrossings ( const double * , const double * ,
const double * , double * , double * , NeuDiagnosticManager * neDiagMgr ) ;
#if 0
void Assembly1_3ef711a9_1_checkTargets ( const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle , const double * stateVector ) ;
#endif
void Assembly1_3ef711a9_1_setTargets ( const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle , CTarget * targets ) ; void
Assembly1_3ef711a9_1_resetAsmStateVector ( const void * mech , double *
stateVector ) ; void Assembly1_3ef711a9_1_resetSimStateVector ( const void *
mech , double * stateVector ) ; void
Assembly1_3ef711a9_1_initializeTrackedAngleState ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
modeVector , const double * motionData , double * stateVector , void *
neDiagMgr ) ; void Assembly1_3ef711a9_1_computeDiscreteState ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , double
* stateVector ) ; void Assembly1_3ef711a9_1_adjustPosition ( const void *
mech , const double * dofDeltas , double * stateVector ) ; void
Assembly1_3ef711a9_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
Assembly1_3ef711a9_1_perturbSimJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
Assembly1_3ef711a9_1_perturbFlexibleBodyState ( const void * mech , size_t
stageIdx , double magnitude , boolean_T doPerturbVelocity , double *
stateVector ) ; void Assembly1_3ef711a9_1_computeDofBlendMatrix ( const void
* mech , size_t stageIdx , size_t primitiveIdx , const double * stateVector ,
int partialType , double * matrix ) ; void
Assembly1_3ef711a9_1_projectPartiallyTargetedPos ( const void * mech , size_t
stageIdx , size_t primitiveIdx , const double * origStateVector , int
partialType , double * stateVector ) ; void
Assembly1_3ef711a9_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , double * motionData ) ; size_t
Assembly1_3ef711a9_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const double * stateVector , const int * modeVector , const
double * motionData , double * error ) ; size_t
Assembly1_3ef711a9_1_computeAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , boolean_T forVelocitySatisfaction , const double *
stateVector , const int * modeVector , const double * motionData , double * J
) ; size_t Assembly1_3ef711a9_1_computeFullAssemblyJacobian ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
double * stateVector , const int * modeVector , const double * motionData ,
double * J ) ; int Assembly1_3ef711a9_1_isInKinematicSingularity ( const void
* mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
size_t constraintIdx , const int * modeVector , const double * motionData ) ;
PmfMessageId Assembly1_3ef711a9_1_convertStateVector ( const void * asmMech ,
const RuntimeDerivedValuesBundle * asmRuntimeDerivedValuesBundle , const void
* simMech , const double * asmStateVector , const int * asmModeVector , const
int * simModeVector , double * simStateVector , void * neDiagMgr ) ; void
Assembly1_3ef711a9_1_constructStateVector ( const void * mech , const double
* solverStateVector , const double * u , const double * uDot , const double *
discreteStateVector , double * fullStateVector ) ; void
Assembly1_3ef711a9_1_extractSolverStateVector ( const void * mech , const
double * fullStateVector , double * solverStateVector ) ; int
Assembly1_3ef711a9_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; int Assembly1_3ef711a9_1_isVelocityViolation ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
int * constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; PmfMessageId Assembly1_3ef711a9_1_projectStateSim ( const void
* mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
const int * constraintEqnEnableFlags , const int * modeVector , const double
* inputVector , double * stateVector , void * neDiagMgr ) ; void
Assembly1_3ef711a9_1_computeConstraintError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , const int * modeVector , double * error ) ; void
Assembly1_3ef711a9_1_resetModeVector ( const void * mech , int * modeVector )
; PmfMessageId Assembly1_3ef711a9_1_assemble ( const double * u , double *
udot , double * x , NeuDiagnosticManager * neDiagMgr ) { ( void ) x ; ( void
) u ; ( void ) udot ; ( void ) neDiagMgr ; return NULL ; } static void
dae_cg_setParameters_function ( const NeDae * dae , const NeParameterBundle *
paramBundle ) { const NeDaePrivateData * smData = dae -> mPrivateData ; const
double * runtimeRootVariables = paramBundle -> mRealParameters . mX ; if (
smData -> mRuntimeParameterScalars . mN == 0 ) return ;
Assembly1_3ef711a9_1_computeRuntimeParameters ( runtimeRootVariables , smData
-> mRuntimeParameterScalars . mX ) ;
Assembly1_3ef711a9_1_computeAsmRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mAsmRuntimeDerivedValuesBundle ) ;
Assembly1_3ef711a9_1_computeSimRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mSimRuntimeDerivedValuesBundle ) ;
sm_core_computeRedundantConstraintEquations ( & dae -> mPrivateData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ) ;
#if 0
{ size_t i ; const size_t n = smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mSize ; pmf_printf (
"\nRuntime Enabled Equations (%lu)\n" , n ) ; for ( i = 0 ; i < n ; ++ i )
pmf_printf ( "  %2lu:  %d\n" , i , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues [ i ] ) ; }
#endif
} static PmfMessageId dae_cg_pAssert_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; const double * runtimeParams = smData ->
mRuntimeParameterScalars . mX ; int32_T * assertSatisfactionFlags =
daeMethodOutput -> mPASSERT . mX ; ( void ) systemInput ; ( void ) neDiagMgr
; Assembly1_3ef711a9_1_validateRuntimeParameters ( runtimeParams ,
assertSatisfactionFlags ) ; return NULL ; } static PmfMessageId
dae_cg_deriv_method ( const NeDae * dae , const NeSystemInput * systemInput ,
NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) {
const NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId
= NULL ; double errorResult = 0.0 ; if ( smData ->
mCachedDerivativesAvailable ) memcpy ( daeMethodOutput -> mXP0 . mX , smData
-> mCachedDerivatives . mX , 6 * sizeof ( real_T ) ) ; else errorId =
Assembly1_3ef711a9_1_deriv ( & smData -> mSimRuntimeDerivedValuesBundle ,
smData -> mSimulationDelegate . mRunTimeEnabledEquations . mValues ,
systemInput -> mX . mX , systemInput -> mM . mX , systemInput -> mU . mX ,
systemInput -> mU . mX + 3 , systemInput -> mV . mX + 3 , systemInput -> mD .
mX , daeMethodOutput -> mXP0 . mX , & errorResult , neDiagMgr ) ; return
errorId ; } static PmfMessageId dae_cg_output_method ( const NeDae * dae ,
const NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { PmfMessageId errorId = NULL ;
NeDaePrivateData * smData = dae -> mPrivateData ; errorId =
Assembly1_3ef711a9_1_output ( & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mX . mX , systemInput -> mM . mX , systemInput -> mU . mX ,
systemInput -> mU . mX + 3 , systemInput -> mV . mX + 3 , systemInput -> mD .
mX , daeMethodOutput -> mY . mX , neDiagMgr ) ; return errorId ; } static
PmfMessageId dae_cg_mode_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
Assembly1_3ef711a9_1_computeSimModeVector ( systemInput -> mU . mX ,
systemInput -> mU . mX + 3 , systemInput -> mV . mX + 3 , daeMethodOutput ->
mMODE . mX , & errorResult , neDiagMgr ) ; memcpy ( smData ->
mCachedModeVector . mX , daeMethodOutput -> mMODE . mX , 0 * sizeof ( int32_T
) ) ; return errorId ; } static PmfMessageId dae_cg_zeroCrossing_method (
const NeDae * dae , const NeSystemInput * systemInput , NeDaeMethodOutput *
daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData
* smData = dae -> mPrivateData ; double errorResult = 0.0 ; return
Assembly1_3ef711a9_1_computeZeroCrossings ( systemInput -> mU . mX ,
systemInput -> mU . mX + 3 , systemInput -> mV . mX + 3 , daeMethodOutput ->
mZC . mX , & errorResult , neDiagMgr ) ; } static PmfMessageId
dae_cg_project_solve ( const NeDae * dae , const NeSystemInput * systemInput
, NeuDiagnosticManager * neDiagMgr ) { NeDaePrivateData * smData = dae ->
mPrivateData ; return sm_core_projectState ( false , & smData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 3
, systemInput -> mD . mX , systemInput -> mX . mX , neDiagMgr ) ; } static
PmfMessageId dae_cg_check_solve ( const NeDae * dae , const NeSystemInput *
systemInput , NeuDiagnosticManager * neDiagMgr ) { NeDaePrivateData * smData
= dae -> mPrivateData ; PmfMessageId errorId = NULL ; if ( smData ->
mNumConstraintEqns > 0 ) errorId = sm_core_projectState ( false , & smData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 3
, systemInput -> mD . mX , systemInput -> mX . mX , neDiagMgr ) ; if (
errorId == NULL && smData -> mDoCheckDynamics ) { double result = 0.0 ;
errorId = Assembly1_3ef711a9_1_checkDynamics ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 3 , systemInput -> mV . mX + 3 , systemInput ->
mD . mX , & result , neDiagMgr ) ; } return errorId ; } static PmfMessageId
dae_cg_CIC_MODE_solve ( const NeDae * dae , const NeSystemInput * systemInput
, NeuDiagnosticManager * neDiagMgr ) { NeDaePrivateData * smData = dae ->
mPrivateData ; PmfMessageId errorId = NULL ; double errorResult = 0.0 ; const
size_t mvSize = smData -> mModeVectorSize ; boolean_T modeChanged = false ;
if ( mvSize > 0 ) { errorId = Assembly1_3ef711a9_1_computeSimModeVector (
systemInput -> mU . mX , systemInput -> mU . mX + 3 , systemInput -> mV . mX
+ 3 , systemInput -> mM . mX , & errorResult , neDiagMgr ) ; if ( errorId !=
NULL ) return errorId ; { size_t i ; for ( i = 0 ; i < mvSize ; ++ i ) if (
systemInput -> mM . mX [ i ] != smData -> mCachedModeVector . mX [ i ] ) {
modeChanged = true ; break ; } } } if ( modeChanged ) { errorId =
Assembly1_3ef711a9_1_onModeChanged ( systemInput -> mU . mX , systemInput ->
mU . mX + 3 , systemInput -> mV . mX + 3 , smData -> mCachedModeVector . mX ,
systemInput -> mM . mX , systemInput -> mX . mX , systemInput -> mD . mX , &
errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId ; memcpy (
smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 * sizeof (
int32_T ) ) ; } errorId = sm_core_projectState ( true , & smData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 3
, systemInput -> mD . mX , systemInput -> mX . mX , neDiagMgr ) ; return
errorId ; } static PmfMessageId dae_cg_assemble_solve ( const NeDae * dae ,
const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; const SmMechanismDelegate *
delegate = & smData -> mAssemblyDelegate ; const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle = & smData -> mAsmRuntimeDerivedValuesBundle ;
PmfMessageId errorId = NULL ; size_t i ; double errorResult = 0.0 ; const
size_t numTargets = 6 ; unsigned int asmStatus = 0 ; double *
assemblyFullStateVector = smData -> mAssemblyFullStateVector . mX ; double *
simulationFullStateVector = smData -> mSimulationFullStateVector . mX ; ( *
delegate -> mSetTargets ) ( runtimeDerivedValuesBundle , smData -> mTargets )
; { const double * u = systemInput -> mU . mX ; const double * uDot = u +
smData -> mInputVectorSize ; CTarget * target = smData -> mTargets + smData
-> mNumInternalTargets ; for ( i = 0 ; i < smData ->
mNumInputMotionPrimitives ; ++ i ) { const size_t inputOffset = smData ->
mMotionInputOffsets . mX [ i ] ; ( target ++ ) -> mValue [ 0 ] = u [
inputOffset ] ; ( target ++ ) -> mValue [ 0 ] = uDot [ inputOffset ] ; } } if
( smData -> mAssemblyModeVector . mN > 0 ) { errorId =
Assembly1_3ef711a9_1_computeAsmModeVector ( systemInput -> mU . mX ,
systemInput -> mU . mX + 3 , systemInput -> mV . mX + 3 , smData ->
mAssemblyModeVector . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL
) return errorId ; } errorId = sm_core_computeStateVector ( delegate ,
runtimeDerivedValuesBundle , smData -> mAssemblyModeVector . mX , numTargets
, smData -> mTargets , assemblyFullStateVector , neDiagMgr ) ; if ( errorId
!= NULL ) return errorId ; asmStatus = sm_core_checkAssembly ( delegate ,
runtimeDerivedValuesBundle , assemblyFullStateVector , smData ->
mAssemblyModeVector . mX , NULL , NULL , NULL ) ; if ( asmStatus != 1 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:AssemblyFailure" , asmStatus == 2 ?
 "Model not assembled due to a position violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
: ( asmStatus == 3 ?
 "Model not assembled due to a velocity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
:
 "Model not assembled due to a singularity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
) , neDiagMgr ) ; }
#if 0
Assembly1_3ef711a9_1_checkTargets ( & smData ->
mSimRuntimeDerivedValuesBundle , assemblyFullStateVector ) ;
#endif
if ( smData -> mModeVectorSize > 0 ) { errorId =
Assembly1_3ef711a9_1_computeSimModeVector ( systemInput -> mU . mX ,
systemInput -> mU . mX + 3 , systemInput -> mV . mX + 3 , systemInput -> mM .
mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId ;
memcpy ( smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 *
sizeof ( int32_T ) ) ; } errorId = ( * delegate -> mConvertStateVector ) (
NULL , runtimeDerivedValuesBundle , NULL , assemblyFullStateVector , smData
-> mAssemblyModeVector . mX , systemInput -> mM . mX ,
simulationFullStateVector , neDiagMgr ) ; for ( i = 0 ; i < smData ->
mStateVectorSize ; ++ i ) systemInput -> mX . mX [ i ] =
simulationFullStateVector [ smData -> mStateVectorMap . mX [ i ] ] ; memcpy (
systemInput -> mD . mX , simulationFullStateVector + smData ->
mFullStateVectorSize - smData -> mDiscreteStateSize , smData ->
mDiscreteStateSize * sizeof ( double ) ) ; return errorId ; } typedef struct
{ size_t first ; size_t second ; } SizePair ; static void checkMemAllocStatus
( int_T status ) { ( void ) status ; } static PmCharVector
cStringToCharVector ( const char * src ) { const size_t n = strlen ( src ) ;
PmCharVector charVect ; const int_T status = pm_create_char_vector_fields ( &
charVect , n + 1 , pm_default_allocator ( ) ) ; checkMemAllocStatus ( status
) ; strcpy ( charVect . mX , src ) ; return charVect ; } static void
initBasicAttributes ( NeDaePrivateData * smData ) { size_t i ; smData ->
mStateVectorSize = 6 ; smData -> mFullStateVectorSize = 6 ; smData ->
mDiscreteStateSize = 0 ; smData -> mModeVectorSize = 0 ; smData ->
mNumZeroCrossings = 0 ; smData -> mInputVectorSize = 3 ; smData ->
mOutputVectorSize = 3 ; smData -> mNumConstraintEqns = 0 ; smData ->
mDoCheckDynamics = false ; for ( i = 0 ; i < 4 ; ++ i ) smData -> mChecksum [
i ] = 0 ; } static void initStateVector ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; const int32_T stateVectorMap
[ 6 ] = { 0 , 1 , 2 , 3 , 4 , 5 } ; const CTarget targets [ 6 ] = { { 0 , 47
, 0 , false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 ,
true , 1 , { + 3.169999999999973461e-07 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 47 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 48 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , true ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 48 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 49 , 0
, false , 0 , 1 , "deg" , false , true , + 1.000000000000000000e+00 , true ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 49 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } } ; const
size_t numTargets = 6 ; int_T status ; size_t i ; status =
pm_create_real_vector_fields ( & smData -> mAssemblyFullStateVector , 6 ,
alloc ) ; checkMemAllocStatus ( status ) ; status =
pm_create_real_vector_fields ( & smData -> mSimulationFullStateVector , 6 ,
alloc ) ; checkMemAllocStatus ( status ) ; status =
pm_create_int_vector_fields ( & smData -> mStateVectorMap , smData ->
mStateVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mStateVectorMap . mX , stateVectorMap , smData -> mStateVectorSize *
sizeof ( int32_T ) ) ; smData -> mNumInternalTargets = 6 ; smData ->
mNumInputMotionPrimitives = 0 ; PM_ALLOCATE_ARRAY ( smData -> mTargets ,
CTarget , numTargets , alloc ) ; for ( i = 0 ; i < numTargets ; ++ i )
sm_compiler_CTarget_copy ( targets + i , smData -> mTargets + i ) ; } static
void initAsserts ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; smData -> mNumParamAsserts = 0
; smData -> mParamAssertObjects = NULL ; smData -> mParamAssertPaths = NULL ;
smData -> mParamAssertDescriptors = NULL ; smData -> mParamAssertMessages =
NULL ; smData -> mParamAssertMessageIds = NULL ; status =
pm_create_bool_vector_fields ( & smData -> mParamAssertIsWarnings , smData ->
mNumParamAsserts , alloc ) ; checkMemAllocStatus ( status ) ; if ( smData ->
mNumParamAsserts > 0 ) { const NeAssertData * ad =
Assembly1_3ef711a9_1_assertData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mParamAssertObjects , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY ( smData
-> mParamAssertPaths , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mParamAssertDescriptors , PmCharVector , 0 , alloc ) ;
PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessages , PmCharVector , 0 , alloc
) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessageIds , PmCharVector , 0 ,
alloc ) ; for ( i = 0 ; i < smData -> mNumParamAsserts ; ++ i , ++ ad ) {
smData -> mParamAssertObjects [ i ] = cStringToCharVector ( ad -> mObject ) ;
smData -> mParamAssertPaths [ i ] = cStringToCharVector ( ad -> mPath ) ;
smData -> mParamAssertDescriptors [ i ] = cStringToCharVector ( ad ->
mDescriptor ) ; smData -> mParamAssertMessages [ i ] = cStringToCharVector (
ad -> mMessage ) ; smData -> mParamAssertMessageIds [ i ] =
cStringToCharVector ( ad -> mMessageID ) ; smData -> mParamAssertIsWarnings .
mX [ i ] = ad -> mIsWarn ; } } } static void initModeVector (
NeDaePrivateData * smData ) { { size_t i ; const int_T status =
pm_create_int_vector_fields ( & smData -> mAssemblyModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mAssemblyModeVector . mN ; ++ i ) smData -> mAssemblyModeVector .
mX [ i ] = 0 ; } { size_t i ; const int_T status =
pm_create_int_vector_fields ( & smData -> mCachedModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mModeVectorSize ; ++ i ) smData -> mCachedModeVector . mX [ i ] =
0 ; } } static void initZeroCrossings ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ; smData ->
mZeroCrossingObjects = NULL ; smData -> mZeroCrossingPaths = NULL ; smData ->
mZeroCrossingDescriptors = NULL ; status = pm_create_int_vector_fields ( &
smData -> mZeroCrossingTypes , 0 , alloc ) ; checkMemAllocStatus ( status ) ;
if ( smData -> mNumZeroCrossings > 0 ) { const NeZCData * zcd =
Assembly1_3ef711a9_1_ZCData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mZeroCrossingObjects , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mZeroCrossingPaths , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY
( smData -> mZeroCrossingDescriptors , PmCharVector , 0 , alloc ) ; for ( i =
0 ; i < smData -> mNumZeroCrossings ; ++ i , ++ zcd ) { smData ->
mZeroCrossingObjects [ i ] = cStringToCharVector ( zcd -> mObject ) ; smData
-> mZeroCrossingPaths [ i ] = cStringToCharVector ( zcd -> mPath ) ; smData
-> mZeroCrossingDescriptors [ i ] = cStringToCharVector ( zcd -> mDescriptor
) ; smData -> mZeroCrossingTypes . mX [ i ] = zcd -> mType ; } } } static
void initVariables ( NeDaePrivateData * smData ) { const char * varFullPaths
[ 6 ] = { "Revolute1.Rz.q" , "Revolute1.Rz.w" , "Revolute2.Rz.q" ,
"Revolute2.Rz.w" , "Revolute3.Rz.q" , "Revolute3.Rz.w" } ; const char *
varObjects [ 6 ] = { "Assembly1/Revolute1" , "Assembly1/Revolute1" ,
"Assembly1/Revolute2" , "Assembly1/Revolute2" , "Assembly1/Revolute3" ,
"Assembly1/Revolute3" } ; smData -> mNumVarScalars = 6 ; smData ->
mVarFullPaths = NULL ; smData -> mVarObjects = NULL ; if ( smData ->
mNumVarScalars > 0 ) { size_t s ; PmAllocator * alloc = pm_default_allocator
( ) ; PM_ALLOCATE_ARRAY ( smData -> mVarFullPaths , PmCharVector , 6 , alloc
) ; PM_ALLOCATE_ARRAY ( smData -> mVarObjects , PmCharVector , 6 , alloc ) ;
for ( s = 0 ; s < smData -> mNumVarScalars ; ++ s ) { smData -> mVarFullPaths
[ s ] = cStringToCharVector ( varFullPaths [ s ] ) ; smData -> mVarObjects [
s ] = cStringToCharVector ( varObjects [ s ] ) ; } } } static void
initRuntimeParameters ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; size_t i = 0 ; const int32_T *
rtpRootVarRows = NULL ; const int32_T * rtpRootVarCols = NULL ; const char *
* rtpFullPaths = NULL ; smData -> mNumRtpRootVars = 0 ; status =
pm_create_int_vector_fields ( & smData -> mRtpRootVarRows , smData ->
mNumRtpRootVars , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mRtpRootVarRows . mX , rtpRootVarRows , smData -> mNumRtpRootVars * sizeof
( int32_T ) ) ; status = pm_create_int_vector_fields ( & smData ->
mRtpRootVarCols , smData -> mNumRtpRootVars , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mRtpRootVarCols . mX , rtpRootVarCols , smData
-> mNumRtpRootVars * sizeof ( int32_T ) ) ; smData -> mRtpFullPaths = NULL ;
if ( smData -> mNumRtpRootVars > 0 ) { size_t v ; PM_ALLOCATE_ARRAY ( smData
-> mRtpFullPaths , PmCharVector , 0 , alloc ) ; for ( v = 0 ; v < smData ->
mNumRtpRootVars ; ++ v ) { smData -> mRtpFullPaths [ v ] =
cStringToCharVector ( rtpFullPaths [ v ] ) ; } } smData ->
mNumRuntimeRootVarScalars = 0 ; status = pm_create_real_vector_fields ( &
smData -> mRuntimeParameterScalars , 0 , alloc ) ; checkMemAllocStatus (
status ) ; for ( i = 0 ; i < smData -> mRuntimeParameterScalars . mN ; ++ i )
smData -> mRuntimeParameterScalars . mX [ i ] = 0.0 ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mAsmRuntimeDerivedValuesBundle , 0 , 0 ) ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mSimRuntimeDerivedValuesBundle , 0 , 0 ) ; } static void initIoInfoHelper (
size_t n , const char * portPathsSource [ ] , const char * unitsSource [ ] ,
const SizePair dimensions [ ] , boolean_T doInputs , NeDaePrivateData *
smData ) { PmCharVector * portPaths = NULL ; PmCharVector * units = NULL ;
NeDsIoInfo * infos = NULL ; if ( n > 0 ) { size_t s ; PmAllocator * alloc =
pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( portPaths , PmCharVector , n ,
alloc ) ; PM_ALLOCATE_ARRAY ( units , PmCharVector , n , alloc ) ;
PM_ALLOCATE_ARRAY ( infos , NeDsIoInfo , n , alloc ) ; for ( s = 0 ; s < n ;
++ s ) { portPaths [ s ] = cStringToCharVector ( portPathsSource [ s ] ) ;
units [ s ] = cStringToCharVector ( unitsSource [ s ] ) ; { NeDsIoInfo * info
= infos + s ; info -> mName = info -> mIdentifier = portPaths [ s ] . mX ;
info -> mM = dimensions [ s ] . first ; info -> mN = dimensions [ s ] .
second ; info -> mUnit = units [ s ] . mX ; } } } if ( doInputs ) { smData ->
mNumInputs = n ; smData -> mInputPortPaths = portPaths ; smData ->
mInputUnits = units ; smData -> mInputInfos = infos ; } else { smData ->
mNumOutputs = n ; smData -> mOutputPortPaths = portPaths ; smData ->
mOutputUnits = units ; smData -> mOutputInfos = infos ; } } static void
initIoInfo ( NeDaePrivateData * smData ) { const char * inputPortPaths [ 3 ]
= { "Revolute1.ti" , "Revolute2.ti" , "Revolute3.ti" } ; const char *
inputUnits [ 3 ] = { "m^2*kg/s^2" , "m^2*kg/s^2" , "m^2*kg/s^2" } ; const
SizePair inputDimensions [ 3 ] = { { 1 , 1 } , { 1 , 1 } , { 1 , 1 } } ;
const char * outputPortPaths [ 3 ] = { "Revolute1.q" , "Revolute2.q" ,
"Revolute3.q" } ; const char * outputUnits [ 3 ] = { "rad" , "rad" , "rad" }
; const SizePair outputDimensions [ 3 ] = { { 1 , 1 } , { 1 , 1 } , { 1 , 1 }
} ; initIoInfoHelper ( 3 , inputPortPaths , inputUnits , inputDimensions ,
true , smData ) ; initIoInfoHelper ( 3 , outputPortPaths , outputUnits ,
outputDimensions , false , smData ) ; } static void initInputDerivs (
NeDaePrivateData * smData ) { const int32_T numInputDerivs [ 3 ] = { 0 , 0 ,
0 } ; PmAllocator * alloc = pm_default_allocator ( ) ; const int_T status =
pm_create_int_vector_fields ( & smData -> mNumInputDerivs , smData ->
mInputVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mNumInputDerivs . mX , numInputDerivs , 3 * sizeof ( int32_T ) ) ; smData
-> mInputOrder = 1 ; } static void initDirectFeedthrough ( NeDaePrivateData *
smData ) { const boolean_T directFeedthroughVector [ 3 ] = { false , false ,
false } ; const boolean_T directFeedthroughMatrix [ 9 ] = { false , false ,
false , false , false , false , false , false , false } ; PmAllocator * alloc
= pm_default_allocator ( ) ; { const int_T status =
pm_create_bool_vector_fields ( & smData -> mDirectFeedthroughVector , 3 ,
alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mDirectFeedthroughVector . mX , directFeedthroughVector , 3 * sizeof (
boolean_T ) ) ; } { const int_T status = pm_create_bool_vector_fields ( &
smData -> mDirectFeedthroughMatrix , 9 , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mDirectFeedthroughMatrix . mX ,
directFeedthroughMatrix , 9 * sizeof ( boolean_T ) ) ; } } static void
initOutputDerivProc ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; const int32_T outputFunctionMap [ 3 ] = { 0 , 0 ,
0 } ; smData -> mOutputFunctionMap = pm_create_int_vector ( 3 , alloc ) ;
memcpy ( smData -> mOutputFunctionMap -> mX , outputFunctionMap , 3 * sizeof
( int32_T ) ) ; smData -> mNumOutputClasses = 1 ; smData ->
mHasKinematicOutputs = true ; smData -> mHasDynamicOutputs = false ; smData
-> mIsOutputClass0Dynamic = false ; smData -> mDoComputeDynamicOutputs =
false ; smData -> mCachedDerivativesAvailable = false ; { size_t i = 0 ;
const int_T status = pm_create_real_vector_fields ( & smData ->
mCachedDerivatives , 0 , pm_default_allocator ( ) ) ; checkMemAllocStatus (
status ) ; for ( i = 0 ; i < smData -> mCachedDerivatives . mN ; ++ i )
smData -> mCachedDerivatives . mX [ i ] = 0.0 ; } }
#if 0
static void initializeSizePairVector ( const SmSizePair * data ,
SmSizePairVector * vector ) { const size_t n = sm_core_SmSizePairVector_size
( vector ) ; size_t i ; for ( i = 0 ; i < n ; ++ i , ++ data )
sm_core_SmSizePairVector_setValue ( vector , i , data ++ ) ; }
#endif
static void initAssemblyDelegate ( SmMechanismDelegate * delegate ) {
SmMechanismDelegateScratchpad * scratchpad = NULL ; const SmSizePair
jointToStageIdx [ 3 ] = { { 47 , 0 } , { 48 , 1 } , { 49 , 2 } } ; const
size_t primitiveIndices [ 3 + 1 ] = { 0 , 1 , 2 , 3 } ; const SmSizePair
stateOffsets [ 3 ] = { { 0 , 1 } , { 2 , 3 } , { 4 , 5 } } ; const SmSizePair
dofOffsets [ 3 ] = { { 0 , 1 } , { 1 , 2 } , { 2 , 3 } } ; const size_t *
flexibleStages = NULL ; const size_t remodIndices [ 3 ] = { 0 , 2 , 4 } ;
const size_t * equationsPerConstraint = NULL ; const size_t dofToVelSlot [ 3
] = { 1 , 3 , 5 } ; const size_t * constraintDofs = NULL ; const size_t
constraintDofOffsets [ 0 + 1 ] = { 0 } ; const size_t Jm = 0 ; const size_t
Jn = 3 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst = zeroSizePair .
mSecond = 0 ; sm_core_MechanismDelegate_allocScratchpad ( delegate ) ;
scratchpad = delegate -> mScratchpad ; delegate -> mTargetStrengthFree = 0 ;
delegate -> mTargetStrengthSuggested = 1 ; delegate -> mTargetStrengthDesired
= 2 ; delegate -> mTargetStrengthRequired = 3 ; delegate -> mConsistencyTol =
+ 1.000000000000000062e-09 ; delegate -> mTreeJointDof = 3 ; delegate -> mDof
= 3 ; delegate -> mStateSize = 6 ; delegate -> mContinuousStateSize = 6 ;
delegate -> mModeVectorSize = 0 ; delegate -> mNumStages = 3 ; delegate ->
mNumConstraints = 0 ; delegate -> mNumAllConstraintEquations = 0 ;
sm_core_SmSizePairVector_create ( & delegate -> mJointToStageIdx , 3 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mJointToStageIdx ) , jointToStageIdx , 3 * sizeof ( SmSizePair )
) ; sm_core_SmSizeTVector_create ( & delegate -> mPrimitiveIndices , delegate
-> mNumStages + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mPrimitiveIndices ) , primitiveIndices , ( delegate -> mNumStages
+ 1 ) * sizeof ( size_t ) ) ; sm_core_SmSizePairVector_create ( & delegate ->
mStateOffsets , 3 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mStateOffsets ) ,
stateOffsets , 3 * sizeof ( SmSizePair ) ) ; sm_core_SmSizePairVector_create
( & delegate -> mDofOffsets , 3 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mDofOffsets ) ,
dofOffsets , 3 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mFlexibleStages , 0 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages ) ,
flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mRemodIndices , 3 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 3 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mRunTimeEnabledEquations , delegate -> mNumAllConstraintEquations
, 1 ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot , delegate
-> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosRequired , 3 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosDesired , 3 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggested , 3 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mPosFree
, 3 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mPosNonRequired , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mPosSuggAndFree , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelRequired , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelDesired , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggested , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 0 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 0 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 3 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 3 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 3 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 3 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 3 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 3 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 3 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 0 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvVelOffsets , 3 , &
zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvAzimuthValues , 3 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mInitialState , 6 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mStartState , 6 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mTestState , 6 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mFullStateVector , 6 , 0.0 ) ; sm_core_SmIntVector_create ( & scratchpad ->
mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 16 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 3 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 3 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 39 , 0.0
) ; delegate -> mSetTargets = Assembly1_3ef711a9_1_setTargets ; delegate ->
mResetStateVector = Assembly1_3ef711a9_1_resetAsmStateVector ; delegate ->
mInitializeTrackedAngleState =
Assembly1_3ef711a9_1_initializeTrackedAngleState ; delegate ->
mComputeDiscreteState = Assembly1_3ef711a9_1_computeDiscreteState ; delegate
-> mAdjustPosition = Assembly1_3ef711a9_1_adjustPosition ; delegate ->
mPerturbJointPrimitiveState =
Assembly1_3ef711a9_1_perturbAsmJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState = NULL ; delegate -> mComputeDofBlendMatrix =
Assembly1_3ef711a9_1_computeDofBlendMatrix ; delegate ->
mProjectPartiallyTargetedPos =
Assembly1_3ef711a9_1_projectPartiallyTargetedPos ; delegate ->
mPropagateMotion = Assembly1_3ef711a9_1_propagateMotion ; delegate ->
mComputeAssemblyError = Assembly1_3ef711a9_1_computeAssemblyError ; delegate
-> mComputeAssemblyJacobian = Assembly1_3ef711a9_1_computeAssemblyJacobian ;
delegate -> mComputeFullAssemblyJacobian =
Assembly1_3ef711a9_1_computeFullAssemblyJacobian ; delegate ->
mIsInKinematicSingularity = Assembly1_3ef711a9_1_isInKinematicSingularity ;
delegate -> mConvertStateVector = Assembly1_3ef711a9_1_convertStateVector ;
delegate -> mConstructStateVector = NULL ; delegate ->
mExtractSolverStateVector = NULL ; delegate -> mIsPositionViolation = NULL ;
delegate -> mIsVelocityViolation = NULL ; delegate -> mProjectStateSim = NULL
; delegate -> mComputeConstraintError = NULL ; delegate -> mResetModeVector =
NULL ; delegate -> mMech = NULL ; } static void initSimulationDelegate (
SmMechanismDelegate * delegate ) { SmMechanismDelegateScratchpad * scratchpad
= NULL ; const SmSizePair jointToStageIdx [ 3 ] = { { 47 , 0 } , { 48 , 1 } ,
{ 49 , 2 } } ; const size_t primitiveIndices [ 3 + 1 ] = { 0 , 1 , 2 , 3 } ;
const SmSizePair stateOffsets [ 3 ] = { { 0 , 1 } , { 2 , 3 } , { 4 , 5 } } ;
const SmSizePair dofOffsets [ 3 ] = { { 0 , 1 } , { 1 , 2 } , { 2 , 3 } } ;
const size_t * flexibleStages = NULL ; const size_t remodIndices [ 3 ] = { 0
, 2 , 4 } ; const size_t * equationsPerConstraint = NULL ; const size_t
dofToVelSlot [ 3 ] = { 1 , 3 , 5 } ; const size_t * constraintDofs = NULL ;
const size_t constraintDofOffsets [ 0 + 1 ] = { 0 } ; const size_t Jm = 0 ;
const size_t Jn = 3 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst =
zeroSizePair . mSecond = 0 ; sm_core_MechanismDelegate_allocScratchpad (
delegate ) ; scratchpad = delegate -> mScratchpad ; delegate ->
mTargetStrengthFree = 0 ; delegate -> mTargetStrengthSuggested = 1 ; delegate
-> mTargetStrengthDesired = 2 ; delegate -> mTargetStrengthRequired = 3 ;
delegate -> mConsistencyTol = + 1.000000000000000062e-09 ; delegate ->
mTreeJointDof = 3 ; delegate -> mDof = 3 ; delegate -> mStateSize = 6 ;
delegate -> mContinuousStateSize = 6 ; delegate -> mModeVectorSize = 0 ;
delegate -> mNumStages = 3 ; delegate -> mNumConstraints = 0 ; delegate ->
mNumAllConstraintEquations = 0 ; sm_core_SmSizePairVector_create ( & delegate
-> mJointToStageIdx , 3 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mJointToStageIdx ) ,
jointToStageIdx , 3 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mPrimitiveIndices , delegate -> mNumStages + 1 , 0 ) ; memcpy
( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mPrimitiveIndices ) ,
primitiveIndices , ( delegate -> mNumStages + 1 ) * sizeof ( size_t ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mStateOffsets , 3 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mStateOffsets ) , stateOffsets , 3 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mDofOffsets , 3 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mDofOffsets ) , dofOffsets , 3 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mFlexibleStages , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages
) , flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mRemodIndices , 3 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 3 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mRunTimeEnabledEquations , delegate -> mNumAllConstraintEquations
, 1 ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot , delegate
-> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosRequired , 3 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosDesired , 3 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggested , 3 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mPosFree
, 3 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mPosNonRequired , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mPosSuggAndFree , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelRequired , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelDesired , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggested , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 3 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 0 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 0 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 3 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 3 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 3 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 3 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 3 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 3 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 3 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 0 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvVelOffsets , 3 , &
zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvAzimuthValues , 3 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mInitialState , 6 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mStartState , 6 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mTestState , 6 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mFullStateVector , 6 , 0.0 ) ; sm_core_SmIntVector_create ( & scratchpad ->
mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 16 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 3 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 3 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 39 , 0.0
) ; delegate -> mSetTargets = NULL ; delegate -> mResetStateVector =
Assembly1_3ef711a9_1_resetSimStateVector ; delegate ->
mInitializeTrackedAngleState = NULL ; delegate -> mComputeDiscreteState =
NULL ; delegate -> mAdjustPosition = NULL ; delegate ->
mPerturbJointPrimitiveState =
Assembly1_3ef711a9_1_perturbSimJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState = Assembly1_3ef711a9_1_perturbFlexibleBodyState ;
delegate -> mComputeDofBlendMatrix = NULL ; delegate ->
mProjectPartiallyTargetedPos = NULL ; delegate -> mPropagateMotion = NULL ;
delegate -> mComputeAssemblyError = NULL ; delegate ->
mComputeAssemblyJacobian = NULL ; delegate -> mComputeFullAssemblyJacobian =
NULL ; delegate -> mIsInKinematicSingularity = NULL ; delegate ->
mConvertStateVector = NULL ; delegate -> mConstructStateVector =
Assembly1_3ef711a9_1_constructStateVector ; delegate ->
mExtractSolverStateVector = Assembly1_3ef711a9_1_extractSolverStateVector ;
delegate -> mIsPositionViolation = Assembly1_3ef711a9_1_isPositionViolation ;
delegate -> mIsVelocityViolation = Assembly1_3ef711a9_1_isVelocityViolation ;
delegate -> mProjectStateSim = Assembly1_3ef711a9_1_projectStateSim ;
delegate -> mComputeConstraintError =
Assembly1_3ef711a9_1_computeConstraintError ; delegate -> mResetModeVector =
Assembly1_3ef711a9_1_resetModeVector ; delegate -> mMech = NULL ; } static
void initMechanismDelegates ( NeDaePrivateData * smData ) { PmAllocator *
alloc = pm_default_allocator ( ) ; const int32_T * motionInputOffsets = NULL
; int_T status = 0 ; initAssemblyDelegate ( & smData -> mAssemblyDelegate ) ;
initSimulationDelegate ( & smData -> mSimulationDelegate ) ; status =
pm_create_int_vector_fields ( & smData -> mMotionInputOffsets , smData ->
mNumInputMotionPrimitives , alloc ) ; checkMemAllocStatus ( status ) ; memcpy
( smData -> mMotionInputOffsets . mX , motionInputOffsets , 0 * sizeof (
int32_T ) ) ; } static void initComputationFcnPtrs ( NeDaePrivateData *
smData ) { smData -> mSetParametersFcn = dae_cg_setParameters_function ;
smData -> mPAssertFcn = dae_cg_pAssert_method ; smData -> mDerivativeFcn =
dae_cg_deriv_method ; smData -> mOutputFcn = dae_cg_output_method ; smData ->
mModeFcn = dae_cg_mode_method ; smData -> mZeroCrossingFcn =
dae_cg_zeroCrossing_method ; smData -> mProjectionFcn = dae_cg_project_solve
; smData -> mCIC_MODE_Fcn = dae_cg_CIC_MODE_solve ; smData -> mCheckFcn = (
smData -> mStateVectorSize == 0 ) ? dae_cg_check_solve : NULL ; smData ->
mAssemblyFcn = dae_cg_assemble_solve ; smData -> mSetupLoggerFcn =
sm_ssci_setupLoggerFcn_codeGen ; smData -> mLogFcn = sm_ssci_logFcn_codeGen ;
smData -> mResidualsFcn = NULL ; smData -> mLinearizeFcn = NULL ; smData ->
mGenerateFcn = NULL ; } static void initLiveLinkToSm ( NeDaePrivateData *
smData ) { smData -> mLiveSmLink = NULL ; smData -> mLiveSmLink_destroy =
NULL ; smData -> mLiveSmLink_copy = NULL ; } void
Assembly1_3ef711a9_1_NeDaePrivateData_create ( NeDaePrivateData * smData ) {
initBasicAttributes ( smData ) ; initStateVector ( smData ) ; initAsserts (
smData ) ; initModeVector ( smData ) ; initZeroCrossings ( smData ) ;
initVariables ( smData ) ; initRuntimeParameters ( smData ) ; initIoInfo (
smData ) ; initInputDerivs ( smData ) ; initDirectFeedthrough ( smData ) ;
initOutputDerivProc ( smData ) ; initMechanismDelegates ( smData ) ;
initComputationFcnPtrs ( smData ) ; initLiveLinkToSm ( smData ) ; }
