#include "__cf_Assembly1.h"
#include "ne_ds.h"
#include "Assembly1_d7f0d859_1_ds_dxf.h"
#include "Assembly1_d7f0d859_1_ds_sys_struct.h"
#include "Assembly1_d7f0d859_1_ds_externals.h"
#include "Assembly1_d7f0d859_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Assembly1_d7f0d859_1_ds_dxf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t15 , NeDsMethodOutput * t16 ) { PmRealVector out ;
real_T t0 ; real_T t1 ; real_T X_idx_0 ; real_T X_idx_5 ; int32_T M_idx_1 ;
int32_T M_idx_0 ; int32_T M_idx_2 ; M_idx_0 = t15 -> mM . mX [ 0 ] ; M_idx_1
= t15 -> mM . mX [ 1 ] ; M_idx_2 = t15 -> mM . mX [ 2 ] ; X_idx_0 = t15 -> mX
. mX [ 0 ] ; X_idx_5 = t15 -> mX . mX [ 5 ] ; out = t16 -> mDXF ; t0 = fabs (
X_idx_0 ) ; if ( X_idx_0 > 0.0 ) { t1 = 1.0 ; } else { t1 = X_idx_0 < 0.0 ? -
1.0 : 0.0 ; } if ( M_idx_1 != 0 ) { t0 = 0.0 ; } else { t0 *= t0 ; t0 = -
0.2856 / ( t0 == 0.0 ? 1.0E-16 : t0 ) * t1 * 1000.0 ; } if ( M_idx_0 != 0 ) {
t1 = - t0 ; } else { t1 = M_idx_2 != 0 ? t0 : 0.0 ; } if ( M_idx_0 != 0 ) {
t0 = 0.0 ; } else { t0 = M_idx_2 != 0 ? 0.0 : - 1.0 ; } out . mX [ 0 ] = - (
0.020833333333333332 * ( X_idx_5 * 0.001 + X_idx_0 * 8.705878170917697E-8 ) *
1000.0 ) ; out . mX [ 1 ] = t1 ; out . mX [ 2 ] = t0 ; out . mX [ 3 ] = - (
0.020833333333333332 * ( X_idx_0 * 0.001 + X_idx_5 * 0.1218243981768236 ) *
1000.0 ) ; out . mX [ 4 ] = 1.0 ; ( void ) sys ; ( void ) t16 ; return 0 ; }
