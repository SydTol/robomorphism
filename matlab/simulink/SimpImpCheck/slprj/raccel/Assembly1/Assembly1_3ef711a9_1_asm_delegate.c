#include "__cf_Assembly1.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void Assembly1_3ef711a9_1_setTargets ( const RuntimeDerivedValuesBundle *
rtdv , CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
Assembly1_3ef711a9_1_resetAsmStateVector ( const void * mech , double * state
) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx [ 0 ]
; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [ 0 ] ;
state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; } void
Assembly1_3ef711a9_1_initializeTrackedAngleState ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData , double * state , void * neDiagMgr0 ) { NeuDiagnosticManager *
neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) mech ; ( void )
rtdv ; ( void ) modeVector ; ( void ) motionData ; ( void ) state ; ( void )
neDiagMgr ; } void Assembly1_3ef711a9_1_computeDiscreteState ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , double * state ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
state ; } void Assembly1_3ef711a9_1_adjustPosition ( const void * mech ,
const double * dofDeltas , double * state ) { ( void ) mech ; state [ 0 ] =
state [ 0 ] + dofDeltas [ 0 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 1 ] ;
state [ 4 ] = state [ 4 ] + dofDeltas [ 2 ] ; } static void
perturbAsmJointPrimitiveState_0_0 ( double mag , double * state ) { state [ 0
] = state [ 0 ] + mag ; } static void perturbAsmJointPrimitiveState_0_0v (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; state [ 1 ]
= state [ 1 ] - 0.875 * mag ; } static void perturbAsmJointPrimitiveState_1_0
( double mag , double * state ) { state [ 2 ] = state [ 2 ] + mag ; } static
void perturbAsmJointPrimitiveState_1_0v ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_2_0 ( double mag , double * state )
{ state [ 4 ] = state [ 4 ] + mag ; } static void
perturbAsmJointPrimitiveState_2_0v ( double mag , double * state ) { state [
4 ] = state [ 4 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } void
Assembly1_3ef711a9_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbAsmJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbAsmJointPrimitiveState_0_0v ( mag , state ) ; break ; case 12 :
perturbAsmJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbAsmJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbAsmJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbAsmJointPrimitiveState_2_0v ( mag , state ) ; break ; } } void
Assembly1_3ef711a9_1_computeDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { } } void Assembly1_3ef711a9_1_projectPartiallyTargetedPos (
const void * mech , size_t stageIdx , size_t primIdx , const double *
origState , int partialType , double * state ) { ( void ) mech ; ( void )
stageIdx ; ( void ) primIdx ; ( void ) origState ; ( void ) partialType ; (
void ) state ; switch ( ( stageIdx * 6 + primIdx ) ) { } } void
Assembly1_3ef711a9_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 58 ] ; ( void ) mech ; ( void
) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 0.9999917818212004 ; xx [ 1 ] = 0.5 ;
xx [ 2 ] = xx [ 1 ] * state [ 0 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] =
xx [ 0 ] * xx [ 3 ] ; xx [ 5 ] = 8.108272296639931e-3 ; xx [ 6 ] = sin ( xx [
2 ] ) ; xx [ 2 ] = xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] = 4.054169466209523e-3 ; xx
[ 8 ] = 0.9999671274198785 ; xx [ 9 ] = xx [ 8 ] * xx [ 6 ] ; xx [ 6 ] = xx [
0 ] * xx [ 2 ] - xx [ 7 ] * xx [ 9 ] ; xx [ 10 ] = xx [ 7 ] * xx [ 3 ] ; xx [
3 ] = - xx [ 10 ] ; xx [ 11 ] = xx [ 0 ] * xx [ 9 ] + xx [ 7 ] * xx [ 2 ] ;
xx [ 0 ] = 2.0 ; xx [ 12 ] = xx [ 6 ] ; xx [ 13 ] = xx [ 3 ] ; xx [ 14 ] = xx
[ 11 ] ; xx [ 2 ] = 8.264039875215727e-3 ; xx [ 7 ] = xx [ 2 ] * xx [ 10 ] ;
xx [ 9 ] = 0.1491569560884112 ; xx [ 15 ] = xx [ 9 ] * xx [ 11 ] + xx [ 2 ] *
xx [ 6 ] ; xx [ 2 ] = xx [ 9 ] * xx [ 10 ] ; xx [ 16 ] = - xx [ 7 ] ; xx [ 17
] = - xx [ 15 ] ; xx [ 18 ] = - xx [ 2 ] ; pm_math_Vector3_cross_ra ( xx + 12
, xx + 16 , xx + 19 ) ; xx [ 10 ] = 0.9999641940394065 ; xx [ 12 ] = xx [ 1 ]
* state [ 2 ] ; xx [ 13 ] = cos ( xx [ 12 ] ) ; xx [ 14 ] = xx [ 10 ] * xx [
13 ] ; xx [ 16 ] = - xx [ 14 ] ; xx [ 17 ] = 8.816340566746522e-3 ; xx [ 18 ]
= sin ( xx [ 12 ] ) ; xx [ 12 ] = xx [ 17 ] * xx [ 18 ] ; xx [ 22 ] =
8.462306962064715e-3 ; xx [ 23 ] = 0.9999611353142737 ; xx [ 24 ] = xx [ 23 ]
* xx [ 18 ] ; xx [ 18 ] = xx [ 10 ] * xx [ 12 ] - xx [ 22 ] * xx [ 24 ] ; xx
[ 25 ] = xx [ 22 ] * xx [ 13 ] ; xx [ 13 ] = - xx [ 25 ] ; xx [ 26 ] = xx [
10 ] * xx [ 24 ] + xx [ 22 ] * xx [ 12 ] ; xx [ 10 ] = - xx [ 26 ] ; xx [ 12
] = 6.706412990178618e-3 ; xx [ 22 ] = xx [ 12 ] * xx [ 25 ] ; xx [ 27 ] = xx
[ 18 ] ; xx [ 28 ] = xx [ 13 ] ; xx [ 29 ] = xx [ 10 ] ; xx [ 24 ] =
0.1428627493367576 ; xx [ 30 ] = xx [ 24 ] * xx [ 26 ] - xx [ 12 ] * xx [ 18
] ; xx [ 31 ] = xx [ 24 ] * xx [ 25 ] ; xx [ 32 ] = - xx [ 22 ] ; xx [ 33 ] =
xx [ 30 ] ; xx [ 34 ] = - xx [ 31 ] ; pm_math_Vector3_cross_ra ( xx + 27 , xx
+ 32 , xx + 35 ) ; xx [ 32 ] = 0.1326554077902182 - ( xx [ 0 ] * ( xx [ 22 ]
* xx [ 14 ] + xx [ 35 ] ) - xx [ 24 ] ) ; xx [ 22 ] = xx [ 0 ] * ( xx [ 36 ]
- xx [ 14 ] * xx [ 30 ] ) ; xx [ 24 ] = 0.02097944648055044 - ( xx [ 12 ] +
xx [ 0 ] * ( xx [ 37 ] + xx [ 31 ] * xx [ 14 ] ) ) ; xx [ 12 ] =
0.999990283781366 ; xx [ 30 ] = xx [ 1 ] * state [ 4 ] ; xx [ 1 ] = cos ( xx
[ 30 ] ) ; xx [ 31 ] = xx [ 12 ] * xx [ 1 ] ; xx [ 33 ] = - xx [ 31 ] ; xx [
34 ] = 4.408213114535667e-3 ; xx [ 35 ] = sin ( xx [ 30 ] ) ; xx [ 30 ] = xx
[ 34 ] * xx [ 35 ] ; xx [ 36 ] = xx [ 34 ] * xx [ 1 ] ; xx [ 1 ] = - ( xx [
12 ] * xx [ 35 ] ) ; xx [ 37 ] = xx [ 30 ] ; xx [ 38 ] = xx [ 36 ] ; xx [ 39
] = xx [ 1 ] ; xx [ 12 ] = 7.500000000000003e-3 ; xx [ 34 ] = xx [ 12 ] * xx
[ 36 ] ; xx [ 40 ] = 0.04719120147551373 * xx [ 35 ] - 3.306159835901751e-5 *
xx [ 35 ] ; xx [ 35 ] = 0.04719166 ; xx [ 41 ] = xx [ 35 ] * xx [ 36 ] ; xx [
42 ] = xx [ 34 ] ; xx [ 43 ] = xx [ 40 ] ; xx [ 44 ] = xx [ 41 ] ;
pm_math_Vector3_cross_ra ( xx + 37 , xx + 42 , xx + 45 ) ; xx [ 37 ] =
0.1261590450577517 - ( xx [ 0 ] * ( xx [ 45 ] - xx [ 34 ] * xx [ 31 ] ) - xx
[ 35 ] ) ; xx [ 34 ] = - ( xx [ 0 ] * ( xx [ 46 ] - xx [ 31 ] * xx [ 40 ] ) )
; xx [ 38 ] = - ( 5.922290061137347e-3 + xx [ 12 ] + xx [ 0 ] * ( xx [ 47 ] -
xx [ 41 ] * xx [ 31 ] ) ) ; xx [ 12 ] = xx [ 5 ] * state [ 1 ] ; xx [ 5 ] =
0.0 ; xx [ 31 ] = xx [ 8 ] * state [ 1 ] ; xx [ 8 ] = 0.14921906 * state [ 1
] ; xx [ 39 ] = xx [ 25 ] * xx [ 31 ] ; xx [ 40 ] = xx [ 12 ] * xx [ 26 ] +
xx [ 31 ] * xx [ 18 ] ; xx [ 26 ] = xx [ 12 ] * xx [ 25 ] ; xx [ 41 ] = - xx
[ 39 ] ; xx [ 42 ] = - xx [ 40 ] ; xx [ 43 ] = xx [ 26 ] ;
pm_math_Vector3_cross_ra ( xx + 27 , xx + 41 , xx + 44 ) ; xx [ 25 ] = xx [
12 ] + xx [ 0 ] * ( xx [ 44 ] - xx [ 14 ] * xx [ 39 ] ) - xx [ 17 ] * state [
3 ] ; xx [ 17 ] = xx [ 0 ] * ( xx [ 45 ] - xx [ 14 ] * xx [ 40 ] ) ; xx [ 27
] = xx [ 31 ] + xx [ 0 ] * ( xx [ 14 ] * xx [ 26 ] + xx [ 46 ] ) + xx [ 23 ]
* state [ 3 ] ; xx [ 39 ] = xx [ 16 ] ; xx [ 40 ] = xx [ 18 ] ; xx [ 41 ] =
xx [ 13 ] ; xx [ 42 ] = xx [ 10 ] ; xx [ 43 ] = xx [ 31 ] * xx [ 22 ] ; xx [
44 ] = xx [ 31 ] * xx [ 32 ] - xx [ 12 ] * xx [ 24 ] + xx [ 8 ] ; xx [ 45 ] =
- ( xx [ 12 ] * xx [ 22 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 39 ,
xx + 43 , xx + 46 ) ; xx [ 14 ] = xx [ 47 ] + 0.142798071 * state [ 3 ] ; xx
[ 39 ] = xx [ 33 ] ; xx [ 40 ] = xx [ 30 ] ; xx [ 41 ] = xx [ 36 ] ; xx [ 42
] = xx [ 1 ] ; xx [ 43 ] = xx [ 25 ] ; xx [ 44 ] = xx [ 17 ] ; xx [ 45 ] = xx
[ 27 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 43 , xx + 49 ) ;
xx [ 52 ] = xx [ 37 ] ; xx [ 53 ] = xx [ 34 ] ; xx [ 54 ] = xx [ 38 ] ;
pm_math_Vector3_cross_ra ( xx + 43 , xx + 52 , xx + 55 ) ; xx [ 43 ] = xx [
55 ] + xx [ 46 ] ; xx [ 44 ] = xx [ 56 ] + xx [ 14 ] ; xx [ 45 ] = xx [ 57 ]
+ xx [ 48 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 43 , xx +
52 ) ; motionData [ 0 ] = xx [ 4 ] ; motionData [ 1 ] = xx [ 6 ] ; motionData
[ 2 ] = xx [ 3 ] ; motionData [ 3 ] = xx [ 11 ] ; motionData [ 4 ] = - ( xx [
0 ] * ( xx [ 19 ] - xx [ 7 ] * xx [ 4 ] ) - xx [ 9 ] ) ; motionData [ 5 ] = -
( xx [ 0 ] * ( xx [ 20 ] - xx [ 4 ] * xx [ 15 ] ) ) ; motionData [ 6 ] =
0.01673596012478427 - xx [ 0 ] * ( xx [ 21 ] - xx [ 2 ] * xx [ 4 ] ) ;
motionData [ 7 ] = xx [ 16 ] ; motionData [ 8 ] = xx [ 18 ] ; motionData [ 9
] = xx [ 13 ] ; motionData [ 10 ] = xx [ 10 ] ; motionData [ 11 ] = xx [ 32 ]
; motionData [ 12 ] = - xx [ 22 ] ; motionData [ 13 ] = xx [ 24 ] ;
motionData [ 14 ] = xx [ 33 ] ; motionData [ 15 ] = xx [ 30 ] ; motionData [
16 ] = xx [ 36 ] ; motionData [ 17 ] = xx [ 1 ] ; motionData [ 18 ] = xx [ 37
] ; motionData [ 19 ] = xx [ 34 ] ; motionData [ 20 ] = xx [ 38 ] ;
motionData [ 21 ] = xx [ 12 ] ; motionData [ 22 ] = xx [ 5 ] ; motionData [
23 ] = xx [ 31 ] ; motionData [ 24 ] = xx [ 5 ] ; motionData [ 25 ] = xx [ 8
] ; motionData [ 26 ] = xx [ 5 ] ; motionData [ 27 ] = xx [ 25 ] ; motionData
[ 28 ] = xx [ 17 ] ; motionData [ 29 ] = xx [ 27 ] ; motionData [ 30 ] = xx [
46 ] ; motionData [ 31 ] = xx [ 14 ] ; motionData [ 32 ] = xx [ 48 ] ;
motionData [ 33 ] = xx [ 49 ] ; motionData [ 34 ] = xx [ 50 ] ; motionData [
35 ] = xx [ 51 ] + state [ 5 ] ; motionData [ 36 ] = xx [ 52 ] ; motionData [
37 ] = xx [ 53 ] + xx [ 35 ] * state [ 5 ] ; motionData [ 38 ] = xx [ 54 ] ;
} size_t Assembly1_3ef711a9_1_computeAssemblyError ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const double
* state , const int * modeVector , const double * motionData , double * error
) { ( void ) mech ; ( void ) rtdv ; ( void ) state ; ( void ) modeVector ; (
void ) motionData ; ( void ) error ; switch ( constraintIdx ) { } return 0 ;
} size_t Assembly1_3ef711a9_1_computeAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { } return 0 ; }
size_t Assembly1_3ef711a9_1_computeFullAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void )
modeVector ; ( void ) motionData ; ( void ) J ; return 0 ; } int
Assembly1_3ef711a9_1_isInKinematicSingularity ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData ) { ( void ) mech ; ( void ) rtdv ; (
void ) modeVector ; ( void ) motionData ; switch ( constraintIdx ) { } return
0 ; } PmfMessageId Assembly1_3ef711a9_1_convertStateVector ( const void *
asmMech , const RuntimeDerivedValuesBundle * rtdv , const void * simMech ,
const double * asmState , const int * asmModeVector , const int *
simModeVector , double * simState , void * neDiagMgr0 ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * )
neDiagMgr0 ; ( void ) asmMech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
simMech ; ( void ) asmModeVector ; ( void ) simModeVector ; ( void )
neDiagMgr ; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ]
; simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ;
simState [ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; return
NULL ; }
