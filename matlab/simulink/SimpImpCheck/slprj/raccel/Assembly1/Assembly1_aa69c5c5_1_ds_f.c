#include "__cf_Assembly1.h"
#include "ne_ds.h"
#include "Assembly1_aa69c5c5_1_ds_f.h"
#include "Assembly1_aa69c5c5_1_ds_sys_struct.h"
#include "Assembly1_aa69c5c5_1_ds_externals.h"
#include "Assembly1_aa69c5c5_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Assembly1_aa69c5c5_1_ds_f ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t4 , NeDsMethodOutput * t5 ) { PmRealVector out ;
real_T t0 ; real_T X_idx_0 ; int32_T M_idx_1 ; real_T X_idx_4 ; int32_T
M_idx_0 ; int32_T M_idx_2 ; real_T X_idx_1 ; M_idx_0 = t4 -> mM . mX [ 0 ] ;
M_idx_1 = t4 -> mM . mX [ 1 ] ; M_idx_2 = t4 -> mM . mX [ 2 ] ; X_idx_0 = t4
-> mX . mX [ 0 ] ; X_idx_1 = t4 -> mX . mX [ 1 ] ; X_idx_4 = t4 -> mX . mX [
4 ] ; out = t5 -> mF ; t0 = fabs ( X_idx_0 ) ; if ( M_idx_1 != 0 ) { t0 =
1.49 ; } else { t0 = 0.2856 / ( t0 == 0.0 ? 1.0E-16 : t0 ) * 1000.0 ; } if (
M_idx_0 != 0 ) { t0 = X_idx_4 - t0 ; } else if ( M_idx_2 != 0 ) { t0 =
X_idx_4 - ( - t0 ) ; } else { t0 = X_idx_4 - X_idx_1 ; } out . mX [ 0 ] = -
0.0 ; out . mX [ 1 ] = - 0.0 ; out . mX [ 2 ] = - 0.0 ; out . mX [ 3 ] = - (
( X_idx_0 * X_idx_4 * 0.001 + ( X_idx_4 * X_idx_4 * 0.0609121990884118 +
X_idx_0 * X_idx_0 * 4.3529390854588485E-8 ) ) / 48.0 * 1000.0 ) ; out . mX [
4 ] = t0 ; ( void ) sys ; ( void ) t5 ; return 0 ; }
