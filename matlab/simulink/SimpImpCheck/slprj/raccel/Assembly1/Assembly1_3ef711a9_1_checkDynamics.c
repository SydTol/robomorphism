#include "__cf_Assembly1.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "Assembly1_3ef711a9_1_geometries.h"
PmfMessageId Assembly1_3ef711a9_1_checkDynamics ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const double *
input , const double * inputDot , const double * inputDdot , const double *
discreteState , double * result , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void )
input ; ( void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; (
void ) neDiagMgr ; result [ 0 ] = 0.0 ; return NULL ; }
