#include "__cf_Assembly1.h"
#include "ne_ds.h"
#include "Assembly1_aa69c5c5_1_ds_zc.h"
#include "Assembly1_aa69c5c5_1_ds_obs_all.h"
#include "Assembly1_aa69c5c5_1_ds_obs_act.h"
#include "Assembly1_aa69c5c5_1_ds_log.h"
#include "Assembly1_aa69c5c5_1_ds_dxf.h"
#include "Assembly1_aa69c5c5_1_ds_f.h"
#include "Assembly1_aa69c5c5_1_ds.h"
#include "ssc_ml_fun.h"
#include "Assembly1_aa69c5c5_1_ds_external_struct.h"
#include "Assembly1_aa69c5c5_1_ds_sys_struct.h"
#include "Assembly1_aa69c5c5_1_ds_externals.h"
static int32_T ds_m_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_m (
const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_vmm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dum_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dum ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_a_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_a ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_b_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_b ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_vmf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_slf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_slf0 ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_duf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dtf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dwf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dwf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_tdxf_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dnf_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dnf
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dnf_v_x ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ic ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_icr ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icr_im ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_icr_id ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icr_il ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxicr ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxicr_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddicr ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddicr_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_tduicr_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_icrm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icrm ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dxicrm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dxicrm ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_ddicrm_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddicrm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_mduy_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_mdxy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_tduy_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_tdxy_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_y (
const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxy_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dxy ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_duy_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duy ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dty_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dty ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_mode ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_cache_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_cache_i ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_update_r ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_sfo ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_sfp ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_init_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_init_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_assert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_passert ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_iassert ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_del_t ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_v ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_del_v0 ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_del_tmax ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxdelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxdelt ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dudelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dudelt ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dtdelt_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtdelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_obs_exp ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_obs_il ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dp_l ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dp_j
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dp_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qx ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_qu ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_q1 ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qx_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qu_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_qt_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_q1_p
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_var_tol ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_eq_tol ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_lv ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_slv ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_imin ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_imax ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static NeDsMethodOutput * ds_output_m_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_m ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vmm ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxm ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_ddm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddm ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dum_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_a ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_c_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_slf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_slf0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dwf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dwf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_tduf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tdxf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dnf_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dnf_v_x ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ic ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_icr_im ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_icr_id ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddicr ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddicr_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduicr_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_icrm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxicrm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddicrm_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_ddicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_mdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_y ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duy ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_mode ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_zc ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_cache_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_sfo ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_log ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_assert ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_v0 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_tmax (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_exp ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_act (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dp_l ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dp_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dp_j ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dp_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qx ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qu ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_q1 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qx_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qt_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_q1_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_eq_tol (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lv ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_slv ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_imin (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_imax ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static void release_reference ( NeDynamicSystem * ds ) ;
static void get_reference ( NeDynamicSystem * ds ) ; static NeDynamicSystem *
diagnostics ( NeDynamicSystem * ds ) ; static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out )
; static NeEquationData s_equation_data [ 5 ] = { { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 0U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 2U , 1U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 3U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 3U , 4U , FALSE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 7U , 7U , FALSE ,
1.0 , "1" , } } ; static NeICRData * s_icr_data = NULL ; static
NeVariableData s_variable_data [ 5 ] = { {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.private.w" , 0U , 0 ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Angular velocity" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.torque_ref" , 0U , 0 ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Demanded torque" , } , {
"MotorSubSys_1.DC_Voltage.i" , 0U , 0 , "Assembly1/MotorSubSys 1/DC Voltage"
, 1.0 , "1" , 0.0 , FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Current" ,
} , { "MotorSubSys_1.Ideal_Torque_Sensor.T" , 0U , 0 ,
"Assembly1/MotorSubSys 1/Ideal Torque Sensor" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , 1U , 1U , NE_INIT_MODE_NONE , "T" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.torque_elec" , 0U , 0 ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Electrical torque" , } } ;
static NeVariableData * s_discrete_data = NULL ; static NeObservableData
s_observable_data [ 30 ] = { { "MotorSubSys_1.DC_Voltage.i" ,
"Assembly1/MotorSubSys 1/DC Voltage" , 1U , 1U , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"MotorSubSys_1.DC_Voltage.n.v" , "Assembly1/MotorSubSys 1/DC Voltage" , 1U ,
1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"MotorSubSys_1.DC_Voltage.p.v" , "Assembly1/MotorSubSys 1/DC Voltage" , 1U ,
1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"MotorSubSys_1.DC_Voltage.v" , "Assembly1/MotorSubSys 1/DC Voltage" , 1U , 1U
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"MotorSubSys_1.ERef.V.v" , "Assembly1/MotorSubSys 1/ERef" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"MotorSubSys_1.Ideal_Torque_Sensor.C.w" ,
"Assembly1/MotorSubSys 1/Ideal Torque Sensor" , 1U , 1U , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"MotorSubSys_1.Ideal_Torque_Sensor.R.w" ,
"Assembly1/MotorSubSys 1/Ideal Torque Sensor" , 1U , 1U , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"MotorSubSys_1.Ideal_Torque_Sensor.T" ,
"Assembly1/MotorSubSys 1/Ideal Torque Sensor" , 1U , 1U , "N*m" , 1.0 , "N*m"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
"MotorSubSys_1.Ideal_Torque_Sensor.t" ,
"Assembly1/MotorSubSys 1/Ideal Torque Sensor" , 1U , 1U , "N*m" , 1.0 , "N*m"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"MotorSubSys_1.Ideal_Torque_Sensor.w" ,
"Assembly1/MotorSubSys 1/Ideal Torque Sensor" , 1U , 1U , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Angular velocity" , } , {
"MotorSubSys_1.MRRef_Motor.W.w" , "Assembly1/MotorSubSys 1/MRRef Motor" , 1U
, 1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity"
, } , { "MotorSubSys_1.MRRef_Torque.W.w" ,
"Assembly1/MotorSubSys 1/MRRef Torque" , 1U , 1U , "rad/s" , 1.0 , "1/s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"MotorSubSys_1.SM_Motor.C.w" , "Assembly1/MotorSubSys 1/SM Motor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{ "MotorSubSys_1.SM_Motor.R.w" , "Assembly1/MotorSubSys 1/SM Motor" , 1U , 1U
, "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" ,
} , { "MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.Omega" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "rad/s"
, 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "w" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.R.w" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "rad/s"
, 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.Tr" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "N*m" ,
1.0 , "N*m" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Tr" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.Vm.v" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.Vp.v" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.C.w" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "rad/s"
, 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.faulted" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Faulted flag" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.i" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.power_dissipated" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.t" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "N*m" ,
1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.torque_elec" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "N*m" ,
1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Electrical torque" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.torque_ref" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "N*m" ,
1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Demanded torque" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.v" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.private.w" ,
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U , "rpm" ,
1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE ,
TRUE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Angular velocity" , } , {
"MotorSubSys_1.SM_Motor.V0.v" , "Assembly1/MotorSubSys 1/SM Motor" , 1U , 1U
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"MotorSubSys_1.SM_Motor.V1.v" , "Assembly1/MotorSubSys 1/SM Motor" , 1U , 1U
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } } ; static
NeModeData * s_major_mode_data = NULL ; static NeZCData s_zc_data [ 4 ] = { {
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 0U ,
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive" ,
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U ,
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive" ,
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 2U ,
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive" ,
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 3U ,
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive" ,
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 4 ] = { {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData
s_assert_data [ 7 ] = { {
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 0U ,
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive" ,
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 1U ,
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive" ,
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 2U ,
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive" ,
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 3U ,
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive" ,
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 4U ,
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive" ,
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 5U ,
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive" ,
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
"Assembly1/MotorSubSys 1/SM Motor/Simplified PMSM Drive" , 1U , 6U ,
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive" ,
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } } ; static
NeRange s_assert_range [ 7 ] = { {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData *
s_param_assert_data = NULL ; static NeRange * s_param_assert_range = NULL ;
static NeAssertData * s_initial_assert_data = NULL ; static NeRange *
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 14 ] = { {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "/usr/local/MATLAB/R2019b/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/controlled_servomotor_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeRange *
s_icr_range = NULL ; static NeParameterData * s_logical_parameter_data = NULL
; static NeParameterData * s_integer_parameter_data = NULL ; static
NeParameterData * s_index_parameter_data = NULL ; static NeParameterData *
s_real_parameter_data = NULL ; static NeDsMethodOutput * ds_output_m_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM_P . mNumCol = 5 ;
out -> mM_P . mNumRow = 5 ; out -> mM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ;
return out ; } static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mM . mN = 2 ; out -> mM . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 2 ) ; return out ;
} static NeDsMethodOutput * ds_output_vmm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMM . mN = 2 ; out -> mVMM . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 2
) ; return out ; } static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 5 ; out ->
mDXM_P . mNumRow = 2 ; out -> mDXM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mDXM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 0 ; out -> mDXM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM_P . mNumCol = 0 ; out ->
mDDM_P . mNumRow = 2 ; out -> mDDM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM . mN = 0 ; out -> mDDM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 1 ; out ->
mDUM_P . mNumRow = 2 ; out -> mDUM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDUM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out ->
mDTM_P . mNumRow = 2 ; out -> mDTM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 5 ; out -> mA_P
. mNumRow = 5 ; out -> mA_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 6 ) ; out -> mA_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; return out ;
} static NeDsMethodOutput * ds_output_a ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mA . mN = 7 ; out -> mA . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 7 ) ; return out ;
} static NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mB_P . mNumCol = 1 ; out -> mB_P . mNumRow
= 5 ; out -> mB_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 2 ) ; out -> mB_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; return out ; } static
NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mB . mN = 1 ; out -> mB . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 1 ) ; return out ; } static NeDsMethodOutput
* ds_output_c_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC_P .
mNumCol = 1 ; out -> mC_P . mNumRow = 5 ; out -> mC_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mC_P
. mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_c ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC . mN = 0 ; out -> mC . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mF . mN = 5 ; out -> mF . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 5 ) ; return out ;
} static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMF . mN = 5 ; out -> mVMF . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 5
) ; return out ; } static NeDsMethodOutput * ds_output_slf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF . mN = 5 ; out -> mSLF . mX
= ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T )
, 5 ) ; return out ; } static NeDsMethodOutput * ds_output_slf0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 5 ; out -> mSLF0 .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 5 ) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 5 ; out ->
mDXF_P . mNumRow = 5 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 5 ; out -> mDXF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 5 )
; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 1 ; out ->
mDUF_P . mNumRow = 5 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 0 ; out -> mDUF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 5 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 0 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 0 ; out ->
mDDF_P . mNumRow = 5 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 0 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dwf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF_P . mNumCol = 0 ; out ->
mDWF_P . mNumRow = 5 ; out -> mDWF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDWF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dwf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF . mN = 0 ; out -> mDWF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 1 ; out ->
mTDUF_P . mNumRow = 5 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 5 ; out ->
mTDXF_P . mNumRow = 5 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 9 ; out ->
mDNF_P . mNumRow = 5 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 10 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 1 ; out -> mDNF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 1 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 5 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 5 ) ; return out ; } static NeDsMethodOutput * ds_output_ic (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC . mN = 5 ; out ->
mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 5 ) ; return out ; } static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR . mN = 0 ; out -> mICR . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_icr_im ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IM . mN = 0 ; out ->
mICR_IM . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_id (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 0 ; out
-> mICR_ID . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_il ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IL . mN = 0 ; out -> mICR_IL . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 0 ; out -> mDXICR . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol = 5 ; out ->
mDXICR_P . mNumRow = 0 ; out -> mDXICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mDXICR_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddicr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR . mN = 0 ; out -> mDDICR
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR_P . mNumCol = 0 ; out ->
mDDICR_P . mNumRow = 0 ; out -> mDDICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDICR_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tduicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol = 1 ; out ->
mTDUICR_P . mNumRow = 0 ; out -> mTDUICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mTDUICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_icrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM_P . mNumCol = 5 ; out ->
mICRM_P . mNumRow = 0 ; out -> mICRM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mICRM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM . mN = 0 ; out -> mICRM .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM_P . mNumCol = 5 ; out ->
mDXICRM_P . mNumRow = 0 ; out -> mDXICRM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mDXICRM_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dxicrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM . mN = 0 ; out ->
mDXICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM_P . mNumCol =
0 ; out -> mDDICRM_P . mNumRow = 0 ; out -> mDDICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM . mN = 0 ; out
-> mDDICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDUY_P . mNumCol = 1
; out -> mMDUY_P . mNumRow = 1 ; out -> mMDUY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mMDUY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol = 5
; out -> mMDXY_P . mNumRow = 1 ; out -> mMDXY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out ->
mMDXY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 1
; out -> mTDUY_P . mNumRow = 1 ; out -> mTDUY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mTDUY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_tdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol = 5
; out -> mTDXY_P . mNumRow = 1 ; out -> mTDXY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out ->
mTDXY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 1 ) ; return out ; } static NeDsMethodOutput * ds_output_y (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 1 ; out ->
mY . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 1 ) ; return out ; } static NeDsMethodOutput * ds_output_dxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 5 ; out ->
mDXY_P . mNumRow = 1 ; out -> mDXY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; out -> mDXY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 1 ; out -> mDXY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 1 )
; return out ; } static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 1 ; out ->
mDUY_P . mNumRow = 1 ; out -> mDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 0 ; out -> mDUY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dty_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out ->
mDTY_P . mNumRow = 1 ; out -> mDTY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 3 ; out -> mMODE .
mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) ,
3 ) ; return out ; } static NeDsMethodOutput * ds_output_zc ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 4 ; out -> mZC . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 4 ) ;
return out ; } static NeDsMethodOutput * ds_output_cache_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out ->
mCACHE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 0 ;
out -> mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_R . mN = 0 ; out -> mUPDATE_R . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 0 ; out -> mUPDATE_I . mX
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_sfo ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSFO . mN = 0 ; out -> mSFO . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_sfp ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSFP . mN = 0 ; out -> mSFP . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_init_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 0 ; out ->
mINIT_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 0 ; out
-> mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 30 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 30 ) ; return out ; } static NeDsMethodOutput * ds_output_assert (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 7 ; out
-> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 7 ) ; return out ; } static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mPASSERT . mN = 0 ; out -> mPASSERT . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIASSERT . mN = 0 ; out -> mIASSERT . mX =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 5 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P .
mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T )
, 6 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 1 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 30 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 30 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 30 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 30 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 30 ; out -> mOBS_ALL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 30 ) ;
return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 30 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 30 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_L . mN = 0 ; out
-> mDP_L . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_I . mN = 0 ; out
-> mDP_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_j (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_J . mN = 0 ; out
-> mDP_J . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_R . mN = 0 ; out
-> mDP_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qx (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 0 ; out ->
mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qu ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out -> mQU . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 0 ; out -> mQ1 . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 5 ; out -> mQX_P .
mNumRow = 5 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 6 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 1 ; out -> mQU_P .
mNumRow = 5 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 5 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 5 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 5 ; out -> mVAR_TOL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 5 ) ;
return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 5 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 5 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 5 ; out ->
mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 5 ) ; return out ; } static NeDsMethodOutput * ds_output_slv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 5 ; out ->
mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 5 ) ; return out ; } static NeDsMethodOutput * ds_output_imin (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIMIN . mN = 5 ; out
-> mIMIN . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 5 ) ; return out ; } static NeDsMethodOutput * ds_output_imax (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIMAX . mN = 5 ; out
-> mIMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 5 ) ; return out ; } static void release_reference (
NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem *
) ds ; if ( -- _ds -> mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds ->
mAlloc , _ds ) ; } } static void get_reference ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt
; } static NeDynamicSystem * diagnostics ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds = ( _NeDynamicSystem * ) ds ; ne_ds_get_reference ( &
_ds -> mBase ) ; return & _ds -> mBase ; } static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out )
{ ( void ) ds ; memcpy ( out -> mX , in -> mX . mX , sizeof ( real_T ) * out
-> mN ) ; } NeDynamicSystem * Assembly1_aa69c5c5_1_dae_ds ( PmAllocator *
allocator ) { NeDynamicSystem * ds ; _NeDynamicSystem * _ds ; static
NeDsIoInfo input_info [ 1 ] ; static NeDsIoInfo output_info [ 1 ] ; _ds = (
_NeDynamicSystem * ) allocator -> mCallocFcn ( allocator , sizeof (
_NeDynamicSystem ) , 1 ) ; _ds -> mAlloc = * allocator ; _ds -> mRefCnt = 1 ;
ds = & _ds -> mBase ; ds -> mNumVariables = 5 ; ds ->
mNumDiscreteRealVariables = 0 ; ds -> mNumDifferentialVariables = 2 ; ds ->
mNumEquations = 5 ; ds -> mNumICResiduals = 0 ; ds -> mNumModes = 3 ; ds ->
mNumMajorModes = 0 ; ds -> mNumRealCache = 0 ; ds -> mNumIntCache = 0 ; ds ->
mNumObservables = 30 ; ds -> mNumObservableElements = 30 ; ds -> mNumZcs = 4
; ds -> mNumAsserts = 7 ; ds -> mNumAssertRanges = 7 ; ds -> mNumParamAsserts
= 0 ; ds -> mNumParamAssertRanges = 0 ; ds -> mNumInitialAsserts = 0 ; ds ->
mNumInitialAssertRanges = 0 ; ds -> mNumRanges = 4 ; ds -> mNumEquationRanges
= 14 ; ds -> mNumICRRanges = 0 ; ds -> mNumFundamentalSamples = 0 ; ds ->
mNumDelays = 0 ; ds -> mNumLogicalParameters = 0 ; ds ->
mNumIntegerParameters = 0 ; ds -> mNumIndexParameters = 0 ; ds ->
mNumRealParameters = 0 ; ds -> mNumLogicalDerivedParameters = 0 ; ds ->
mNumIntegerDerivedParameters = 0 ; ds -> mNumIndexDerivedParameters = 0 ; ds
-> mNumRealDerivedParameters = 0 ; ds -> mIsOutputLinear = TRUE ; ds ->
mIsOutputSwitchedLinear = TRUE ; ds -> mNumIo [ NE_INPUT_IO_TYPE ] = 1 ;
input_info [ 0 ] . mIdentifier =
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.Tr" ; input_info [ 0 ] . mM = 1
; input_info [ 0 ] . mN = 1 ; input_info [ 0 ] . mName =
"MotorSubSys_1.SM_Motor.Simplified_PMSM_Drive.Tr" ; input_info [ 0 ] . mUnit
= "N*m" ; ds -> mIo [ NE_INPUT_IO_TYPE ] = input_info ; ds -> mNumIo [
NE_OUTPUT_IO_TYPE ] = 1 ; output_info [ 0 ] . mIdentifier =
"MotorSubSys_1.Ideal_Torque_Sensor.T" ; output_info [ 0 ] . mM = 1 ;
output_info [ 0 ] . mN = 1 ; output_info [ 0 ] . mName =
"MotorSubSys_1.Ideal_Torque_Sensor.T" ; output_info [ 0 ] . mUnit = "N*m" ;
ds -> mIo [ NE_OUTPUT_IO_TYPE ] = output_info ; ds -> mReleaseReference =
release_reference ; ds -> mGetReference = get_reference ; ds ->
mDiagnosticsDsFcn = diagnostics ; ds -> mExpandFcn = expand ; ds -> mMethods
[ NE_DS_METHOD_M_P ] = ds_m_p ; ds -> mMakeOutput [ NE_DS_METHOD_M_P ] =
ds_output_m_p ; ds -> mMethods [ NE_DS_METHOD_M ] = ds_m ; ds -> mMakeOutput
[ NE_DS_METHOD_M ] = ds_output_m ; ds -> mMethods [ NE_DS_METHOD_VMM ] =
ds_vmm ; ds -> mMakeOutput [ NE_DS_METHOD_VMM ] = ds_output_vmm ; ds ->
mMethods [ NE_DS_METHOD_DXM_P ] = ds_dxm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXM_P ] = ds_output_dxm_p ; ds -> mMethods [ NE_DS_METHOD_DXM ]
= ds_dxm ; ds -> mMakeOutput [ NE_DS_METHOD_DXM ] = ds_output_dxm ; ds ->
mMethods [ NE_DS_METHOD_DDM_P ] = ds_ddm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DDM_P ] = ds_output_ddm_p ; ds -> mMethods [ NE_DS_METHOD_DDM ]
= ds_ddm ; ds -> mMakeOutput [ NE_DS_METHOD_DDM ] = ds_output_ddm ; ds ->
mMethods [ NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUM_P ] = ds_output_dum_p ; ds -> mMethods [ NE_DS_METHOD_DUM ]
= ds_dum ; ds -> mMakeOutput [ NE_DS_METHOD_DUM ] = ds_output_dum ; ds ->
mMethods [ NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTM_P ] = ds_output_dtm_p ; ds -> mMethods [ NE_DS_METHOD_DTM ]
= ds_dtm ; ds -> mMakeOutput [ NE_DS_METHOD_DTM ] = ds_output_dtm ; ds ->
mMethods [ NE_DS_METHOD_A_P ] = ds_a_p ; ds -> mMakeOutput [ NE_DS_METHOD_A_P
] = ds_output_a_p ; ds -> mMethods [ NE_DS_METHOD_A ] = ds_a ; ds ->
mMakeOutput [ NE_DS_METHOD_A ] = ds_output_a ; ds -> mMethods [
NE_DS_METHOD_B_P ] = ds_b_p ; ds -> mMakeOutput [ NE_DS_METHOD_B_P ] =
ds_output_b_p ; ds -> mMethods [ NE_DS_METHOD_B ] = ds_b ; ds -> mMakeOutput
[ NE_DS_METHOD_B ] = ds_output_b ; ds -> mMethods [ NE_DS_METHOD_C_P ] =
ds_c_p ; ds -> mMakeOutput [ NE_DS_METHOD_C_P ] = ds_output_c_p ; ds ->
mMethods [ NE_DS_METHOD_C ] = ds_c ; ds -> mMakeOutput [ NE_DS_METHOD_C ] =
ds_output_c ; ds -> mMethods [ NE_DS_METHOD_F ] = Assembly1_aa69c5c5_1_ds_f ;
ds -> mMakeOutput [ NE_DS_METHOD_F ] = ds_output_f ; ds -> mMethods [
NE_DS_METHOD_VMF ] = ds_vmf ; ds -> mMakeOutput [ NE_DS_METHOD_VMF ] =
ds_output_vmf ; ds -> mMethods [ NE_DS_METHOD_SLF ] = ds_slf ; ds ->
mMakeOutput [ NE_DS_METHOD_SLF ] = ds_output_slf ; ds -> mMethods [
NE_DS_METHOD_SLF0 ] = ds_slf0 ; ds -> mMakeOutput [ NE_DS_METHOD_SLF0 ] =
ds_output_slf0 ; ds -> mMethods [ NE_DS_METHOD_DXF_P ] = ds_dxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXF_P ] = ds_output_dxf_p ; ds -> mMethods [
NE_DS_METHOD_DXF ] = Assembly1_aa69c5c5_1_ds_dxf ; ds -> mMakeOutput [
NE_DS_METHOD_DXF ] = ds_output_dxf ; ds -> mMethods [ NE_DS_METHOD_DUF_P ] =
ds_duf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUF_P ] = ds_output_duf_p ; ds ->
mMethods [ NE_DS_METHOD_DUF ] = ds_duf ; ds -> mMakeOutput [ NE_DS_METHOD_DUF
] = ds_output_duf ; ds -> mMethods [ NE_DS_METHOD_DTF_P ] = ds_dtf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTF_P ] = ds_output_dtf_p ; ds -> mMethods [
NE_DS_METHOD_DTF ] = ds_dtf ; ds -> mMakeOutput [ NE_DS_METHOD_DTF ] =
ds_output_dtf ; ds -> mMethods [ NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DDF_P ] = ds_output_ddf_p ; ds -> mMethods [
NE_DS_METHOD_DDF ] = ds_ddf ; ds -> mMakeOutput [ NE_DS_METHOD_DDF ] =
ds_output_ddf ; ds -> mMethods [ NE_DS_METHOD_DWF_P ] = ds_dwf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DWF_P ] = ds_output_dwf_p ; ds -> mMethods [
NE_DS_METHOD_DWF ] = ds_dwf ; ds -> mMakeOutput [ NE_DS_METHOD_DWF ] =
ds_output_dwf ; ds -> mMethods [ NE_DS_METHOD_TDUF_P ] = ds_tduf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDUF_P ] = ds_output_tduf_p ; ds -> mMethods [
NE_DS_METHOD_TDXF_P ] = ds_tdxf_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDXF_P ]
= ds_output_tdxf_p ; ds -> mMethods [ NE_DS_METHOD_DNF_P ] = ds_dnf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF_P ] = ds_output_dnf_p ; ds -> mMethods [
NE_DS_METHOD_DNF ] = ds_dnf ; ds -> mMakeOutput [ NE_DS_METHOD_DNF ] =
ds_output_dnf ; ds -> mMethods [ NE_DS_METHOD_DNF_V_X ] = ds_dnf_v_x ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [
NE_DS_METHOD_IC ] = ds_ic ; ds -> mMakeOutput [ NE_DS_METHOD_IC ] =
ds_output_ic ; ds -> mMethods [ NE_DS_METHOD_ICR ] = ds_icr ; ds ->
mMakeOutput [ NE_DS_METHOD_ICR ] = ds_output_icr ; ds -> mMethods [
NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_IM ]
= ds_output_icr_im ; ds -> mMethods [ NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_ID ] = ds_output_icr_id ; ds -> mMethods [
NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_IL ]
= ds_output_icr_il ; ds -> mMethods [ NE_DS_METHOD_DXICR ] = ds_dxicr ; ds ->
mMakeOutput [ NE_DS_METHOD_DXICR ] = ds_output_dxicr ; ds -> mMethods [
NE_DS_METHOD_DXICR_P ] = ds_dxicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICR_P ] = ds_output_dxicr_p ; ds -> mMethods [
NE_DS_METHOD_DDICR ] = ds_ddicr ; ds -> mMakeOutput [ NE_DS_METHOD_DDICR ] =
ds_output_ddicr ; ds -> mMethods [ NE_DS_METHOD_DDICR_P ] = ds_ddicr_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDICR_P ] = ds_output_ddicr_p ; ds -> mMethods
[ NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_ICRM_P ] = ds_icrm_p ; ds -> mMakeOutput [ NE_DS_METHOD_ICRM_P ]
= ds_output_icrm_p ; ds -> mMethods [ NE_DS_METHOD_ICRM ] = ds_icrm ; ds ->
mMakeOutput [ NE_DS_METHOD_ICRM ] = ds_output_icrm ; ds -> mMethods [
NE_DS_METHOD_DXICRM_P ] = ds_dxicrm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICRM_P ] = ds_output_dxicrm_p ; ds -> mMethods [
NE_DS_METHOD_DXICRM ] = ds_dxicrm ; ds -> mMakeOutput [ NE_DS_METHOD_DXICRM ]
= ds_output_dxicrm ; ds -> mMethods [ NE_DS_METHOD_DDICRM_P ] = ds_ddicrm_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DDICRM_P ] = ds_output_ddicrm_p ; ds ->
mMethods [ NE_DS_METHOD_DDICRM ] = ds_ddicrm ; ds -> mMakeOutput [
NE_DS_METHOD_DDICRM ] = ds_output_ddicrm ; ds -> mMethods [
NE_DS_METHOD_MDUY_P ] = ds_mduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_MDUY_P ]
= ds_output_mduy_p ; ds -> mMethods [ NE_DS_METHOD_MDXY_P ] = ds_mdxy_p ; ds
-> mMakeOutput [ NE_DS_METHOD_MDXY_P ] = ds_output_mdxy_p ; ds -> mMethods [
NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUY_P ]
= ds_output_tduy_p ; ds -> mMethods [ NE_DS_METHOD_TDXY_P ] = ds_tdxy_p ; ds
-> mMakeOutput [ NE_DS_METHOD_TDXY_P ] = ds_output_tdxy_p ; ds -> mMethods [
NE_DS_METHOD_Y ] = ds_y ; ds -> mMakeOutput [ NE_DS_METHOD_Y ] = ds_output_y
; ds -> mMethods [ NE_DS_METHOD_DXY_P ] = ds_dxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXY_P ] = ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ]
= ds_dxy ; ds -> mMakeOutput [ NE_DS_METHOD_DXY ] = ds_output_dxy ; ds ->
mMethods [ NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUY_P ] = ds_output_duy_p ; ds -> mMethods [ NE_DS_METHOD_DUY ]
= ds_duy ; ds -> mMakeOutput [ NE_DS_METHOD_DUY ] = ds_output_duy ; ds ->
mMethods [ NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTY_P ] = ds_output_dty_p ; ds -> mMethods [ NE_DS_METHOD_DTY ]
= ds_dty ; ds -> mMakeOutput [ NE_DS_METHOD_DTY ] = ds_output_dty ; ds ->
mMethods [ NE_DS_METHOD_MODE ] = ds_mode ; ds -> mMakeOutput [
NE_DS_METHOD_MODE ] = ds_output_mode ; ds -> mMethods [ NE_DS_METHOD_ZC ] =
Assembly1_aa69c5c5_1_ds_zc ; ds -> mMakeOutput [ NE_DS_METHOD_ZC ] =
ds_output_zc ; ds -> mMethods [ NE_DS_METHOD_CACHE_R ] = ds_cache_r ; ds ->
mMakeOutput [ NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ; ds -> mMethods [
NE_DS_METHOD_CACHE_I ] = ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = ds_update_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE_I ] = ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = Assembly1_aa69c5c5_1_ds_log ; ds -> mMakeOutput [
NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [ NE_DS_METHOD_ASSERT ] =
ds_assert ; ds -> mMakeOutput [ NE_DS_METHOD_ASSERT ] = ds_output_assert ; ds
-> mMethods [ NE_DS_METHOD_PASSERT ] = ds_passert ; ds -> mMakeOutput [
NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds -> mMethods [
NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] = ds_dxdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds -> mMethods [
NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT ]
= ds_output_dxdelt ; ds -> mMethods [ NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds ->
mMethods [ NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT ] = ds_output_dudelt ; ds -> mMethods [
NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds -> mMethods [
NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DTDELT ]
= ds_output_dtdelt ; ds -> mMethods [ NE_DS_METHOD_OBS_EXP ] = ds_obs_exp ;
ds -> mMakeOutput [ NE_DS_METHOD_OBS_EXP ] = ds_output_obs_exp ; ds ->
mMethods [ NE_DS_METHOD_OBS_ACT ] = Assembly1_aa69c5c5_1_ds_obs_act ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ACT ] = ds_output_obs_act ; ds -> mMethods [
NE_DS_METHOD_OBS_ALL ] = Assembly1_aa69c5c5_1_ds_obs_all ; ds -> mMakeOutput
[ NE_DS_METHOD_OBS_ALL ] = ds_output_obs_all ; ds -> mMethods [
NE_DS_METHOD_OBS_IL ] = ds_obs_il ; ds -> mMakeOutput [ NE_DS_METHOD_OBS_IL ]
= ds_output_obs_il ; ds -> mMethods [ NE_DS_METHOD_DP_L ] = ds_dp_l ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_L ] = ds_output_dp_l ; ds -> mMethods [
NE_DS_METHOD_DP_I ] = ds_dp_i ; ds -> mMakeOutput [ NE_DS_METHOD_DP_I ] =
ds_output_dp_i ; ds -> mMethods [ NE_DS_METHOD_DP_J ] = ds_dp_j ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_J ] = ds_output_dp_j ; ds -> mMethods [
NE_DS_METHOD_DP_R ] = ds_dp_r ; ds -> mMakeOutput [ NE_DS_METHOD_DP_R ] =
ds_output_dp_r ; ds -> mMethods [ NE_DS_METHOD_QX ] = ds_qx ; ds ->
mMakeOutput [ NE_DS_METHOD_QX ] = ds_output_qx ; ds -> mMethods [
NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput [ NE_DS_METHOD_QU ] =
ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] = ds_qt ; ds -> mMakeOutput
[ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods [ NE_DS_METHOD_Q1 ] =
ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] = ds_output_q1 ; ds -> mMethods
[ NE_DS_METHOD_QX_P ] = ds_qx_p ; ds -> mMakeOutput [ NE_DS_METHOD_QX_P ] =
ds_output_qx_p ; ds -> mMethods [ NE_DS_METHOD_QU_P ] = ds_qu_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QU_P ] = ds_output_qu_p ; ds -> mMethods [
NE_DS_METHOD_QT_P ] = ds_qt_p ; ds -> mMakeOutput [ NE_DS_METHOD_QT_P ] =
ds_output_qt_p ; ds -> mMethods [ NE_DS_METHOD_Q1_P ] = ds_q1_p ; ds ->
mMakeOutput [ NE_DS_METHOD_Q1_P ] = ds_output_q1_p ; ds -> mMethods [
NE_DS_METHOD_VAR_TOL ] = ds_var_tol ; ds -> mMakeOutput [
NE_DS_METHOD_VAR_TOL ] = ds_output_var_tol ; ds -> mMethods [
NE_DS_METHOD_EQ_TOL ] = ds_eq_tol ; ds -> mMakeOutput [ NE_DS_METHOD_EQ_TOL ]
= ds_output_eq_tol ; ds -> mMethods [ NE_DS_METHOD_LV ] = ds_lv ; ds ->
mMakeOutput [ NE_DS_METHOD_LV ] = ds_output_lv ; ds -> mMethods [
NE_DS_METHOD_SLV ] = ds_slv ; ds -> mMakeOutput [ NE_DS_METHOD_SLV ] =
ds_output_slv ; ds -> mMethods [ NE_DS_METHOD_IMIN ] = ds_imin ; ds ->
mMakeOutput [ NE_DS_METHOD_IMIN ] = ds_output_imin ; ds -> mMethods [
NE_DS_METHOD_IMAX ] = ds_imax ; ds -> mMakeOutput [ NE_DS_METHOD_IMAX ] =
ds_output_imax ; ds -> mEquationData = s_equation_data ; ds -> mICRData =
s_icr_data ; ds -> mVariableData = s_variable_data ; ds -> mDiscreteData =
s_discrete_data ; ds -> mObservableData = s_observable_data ; ds ->
mMajorModeData = s_major_mode_data ; ds -> mZCData = s_zc_data ; ds ->
mRanges = s_range ; ds -> mAssertData = s_assert_data ; ds -> mAssertRanges =
s_assert_range ; ds -> mParamAssertData = s_param_assert_data ; ds ->
mParamAssertRanges = s_param_assert_range ; ds -> mInitialAssertData =
s_initial_assert_data ; ds -> mInitialAssertRanges = s_initial_assert_range ;
ds -> mEquationRanges = s_equation_range ; ds -> mICRRanges = s_icr_range ;
ds -> mLogicalParameters = s_logical_parameter_data ; ds ->
mIntegerParameters = s_integer_parameter_data ; ds -> mIndexParameters =
s_index_parameter_data ; ds -> mRealParameters = s_real_parameter_data ;
return ( NeDynamicSystem * ) _ds ; } static int32_T ds_assert ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmIntVector out ; real_T X_idx_0 ; X_idx_0 = t1 -> mX . mX [ 0 ] ; out
= t2 -> mASSERT ; X_idx_0 = fabs ( X_idx_0 ) ; out . mX [ 0 ] = 1 ; out . mX
[ 1 ] = 1 ; out . mX [ 2 ] = 1 ; out . mX [ 3 ] = 1 ; out . mX [ 4 ] = 1 ;
out . mX [ 5 ] = 1 ; out . mX [ 6 ] = ( int32_T ) ( ( X_idx_0 <
191.67785234899333 ) || ( X_idx_0 != 0.0 ) ) ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_passert ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_iassert ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_v ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_del_v0 ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_del_tmax ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_t ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dxdelt ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxdelt_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXDELT_P ; out .
mNumCol = 5UL ; out . mNumRow = 0UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] =
0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out .
mJc [ 5 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dudelt ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dudelt_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDUDELT_P ; out . mNumCol = 1UL ; out . mNumRow =
0UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_dtdelt ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtdelt_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDTDELT_P ; out .
mNumCol = 1UL ; out . mNumRow = 0UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] =
0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_cache_r (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_init_r ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_update_r ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_cache_i ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_init_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_update_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_sfp ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_sfo ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXF_P ; out .
mNumCol = 5UL ; out . mNumRow = 5UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] =
2 ; out . mJc [ 2 ] = 3 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 3 ; out .
mJc [ 5 ] = 5 ; out . mIr [ 0 ] = 3 ; out . mIr [ 1 ] = 4 ; out . mIr [ 2 ] =
4 ; out . mIr [ 3 ] = 3 ; out . mIr [ 4 ] = 4 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_duf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_duf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDUF_P ; out .
mNumCol = 1UL ; out . mNumRow = 5UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] =
0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtf ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dtf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDTF_P ; out . mNumCol = 1UL ; out . mNumRow = 5UL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_ddf ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_ddf_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDDF_P ; out . mNumCol = 0UL ; out . mNumRow = 5UL
; out . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_a ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1
, NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mA ;
out . mX [ 0 ] = - 1.0E-5 ; out . mX [ 1 ] = 1.0 ; out . mX [ 2 ] = - 1.0 ;
out . mX [ 3 ] = - 1.0 ; out . mX [ 4 ] = - 1.0 ; out . mX [ 5 ] = 1.0 ; out
. mX [ 6 ] = 0.0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_a_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mA_P ; out . mNumCol = 5UL ; out . mNumRow = 5UL ; out . mJc [ 0 ] = 0 ; out
. mJc [ 1 ] = 2 ; out . mJc [ 2 ] = 3 ; out . mJc [ 3 ] = 4 ; out . mJc [ 4 ]
= 5 ; out . mJc [ 5 ] = 7 ; out . mIr [ 0 ] = 1 ; out . mIr [ 1 ] = 2 ; out .
mIr [ 2 ] = 0 ; out . mIr [ 3 ] = 3 ; out . mIr [ 4 ] = 1 ; out . mIr [ 5 ] =
1 ; out . mIr [ 6 ] = 4 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_b ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1
, NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mB ;
out . mX [ 0 ] = 1.0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_b_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2
-> mB_P ; out . mNumCol = 1UL ; out . mNumRow = 5UL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 1 ; out . mIr [ 0 ] = 0 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_c ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_c_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mC_P ; out . mNumCol
= 1UL ; out . mNumRow = 5UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_tduf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mTDUF_P ; out .
mNumCol = 1UL ; out . mNumRow = 5UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] =
1 ; out . mIr [ 0 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_tdxf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out =
t2 -> mTDXF_P ; out . mNumCol = 5UL ; out . mNumRow = 5UL ; out . mJc [ 0 ] =
0 ; out . mJc [ 1 ] = 4 ; out . mJc [ 2 ] = 6 ; out . mJc [ 3 ] = 7 ; out .
mJc [ 4 ] = 8 ; out . mJc [ 5 ] = 11 ; out . mIr [ 0 ] = 1 ; out . mIr [ 1 ]
= 2 ; out . mIr [ 2 ] = 3 ; out . mIr [ 3 ] = 4 ; out . mIr [ 4 ] = 0 ; out .
mIr [ 5 ] = 4 ; out . mIr [ 6 ] = 3 ; out . mIr [ 7 ] = 1 ; out . mIr [ 8 ] =
1 ; out . mIr [ 9 ] = 3 ; out . mIr [ 10 ] = 4 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_dwf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dwf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDWF_P ; out .
mNumCol = 0UL ; out . mNumRow = 5UL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_vmf ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; ( void ) t1 ; out = t2 -> mVMF ; out . mX [ 0 ] = false ; out . mX [ 1
] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = true ; out . mX [ 4 ] =
true ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_slf (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 -> mSLF ;
out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ;
out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_dnf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mDNF ; out . mX [ 0 ] = - 20.833333333333332 ; ( void
) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dnf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDNF_P ; out .
mNumCol = 9UL ; out . mNumRow = 5UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] =
1 ; out . mJc [ 2 ] = 1 ; out . mJc [ 3 ] = 1 ; out . mJc [ 4 ] = 1 ; out .
mJc [ 5 ] = 1 ; out . mJc [ 6 ] = 1 ; out . mJc [ 7 ] = 1 ; out . mJc [ 8 ] =
1 ; out . mJc [ 9 ] = 1 ; out . mIr [ 0 ] = 3 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_dnf_v_x ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; (
void ) t1 ; out = t2 -> mDNF_V_X ; out . mX [ 0 ] = true ; out . mX [ 1 ] =
true ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ] =
true ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_slf0 (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 -> mSLF0
; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ;
out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_ic ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mIC ; out . mX [ 0 ] = 0.0 ; out . mX [ 1 ] = 0.0 ;
out . mX [ 2 ] = 0.0 ; out . mX [ 3 ] = 0.0 ; out . mX [ 4 ] = 0.0 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_icr ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_icr_im ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_icr_id ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_icr_il ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxicr ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dxicr_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDXICR_P ; out . mNumCol = 5UL ; out . mNumRow =
0UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out .
mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_ddicr ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1
; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_ddicr_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDDICR_P ; out .
mNumCol = 0UL ; out . mNumRow = 0UL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_tduicr_p ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mTDUICR_P ; out . mNumCol =
1UL ; out . mNumRow = 0UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_icrm ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_icrm_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mICRM_P ; out . mNumCol = 5UL ; out . mNumRow = 0UL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [
4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_dxicrm ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxicrm_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXICRM_P ; out .
mNumCol = 5UL ; out . mNumRow = 0UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] =
0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out .
mJc [ 5 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddicrm ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_ddicrm_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDDICRM_P ; out . mNumCol = 0UL ; out . mNumRow =
0UL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_imin ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 ->
mIMIN ; out . mX [ 0 ] = - pmf_get_inf ( ) ; out . mX [ 1 ] = - pmf_get_inf (
) ; out . mX [ 2 ] = - pmf_get_inf ( ) ; out . mX [ 3 ] = - pmf_get_inf ( ) ;
out . mX [ 4 ] = - pmf_get_inf ( ) ; ( void ) sys ; ( void ) t2 ; return 0 ;
} static int32_T ds_imax ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mIMAX ; out . mX [ 0 ] = pmf_get_inf ( ) ; out . mX [
1 ] = pmf_get_inf ( ) ; out . mX [ 2 ] = pmf_get_inf ( ) ; out . mX [ 3 ] =
pmf_get_inf ( ) ; out . mX [ 4 ] = pmf_get_inf ( ) ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_m ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mM ; out . mX [ 0 ] = 0.00051 ; out . mX [ 1 ] =
0.00799 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_m_p (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mM_P ; out . mNumCol = 5UL ; out . mNumRow = 5UL ; out . mJc [ 0 ] = 0 ; out
. mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 2 ; out . mJc [ 4 ]
= 2 ; out . mJc [ 5 ] = 2 ; out . mIr [ 0 ] = 1 ; out . mIr [ 1 ] = 0 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxm ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxm_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDXM_P ; out . mNumCol = 5UL ; out . mNumRow = 2UL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [
4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_ddm ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_ddm_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDDM_P ; out .
mNumCol = 0UL ; out . mNumRow = 2UL ; out . mJc [ 0 ] = 0 ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_dum ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dum_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDUM_P ; out .
mNumCol = 1UL ; out . mNumRow = 2UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] =
0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtm ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dtm_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDTM_P ; out . mNumCol = 1UL ; out . mNumRow = 2UL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_vmm ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 ->
mVMM ; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_mode ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmIntVector out
; real_T intrm_sf_mf_4 ; real_T X_idx_0 ; real_T X_idx_1 ; X_idx_0 = t1 -> mX
. mX [ 0 ] ; X_idx_1 = t1 -> mX . mX [ 1 ] ; out = t2 -> mMODE ; X_idx_0 =
fabs ( X_idx_0 ) ; if ( X_idx_0 < 191.67785234899333 ) { intrm_sf_mf_4 = 1.49
; } else { intrm_sf_mf_4 = 0.2856 / ( X_idx_0 == 0.0 ? 1.0E-16 : X_idx_0 ) *
1000.0 ; } out . mX [ 0 ] = ( int32_T ) ( X_idx_1 > intrm_sf_mf_4 ) ; out .
mX [ 1 ] = ( int32_T ) ( X_idx_0 < 191.67785234899333 ) ; out . mX [ 2 ] = (
int32_T ) ( X_idx_1 < - intrm_sf_mf_4 ) ; ( void ) sys ; ( void ) t2 ; return
0 ; } static int32_T ds_obs_exp ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mOBS_EXP ; out . mX [ 0 ] = 0.0 ; out . mX [ 1 ] =
0.0 ; out . mX [ 2 ] = 0.0 ; out . mX [ 3 ] = 0.0 ; out . mX [ 4 ] = 0.0 ;
out . mX [ 5 ] = 0.0 ; out . mX [ 6 ] = 0.0 ; out . mX [ 7 ] = 0.0 ; out . mX
[ 8 ] = 0.0 ; out . mX [ 9 ] = 0.0 ; out . mX [ 10 ] = 0.0 ; out . mX [ 11 ]
= 0.0 ; out . mX [ 12 ] = 0.0 ; out . mX [ 13 ] = 0.0 ; out . mX [ 14 ] = 0.0
; out . mX [ 15 ] = 0.0 ; out . mX [ 16 ] = 0.0 ; out . mX [ 17 ] = 0.0 ; out
. mX [ 18 ] = 0.0 ; out . mX [ 19 ] = 0.0 ; out . mX [ 20 ] = 0.0 ; out . mX
[ 21 ] = 0.0 ; out . mX [ 22 ] = 0.0 ; out . mX [ 23 ] = 0.0 ; out . mX [ 24
] = 0.0 ; out . mX [ 25 ] = 0.0 ; out . mX [ 26 ] = 0.0 ; out . mX [ 27 ] =
0.0 ; out . mX [ 28 ] = 0.0 ; out . mX [ 29 ] = 0.0 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_obs_il ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out
; ( void ) t1 ; out = t2 -> mOBS_IL ; out . mX [ 0 ] = true ; out . mX [ 1 ]
= true ; out . mX [ 2 ] = true ; out . mX [ 3 ] = true ; out . mX [ 4 ] =
true ; out . mX [ 5 ] = true ; out . mX [ 6 ] = true ; out . mX [ 7 ] = true
; out . mX [ 8 ] = true ; out . mX [ 9 ] = true ; out . mX [ 10 ] = true ;
out . mX [ 11 ] = true ; out . mX [ 12 ] = true ; out . mX [ 13 ] = true ;
out . mX [ 14 ] = true ; out . mX [ 15 ] = true ; out . mX [ 16 ] = false ;
out . mX [ 17 ] = true ; out . mX [ 18 ] = true ; out . mX [ 19 ] = true ;
out . mX [ 20 ] = true ; out . mX [ 21 ] = true ; out . mX [ 22 ] = false ;
out . mX [ 23 ] = true ; out . mX [ 24 ] = true ; out . mX [ 25 ] = true ;
out . mX [ 26 ] = true ; out . mX [ 27 ] = true ; out . mX [ 28 ] = true ;
out . mX [ 29 ] = true ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_dp_l ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_dp_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_j ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dp_r ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_qx ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qu ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qt ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_q1 ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_qx_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mQX_P ; out . mNumCol = 5UL ; out . mNumRow = 5UL ;
out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [
3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_qu_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mQU_P ; out . mNumCol = 1UL ; out . mNumRow =
5UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_qt_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mQT_P ; out . mNumCol = 1UL ; out . mNumRow = 5UL ;
out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_q1_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mQ1_P ; out . mNumCol = 1UL ; out . mNumRow = 5UL ;
out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_var_tol ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mVAR_TOL ; out . mX [ 0 ] = 1.0E-9 ; out . mX [ 1 ] =
1.0E-9 ; out . mX [ 2 ] = 1.0E-9 ; out . mX [ 3 ] = 1.0E-9 ; out . mX [ 4 ] =
1.0E-9 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_eq_tol (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 ->
mEQ_TOL ; out . mX [ 0 ] = 1.0E-9 ; out . mX [ 1 ] = 1.0E-9 ; out . mX [ 2 ]
= 1.0E-9 ; out . mX [ 3 ] = 1.0E-9 ; out . mX [ 4 ] = 1.0E-9 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_lv ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; ( void ) t1 ; out = t2 -> mLV ; out . mX [ 0 ] = false ; out . mX [ 1 ]
= false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = true ; out . mX [ 4 ] =
false ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_slv (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 -> mSLV ;
out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2 ] = false ;
out . mX [ 3 ] = true ; out . mX [ 4 ] = false ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_y ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ;
real_T X_idx_3 ; X_idx_3 = t1 -> mX . mX [ 3 ] ; out = t2 -> mY ; out . mX [
0 ] = X_idx_3 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxy ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mDXY ;
out . mX [ 0 ] = 1.0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_dxy_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2
-> mDXY_P ; out . mNumCol = 5UL ; out . mNumRow = 1UL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [
4 ] = 1 ; out . mJc [ 5 ] = 1 ; out . mIr [ 0 ] = 0 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_duy ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_duy_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDUY_P ; out .
mNumCol = 1UL ; out . mNumRow = 1UL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] =
0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_mduy_p (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mMDUY_P ; out . mNumCol = 1UL ; out . mNumRow = 1UL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_mdxy_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out =
t2 -> mMDXY_P ; out . mNumCol = 5UL ; out . mNumRow = 1UL ; out . mJc [ 0 ] =
0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out .
mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ;
} static int32_T ds_tduy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mTDUY_P ; out . mNumCol = 1UL ; out . mNumRow = 1UL
; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_tdxy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mTDXY_P ; out . mNumCol = 5UL ; out . mNumRow = 1UL
; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc
[ 3 ] = 0 ; out . mJc [ 4 ] = 1 ; out . mJc [ 5 ] = 1 ; out . mIr [ 0 ] = 0 ;
( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dty ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dty_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDTY_P ; out . mNumCol = 1UL ; out . mNumRow = 1UL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
