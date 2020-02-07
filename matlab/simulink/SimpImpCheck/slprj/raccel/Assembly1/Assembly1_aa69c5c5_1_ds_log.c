#include "__cf_Assembly1.h"
#include "ne_ds.h"
#include "Assembly1_aa69c5c5_1_ds_log.h"
#include "Assembly1_aa69c5c5_1_ds_sys_struct.h"
#include "Assembly1_aa69c5c5_1_ds_externals.h"
#include "Assembly1_aa69c5c5_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Assembly1_aa69c5c5_1_ds_log ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t2 , NeDsMethodOutput * t3 ) { PmRealVector out ;
real_T U_idx_0 ; real_T X_idx_4 ; real_T X_idx_0 ; real_T X_idx_2 ; real_T
X_idx_3 ; real_T X_idx_1 ; U_idx_0 = t2 -> mU . mX [ 0 ] ; X_idx_0 = t2 -> mX
. mX [ 0 ] ; X_idx_1 = t2 -> mX . mX [ 1 ] ; X_idx_2 = t2 -> mX . mX [ 2 ] ;
X_idx_3 = t2 -> mX . mX [ 3 ] ; X_idx_4 = t2 -> mX . mX [ 4 ] ; out = t3 ->
mLOG ; out . mX [ 0 ] = X_idx_2 ; out . mX [ 1 ] = 0.0 ; out . mX [ 2 ] =
48.0 ; out . mX [ 3 ] = 48.0 ; out . mX [ 4 ] = 0.0 ; out . mX [ 5 ] = 0.0 ;
out . mX [ 6 ] = 0.0 ; out . mX [ 7 ] = X_idx_3 ; out . mX [ 8 ] = X_idx_3 ;
out . mX [ 9 ] = 0.0 ; out . mX [ 10 ] = 0.0 ; out . mX [ 11 ] = 0.0 ; out .
mX [ 12 ] = 0.0 ; out . mX [ 13 ] = 0.0 ; out . mX [ 14 ] = 0.0 ; out . mX [
15 ] = X_idx_0 ; out . mX [ 16 ] = 0.0 ; out . mX [ 17 ] = U_idx_0 ; out . mX
[ 18 ] = 0.0 ; out . mX [ 19 ] = 48.0 ; out . mX [ 20 ] = 0.0 ; out . mX [ 21
] = - X_idx_2 ; out . mX [ 22 ] = - ( X_idx_4 * X_idx_4 * 0.0609121990884118
+ X_idx_0 * X_idx_0 * 4.3529390854588485E-8 ) / - 1.0 * 1000.0 ; out . mX [
23 ] = X_idx_0 * 9.5492965855137211 ; out . mX [ 24 ] = - X_idx_3 ; out . mX
[ 25 ] = X_idx_4 ; out . mX [ 26 ] = X_idx_1 ; out . mX [ 27 ] = 48.0 ; out .
mX [ 28 ] = 48.0 ; out . mX [ 29 ] = 0.0 ; ( void ) sys ; ( void ) t3 ;
return 0 ; }
