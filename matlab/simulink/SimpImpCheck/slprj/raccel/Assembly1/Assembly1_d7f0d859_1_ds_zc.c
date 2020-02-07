#include "__cf_Assembly1.h"
#include "ne_ds.h"
#include "Assembly1_d7f0d859_1_ds_zc.h"
#include "Assembly1_d7f0d859_1_ds_sys_struct.h"
#include "Assembly1_d7f0d859_1_ds_externals.h"
#include "Assembly1_d7f0d859_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Assembly1_d7f0d859_1_ds_zc ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t4 , NeDsMethodOutput * t5 ) { PmRealVector out ;
real_T intrm_sf_mf_4 ; real_T t0 ; real_T t1 ; real_T X_idx_0 ; int32_T
M_idx_0 ; int32_T M_idx_2 ; real_T X_idx_1 ; M_idx_0 = t4 -> mM . mX [ 0 ] ;
M_idx_2 = t4 -> mM . mX [ 2 ] ; X_idx_0 = t4 -> mX . mX [ 0 ] ; X_idx_1 = t4
-> mX . mX [ 1 ] ; out = t5 -> mZC ; X_idx_0 = fabs ( X_idx_0 ) ; if (
X_idx_0 < 191.67785234899333 ) { intrm_sf_mf_4 = 1.49 ; } else {
intrm_sf_mf_4 = 0.2856 / ( X_idx_0 == 0.0 ? 1.0E-16 : X_idx_0 ) * 1000.0 ; }
if ( ( M_idx_0 == 0 ) && ( M_idx_2 != 0 ) ) { t0 = 191.67785234899333 -
X_idx_0 ; } else { t0 = 0.0 ; } if ( M_idx_0 != 0 ) { t1 = 191.67785234899333
- X_idx_0 ; } else { t1 = 0.0 ; } if ( M_idx_0 == 0 ) { X_idx_0 = -
intrm_sf_mf_4 - X_idx_1 ; } else { X_idx_0 = 0.0 ; } out . mX [ 0 ] = t0 ;
out . mX [ 1 ] = t1 ; out . mX [ 2 ] = X_idx_0 ; out . mX [ 3 ] = X_idx_1 -
intrm_sf_mf_4 ; ( void ) sys ; ( void ) t5 ; return 0 ; }
