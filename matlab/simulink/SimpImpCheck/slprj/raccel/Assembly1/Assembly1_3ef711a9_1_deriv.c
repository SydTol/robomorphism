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
PmfMessageId Assembly1_3ef711a9_1_deriv ( const RuntimeDerivedValuesBundle *
rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * deriv , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
int ii [ 1 ] ; double xx [ 141 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
eqnEnableFlags ; ( void ) modeVector ; ( void ) inputDot ; ( void ) inputDdot
; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] =
8.108272296639931e-3 ; xx [ 1 ] = 0.9999641940394065 ; xx [ 2 ] = 0.5 ; xx [
3 ] = xx [ 2 ] * state [ 2 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] = xx [
1 ] * xx [ 4 ] ; xx [ 6 ] = 8.816340566746522e-3 ; xx [ 7 ] = sin ( xx [ 3 ]
) ; xx [ 3 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 8 ] = 8.462306962064715e-3 ; xx [ 9
] = 0.9999611353142737 ; xx [ 10 ] = xx [ 9 ] * xx [ 7 ] ; xx [ 7 ] = xx [ 1
] * xx [ 3 ] - xx [ 8 ] * xx [ 10 ] ; xx [ 11 ] = xx [ 8 ] * xx [ 4 ] ; xx [
4 ] = - xx [ 11 ] ; xx [ 12 ] = xx [ 1 ] * xx [ 10 ] + xx [ 8 ] * xx [ 3 ] ;
xx [ 1 ] = - xx [ 12 ] ; xx [ 13 ] = - xx [ 5 ] ; xx [ 14 ] = xx [ 7 ] ; xx [
15 ] = xx [ 4 ] ; xx [ 16 ] = xx [ 1 ] ; xx [ 3 ] = xx [ 0 ] * state [ 1 ] ;
xx [ 8 ] = 2.0 ; xx [ 17 ] = xx [ 7 ] ; xx [ 18 ] = xx [ 4 ] ; xx [ 19 ] = xx
[ 1 ] ; xx [ 1 ] = 0.9999671274198785 ; xx [ 4 ] = xx [ 1 ] * state [ 1 ] ;
xx [ 10 ] = xx [ 11 ] * xx [ 4 ] ; xx [ 20 ] = xx [ 3 ] * xx [ 12 ] + xx [ 4
] * xx [ 7 ] ; xx [ 21 ] = xx [ 3 ] * xx [ 11 ] ; xx [ 22 ] = - xx [ 10 ] ;
xx [ 23 ] = - xx [ 20 ] ; xx [ 24 ] = xx [ 21 ] ; pm_math_Vector3_cross_ra (
xx + 17 , xx + 22 , xx + 25 ) ; xx [ 22 ] = xx [ 3 ] + xx [ 8 ] * ( xx [ 25 ]
- xx [ 5 ] * xx [ 10 ] ) ; xx [ 10 ] = xx [ 6 ] * state [ 3 ] ; xx [ 23 ] =
xx [ 22 ] - xx [ 10 ] ; xx [ 24 ] = xx [ 8 ] * ( xx [ 26 ] - xx [ 5 ] * xx [
20 ] ) ; xx [ 20 ] = xx [ 4 ] + xx [ 8 ] * ( xx [ 5 ] * xx [ 21 ] + xx [ 27 ]
) ; xx [ 21 ] = xx [ 9 ] * state [ 3 ] ; xx [ 25 ] = xx [ 20 ] + xx [ 21 ] ;
xx [ 26 ] = 1.388578175005192e-5 ; xx [ 27 ] = 1.610114e-3 ; xx [ 28 ] =
1.612003218249948e-3 ; xx [ 29 ] = xx [ 26 ] * xx [ 23 ] ; xx [ 30 ] = xx [
27 ] * xx [ 24 ] ; xx [ 31 ] = xx [ 28 ] * xx [ 25 ] ;
pm_math_Vector3_cross_ra ( xx + 23 , xx + 29 , xx + 32 ) ; xx [ 29 ] =
0.999990283781366 ; xx [ 30 ] = xx [ 2 ] * state [ 4 ] ; xx [ 31 ] = cos ( xx
[ 30 ] ) ; xx [ 35 ] = xx [ 29 ] * xx [ 31 ] ; xx [ 36 ] =
4.408213114535667e-3 ; xx [ 37 ] = sin ( xx [ 30 ] ) ; xx [ 30 ] = xx [ 36 ]
* xx [ 37 ] ; xx [ 38 ] = xx [ 36 ] * xx [ 31 ] ; xx [ 31 ] = xx [ 29 ] * xx
[ 37 ] ; xx [ 29 ] = - xx [ 31 ] ; xx [ 39 ] = - xx [ 35 ] ; xx [ 40 ] = xx [
30 ] ; xx [ 41 ] = xx [ 38 ] ; xx [ 42 ] = xx [ 29 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 23 , xx + 43 ) ; xx [ 36
] = xx [ 45 ] + state [ 5 ] ; xx [ 46 ] = xx [ 43 ] ; xx [ 47 ] = xx [ 44 ] ;
xx [ 48 ] = xx [ 36 ] ; xx [ 37 ] = 4.119999999999995e-6 ; xx [ 49 ] =
6.098500000000001e-5 ; xx [ 50 ] = 6.216300000000001e-5 ; xx [ 51 ] = xx [ 37
] * xx [ 43 ] ; xx [ 52 ] = xx [ 49 ] * xx [ 44 ] ; xx [ 53 ] = xx [ 50 ] *
xx [ 36 ] ; pm_math_Vector3_cross_ra ( xx + 46 , xx + 51 , xx + 54 ) ; xx [
46 ] = 0.04719166 ; xx [ 47 ] = 0.07845989320000001 ; xx [ 51 ] = xx [ 30 ] ;
xx [ 52 ] = xx [ 38 ] ; xx [ 53 ] = xx [ 29 ] ; xx [ 29 ] =
7.500000000000003e-3 ; xx [ 48 ] = xx [ 29 ] * xx [ 38 ] ; xx [ 57 ] = xx [
46 ] * xx [ 31 ] - xx [ 29 ] * xx [ 30 ] ; xx [ 58 ] = xx [ 46 ] * xx [ 38 ]
; xx [ 59 ] = xx [ 48 ] ; xx [ 60 ] = xx [ 57 ] ; xx [ 61 ] = xx [ 58 ] ;
pm_math_Vector3_cross_ra ( xx + 51 , xx + 59 , xx + 62 ) ; xx [ 51 ] =
0.1261590450577517 - ( xx [ 8 ] * ( xx [ 62 ] - xx [ 48 ] * xx [ 35 ] ) - xx
[ 46 ] ) ; xx [ 52 ] = - ( xx [ 8 ] * ( xx [ 63 ] - xx [ 35 ] * xx [ 57 ] ) )
; xx [ 53 ] = - ( 5.922290061137347e-3 + xx [ 29 ] + xx [ 8 ] * ( xx [ 64 ] -
xx [ 58 ] * xx [ 35 ] ) ) ; pm_math_Vector3_cross_ra ( xx + 23 , xx + 51 , xx
+ 57 ) ; pm_math_Vector3_cross_ra ( xx + 23 , xx + 57 , xx + 60 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 60 , xx + 57 ) ; xx [ 29
] = xx [ 47 ] * xx [ 58 ] ; xx [ 48 ] = 2.368973227639361e-4 ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 48 , 1 , xx + 60 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
"'Assembly1/Revolute3' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 60 ] = ( input [ 2 ] - ( xx [ 56 ] + xx [ 46 ] * xx [
29 ] ) ) / xx [ 48 ] ; xx [ 61 ] = xx [ 54 ] + xx [ 37 ] * state [ 5 ] * xx [
44 ] ; xx [ 62 ] = xx [ 55 ] - xx [ 49 ] * state [ 5 ] * xx [ 43 ] ; xx [ 63
] = xx [ 56 ] + xx [ 50 ] * xx [ 60 ] ; pm_math_Quaternion_xform_ra ( xx + 39
, xx + 61 , xx + 54 ) ; xx [ 44 ] = xx [ 46 ] * state [ 5 ] ; xx [ 46 ] =
3.702652603530712e-3 ; xx [ 61 ] = xx [ 47 ] * ( xx [ 57 ] - xx [ 44 ] * ( xx
[ 45 ] + xx [ 36 ] ) ) ; xx [ 62 ] = xx [ 29 ] + xx [ 46 ] * xx [ 60 ] ; xx [
63 ] = xx [ 47 ] * ( xx [ 44 ] * ( xx [ 43 ] + xx [ 43 ] ) + xx [ 59 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 39 , xx + 61 , xx + 43 ) ;
pm_math_Vector3_cross_ra ( xx + 51 , xx + 43 , xx + 57 ) ; xx [ 29 ] = xx [
35 ] * xx [ 35 ] ; xx [ 36 ] = 1.0 ; xx [ 61 ] = xx [ 8 ] * ( xx [ 29 ] + xx
[ 30 ] * xx [ 30 ] ) - xx [ 36 ] ; xx [ 62 ] = xx [ 38 ] * xx [ 30 ] ; xx [
63 ] = xx [ 35 ] * xx [ 31 ] ; xx [ 64 ] = xx [ 8 ] * ( xx [ 62 ] - xx [ 63 ]
) ; xx [ 65 ] = xx [ 30 ] * xx [ 31 ] ; xx [ 66 ] = xx [ 38 ] * xx [ 35 ] ;
xx [ 67 ] = xx [ 8 ] * ( xx [ 65 ] + xx [ 66 ] ) ; xx [ 68 ] = xx [ 8 ] * (
xx [ 62 ] + xx [ 63 ] ) ; xx [ 62 ] = xx [ 8 ] * ( xx [ 29 ] + xx [ 38 ] * xx
[ 38 ] ) - xx [ 36 ] ; xx [ 63 ] = xx [ 30 ] * xx [ 35 ] ; xx [ 30 ] = xx [
38 ] * xx [ 31 ] ; xx [ 35 ] = xx [ 8 ] * ( xx [ 63 ] - xx [ 30 ] ) ; xx [ 38
] = xx [ 8 ] * ( xx [ 66 ] - xx [ 65 ] ) ; xx [ 65 ] = xx [ 8 ] * ( xx [ 30 ]
+ xx [ 63 ] ) ; xx [ 30 ] = xx [ 8 ] * ( xx [ 29 ] + xx [ 31 ] * xx [ 31 ] )
- xx [ 36 ] ; xx [ 69 ] = xx [ 61 ] ; xx [ 70 ] = xx [ 64 ] ; xx [ 71 ] = -
xx [ 67 ] ; xx [ 72 ] = xx [ 68 ] ; xx [ 73 ] = xx [ 62 ] ; xx [ 74 ] = xx [
35 ] ; xx [ 75 ] = xx [ 38 ] ; xx [ 76 ] = - xx [ 65 ] ; xx [ 77 ] = xx [ 30
] ; xx [ 29 ] = xx [ 50 ] / xx [ 48 ] ; xx [ 31 ] = xx [ 50 ] - xx [ 50 ] *
xx [ 29 ] ; xx [ 78 ] = xx [ 37 ] * xx [ 61 ] ; xx [ 79 ] = xx [ 37 ] * xx [
68 ] ; xx [ 80 ] = xx [ 37 ] * xx [ 38 ] ; xx [ 81 ] = xx [ 49 ] * xx [ 64 ]
; xx [ 82 ] = xx [ 49 ] * xx [ 62 ] ; xx [ 83 ] = - ( xx [ 49 ] * xx [ 65 ] )
; xx [ 84 ] = - ( xx [ 67 ] * xx [ 31 ] ) ; xx [ 85 ] = xx [ 35 ] * xx [ 31 ]
; xx [ 86 ] = xx [ 31 ] * xx [ 30 ] ; pm_math_Matrix3x3_compose_ra ( xx + 69
, xx + 78 , xx + 87 ) ; xx [ 31 ] = xx [ 46 ] / xx [ 48 ] ; xx [ 37 ] = xx [
50 ] * xx [ 31 ] ; xx [ 48 ] = xx [ 37 ] * xx [ 64 ] ; xx [ 49 ] = xx [ 67 ]
* xx [ 48 ] ; xx [ 50 ] = xx [ 37 ] * xx [ 62 ] ; xx [ 63 ] = xx [ 67 ] * xx
[ 50 ] ; xx [ 66 ] = xx [ 37 ] * xx [ 65 ] ; xx [ 37 ] = xx [ 67 ] * xx [ 66
] ; xx [ 78 ] = xx [ 35 ] * xx [ 48 ] ; xx [ 79 ] = xx [ 35 ] * xx [ 50 ] ;
xx [ 80 ] = xx [ 35 ] * xx [ 66 ] ; xx [ 81 ] = xx [ 48 ] * xx [ 30 ] ; xx [
48 ] = xx [ 50 ] * xx [ 30 ] ; xx [ 50 ] = xx [ 66 ] * xx [ 30 ] ; xx [ 96 ]
= xx [ 49 ] ; xx [ 97 ] = xx [ 63 ] ; xx [ 98 ] = - xx [ 37 ] ; xx [ 99 ] = -
xx [ 78 ] ; xx [ 100 ] = - xx [ 79 ] ; xx [ 101 ] = xx [ 80 ] ; xx [ 102 ] =
- xx [ 81 ] ; xx [ 103 ] = - xx [ 48 ] ; xx [ 104 ] = xx [ 50 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 96 , xx + 51 , xx + 105 ) ; xx [ 66 ] =
xx [ 47 ] - xx [ 46 ] * xx [ 31 ] ; xx [ 96 ] = xx [ 47 ] * xx [ 61 ] ; xx [
97 ] = xx [ 47 ] * xx [ 68 ] ; xx [ 98 ] = xx [ 47 ] * xx [ 38 ] ; xx [ 99 ]
= xx [ 64 ] * xx [ 66 ] ; xx [ 100 ] = xx [ 66 ] * xx [ 62 ] ; xx [ 101 ] = -
( xx [ 65 ] * xx [ 66 ] ) ; xx [ 102 ] = - ( xx [ 47 ] * xx [ 67 ] ) ; xx [
103 ] = xx [ 47 ] * xx [ 35 ] ; xx [ 104 ] = xx [ 47 ] * xx [ 30 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 69 , xx + 96 , xx + 114 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 114 , xx + 51 , xx + 64 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 64 , xx + 51 , xx + 96 ) ; xx [ 30 ] =
xx [ 26 ] + xx [ 87 ] - xx [ 105 ] - xx [ 105 ] - xx [ 96 ] ; xx [ 26 ] = xx
[ 88 ] - xx [ 106 ] - xx [ 108 ] - xx [ 97 ] ; xx [ 35 ] = xx [ 89 ] - xx [
107 ] - xx [ 111 ] - xx [ 98 ] ; xx [ 38 ] = xx [ 90 ] - xx [ 108 ] - xx [
106 ] - xx [ 99 ] ; xx [ 46 ] = xx [ 91 ] - xx [ 109 ] - xx [ 109 ] - xx [
100 ] ; xx [ 47 ] = xx [ 92 ] - xx [ 110 ] - xx [ 112 ] - xx [ 101 ] ; xx [
61 ] = xx [ 93 ] - xx [ 111 ] - xx [ 107 ] - xx [ 102 ] ; xx [ 62 ] = xx [ 94
] - xx [ 112 ] - xx [ 110 ] - xx [ 103 ] ; xx [ 73 ] = xx [ 28 ] + xx [ 95 ]
- xx [ 113 ] - xx [ 113 ] - xx [ 104 ] ; xx [ 82 ] = xx [ 30 ] ; xx [ 83 ] =
xx [ 26 ] ; xx [ 84 ] = xx [ 35 ] ; xx [ 85 ] = xx [ 38 ] ; xx [ 86 ] = xx [
27 ] + xx [ 46 ] ; xx [ 87 ] = xx [ 47 ] ; xx [ 88 ] = xx [ 61 ] ; xx [ 89 ]
= xx [ 62 ] ; xx [ 90 ] = xx [ 73 ] ; xx [ 28 ] = xx [ 21 ] * xx [ 24 ] ; xx
[ 74 ] = xx [ 10 ] * xx [ 20 ] + xx [ 21 ] * xx [ 22 ] ; xx [ 21 ] = xx [ 10
] * xx [ 24 ] ; xx [ 75 ] = xx [ 28 ] ; xx [ 76 ] = - xx [ 74 ] ; xx [ 77 ] =
xx [ 21 ] ; pm_math_Matrix3x3_xform_ra ( xx + 82 , xx + 75 , xx + 91 ) ; xx [
10 ] = xx [ 64 ] - xx [ 49 ] ; xx [ 24 ] = xx [ 67 ] - xx [ 63 ] ; xx [ 49 ]
= xx [ 37 ] + xx [ 70 ] ; xx [ 37 ] = xx [ 78 ] + xx [ 65 ] ; xx [ 63 ] = xx
[ 79 ] + xx [ 68 ] ; xx [ 64 ] = xx [ 71 ] - xx [ 80 ] ; xx [ 65 ] = xx [ 81
] + xx [ 66 ] ; xx [ 66 ] = xx [ 48 ] + xx [ 69 ] ; xx [ 48 ] = xx [ 72 ] -
xx [ 50 ] ; xx [ 78 ] = - xx [ 10 ] ; xx [ 79 ] = - xx [ 24 ] ; xx [ 80 ] = -
xx [ 49 ] ; xx [ 81 ] = - xx [ 37 ] ; xx [ 82 ] = - xx [ 63 ] ; xx [ 83 ] = -
xx [ 64 ] ; xx [ 84 ] = - xx [ 65 ] ; xx [ 85 ] = - xx [ 66 ] ; xx [ 86 ] = -
xx [ 48 ] ; xx [ 50 ] = 6.706412990178618e-3 ; xx [ 67 ] = xx [ 50 ] * xx [
11 ] ; xx [ 68 ] = 0.1428627493367576 ; xx [ 69 ] = xx [ 68 ] * xx [ 12 ] -
xx [ 50 ] * xx [ 7 ] ; xx [ 70 ] = xx [ 68 ] * xx [ 11 ] ; xx [ 87 ] = - xx [
67 ] ; xx [ 88 ] = xx [ 69 ] ; xx [ 89 ] = - xx [ 70 ] ;
pm_math_Vector3_cross_ra ( xx + 17 , xx + 87 , xx + 94 ) ; xx [ 71 ] =
0.1326554077902182 - ( xx [ 8 ] * ( xx [ 67 ] * xx [ 5 ] + xx [ 94 ] ) - xx [
68 ] ) ; xx [ 67 ] = 0.02097944648055044 - ( xx [ 50 ] + xx [ 8 ] * ( xx [ 96
] + xx [ 70 ] * xx [ 5 ] ) ) ; xx [ 50 ] = xx [ 4 ] * xx [ 71 ] - xx [ 3 ] *
xx [ 67 ] ; xx [ 68 ] = xx [ 8 ] * ( xx [ 95 ] - xx [ 5 ] * xx [ 69 ] ) ; xx
[ 87 ] = - ( xx [ 4 ] * xx [ 50 ] ) ; xx [ 88 ] = xx [ 4 ] * xx [ 4 ] * xx [
68 ] + xx [ 3 ] * xx [ 3 ] * xx [ 68 ] ; xx [ 89 ] = xx [ 3 ] * xx [ 50 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 13 , xx + 87 , xx + 94 ) ; xx [ 50
] = 0.142798071 ; xx [ 69 ] = xx [ 50 ] * state [ 3 ] ; xx [ 70 ] = xx [ 94 ]
- xx [ 69 ] * ( xx [ 20 ] + xx [ 25 ] ) ; xx [ 20 ] = xx [ 69 ] * ( xx [ 22 ]
+ xx [ 23 ] ) + xx [ 96 ] ; xx [ 87 ] = xx [ 70 ] ; xx [ 88 ] = xx [ 95 ] ;
xx [ 89 ] = xx [ 20 ] ; pm_math_Matrix3x3_xform_ra ( xx + 78 , xx + 87 , xx +
96 ) ; xx [ 22 ] = xx [ 32 ] + xx [ 54 ] + xx [ 57 ] + xx [ 91 ] + xx [ 96 ]
; xx [ 23 ] = xx [ 9 ] * xx [ 35 ] - xx [ 6 ] * xx [ 30 ] - xx [ 50 ] * xx [
24 ] ; xx [ 25 ] = xx [ 34 ] + xx [ 56 ] + xx [ 59 ] + xx [ 93 ] + xx [ 98 ]
; pm_math_Matrix3x3_transposeXform_ra ( xx + 78 , xx + 75 , xx + 99 ) ; xx [
69 ] = 0.239924513 ; xx [ 72 ] = xx [ 69 ] + xx [ 118 ] ; xx [ 75 ] = xx [ 69
] + xx [ 114 ] ; xx [ 76 ] = xx [ 115 ] ; xx [ 77 ] = xx [ 116 ] ; xx [ 78 ]
= xx [ 117 ] ; xx [ 79 ] = xx [ 72 ] ; xx [ 80 ] = xx [ 119 ] ; xx [ 81 ] =
xx [ 120 ] ; xx [ 82 ] = xx [ 121 ] ; xx [ 83 ] = xx [ 69 ] + xx [ 122 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 75 , xx + 87 , xx + 84 ) ; xx [ 75 ] = xx [
44 ] + xx [ 100 ] + xx [ 85 ] ; xx [ 44 ] = xx [ 9 ] * xx [ 73 ] - xx [ 6 ] *
xx [ 61 ] - xx [ 50 ] * xx [ 66 ] ; xx [ 76 ] = xx [ 50 ] * xx [ 72 ] - ( xx
[ 9 ] * xx [ 66 ] - xx [ 6 ] * xx [ 24 ] ) ; xx [ 77 ] = xx [ 9 ] * xx [ 44 ]
- xx [ 6 ] * xx [ 23 ] + xx [ 50 ] * xx [ 76 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 77 , 1 , xx + 78 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
"'Assembly1/Revolute2' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 78 ] = ( input [ 1 ] - ( xx [ 9 ] * xx [ 25 ] - xx [ 6
] * xx [ 22 ] + xx [ 50 ] * xx [ 75 ] ) ) / xx [ 77 ] ; xx [ 32 ] = xx [ 9 ]
* xx [ 47 ] - xx [ 6 ] * xx [ 38 ] - xx [ 50 ] * xx [ 63 ] ; xx [ 79 ] = xx [
22 ] + xx [ 23 ] * xx [ 78 ] ; xx [ 80 ] = xx [ 33 ] + xx [ 55 ] + xx [ 58 ]
+ xx [ 92 ] + xx [ 97 ] + xx [ 32 ] * xx [ 78 ] ; xx [ 81 ] = xx [ 25 ] + xx
[ 44 ] * xx [ 78 ] ; pm_math_Quaternion_xform_ra ( xx + 13 , xx + 79 , xx +
54 ) ; xx [ 57 ] = xx [ 71 ] ; xx [ 58 ] = - xx [ 68 ] ; xx [ 59 ] = xx [ 67
] ; xx [ 22 ] = xx [ 50 ] * xx [ 115 ] - ( xx [ 9 ] * xx [ 65 ] - xx [ 6 ] *
xx [ 10 ] ) ; xx [ 25 ] = xx [ 50 ] * xx [ 121 ] - ( xx [ 9 ] * xx [ 48 ] -
xx [ 6 ] * xx [ 49 ] ) ; xx [ 79 ] = xx [ 43 ] + xx [ 99 ] + xx [ 84 ] + xx [
22 ] * xx [ 78 ] ; xx [ 80 ] = xx [ 75 ] + xx [ 76 ] * xx [ 78 ] ; xx [ 81 ]
= xx [ 45 ] + xx [ 101 ] + xx [ 86 ] + xx [ 25 ] * xx [ 78 ] ;
pm_math_Quaternion_xform_ra ( xx + 13 , xx + 79 , xx + 82 ) ;
pm_math_Vector3_cross_ra ( xx + 57 , xx + 82 , xx + 79 ) ; xx [ 33 ] =
0.14921906 ; xx [ 34 ] = xx [ 33 ] * state [ 1 ] ; xx [ 43 ] = xx [ 3 ] * xx
[ 34 ] ; xx [ 3 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 45 ] = xx [ 11 ] * xx [ 7 ] ;
xx [ 75 ] = xx [ 5 ] * xx [ 12 ] ; xx [ 82 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 84
] = xx [ 12 ] * xx [ 7 ] ; xx [ 85 ] = xx [ 11 ] * xx [ 12 ] ; xx [ 86 ] = xx
[ 5 ] * xx [ 7 ] ; xx [ 96 ] = xx [ 8 ] * ( xx [ 3 ] + xx [ 7 ] * xx [ 7 ] )
- xx [ 36 ] ; xx [ 97 ] = - ( xx [ 8 ] * ( xx [ 45 ] + xx [ 75 ] ) ) ; xx [
98 ] = xx [ 8 ] * ( xx [ 82 ] - xx [ 84 ] ) ; xx [ 99 ] = xx [ 8 ] * ( xx [
75 ] - xx [ 45 ] ) ; xx [ 100 ] = xx [ 8 ] * ( xx [ 3 ] + xx [ 11 ] * xx [ 11
] ) - xx [ 36 ] ; xx [ 101 ] = xx [ 8 ] * ( xx [ 85 ] + xx [ 86 ] ) ; xx [
102 ] = - ( xx [ 8 ] * ( xx [ 84 ] + xx [ 82 ] ) ) ; xx [ 103 ] = xx [ 8 ] *
( xx [ 85 ] - xx [ 86 ] ) ; xx [ 104 ] = xx [ 8 ] * ( xx [ 3 ] + xx [ 12 ] *
xx [ 12 ] ) - xx [ 36 ] ; xx [ 3 ] = xx [ 22 ] / xx [ 77 ] ; xx [ 36 ] = xx [
76 ] / xx [ 77 ] ; xx [ 45 ] = xx [ 25 ] / xx [ 77 ] ; xx [ 84 ] = - ( xx [
10 ] + xx [ 23 ] * xx [ 3 ] ) ; xx [ 85 ] = - ( xx [ 24 ] + xx [ 23 ] * xx [
36 ] ) ; xx [ 86 ] = - ( xx [ 49 ] + xx [ 23 ] * xx [ 45 ] ) ; xx [ 87 ] = -
( xx [ 37 ] + xx [ 32 ] * xx [ 3 ] ) ; xx [ 88 ] = - ( xx [ 63 ] + xx [ 32 ]
* xx [ 36 ] ) ; xx [ 89 ] = - ( xx [ 64 ] + xx [ 32 ] * xx [ 45 ] ) ; xx [ 90
] = - ( xx [ 65 ] + xx [ 44 ] * xx [ 3 ] ) ; xx [ 91 ] = - ( xx [ 66 ] + xx [
44 ] * xx [ 36 ] ) ; xx [ 92 ] = - ( xx [ 48 ] + xx [ 44 ] * xx [ 45 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 84 , xx + 96 , xx + 105 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 96 , xx + 105 , xx + 84 ) ; xx [ 10 ] =
xx [ 76 ] * xx [ 3 ] ; xx [ 24 ] = xx [ 25 ] * xx [ 3 ] ; xx [ 37 ] = xx [ 25
] * xx [ 36 ] ; xx [ 105 ] = xx [ 114 ] - xx [ 22 ] * xx [ 3 ] + xx [ 69 ] ;
xx [ 106 ] = xx [ 115 ] - xx [ 10 ] ; xx [ 107 ] = xx [ 116 ] - xx [ 24 ] ;
xx [ 108 ] = xx [ 117 ] - xx [ 10 ] ; xx [ 109 ] = xx [ 72 ] - xx [ 76 ] * xx
[ 36 ] ; xx [ 110 ] = xx [ 119 ] - xx [ 37 ] ; xx [ 111 ] = xx [ 120 ] - xx [
24 ] ; xx [ 112 ] = xx [ 121 ] - xx [ 37 ] ; xx [ 113 ] = xx [ 122 ] - xx [
25 ] * xx [ 45 ] + xx [ 69 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx +
105 , xx + 96 , xx + 114 ) ; pm_math_Matrix3x3_compose_ra ( xx + 96 , xx +
114 , xx + 105 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 105 , xx + 57 , xx +
114 ) ; xx [ 10 ] = xx [ 86 ] - xx [ 120 ] ; xx [ 22 ] = xx [ 34 ] * xx [ 4 ]
; xx [ 4 ] = xx [ 84 ] - xx [ 114 ] ; xx [ 24 ] = xx [ 92 ] - xx [ 122 ] ; xx
[ 25 ] = xx [ 90 ] - xx [ 116 ] ; xx [ 34 ] = xx [ 23 ] / xx [ 77 ] ; xx [ 37
] = xx [ 32 ] * xx [ 34 ] ; xx [ 48 ] = xx [ 44 ] * xx [ 34 ] ; xx [ 49 ] =
xx [ 32 ] / xx [ 77 ] ; xx [ 55 ] = xx [ 44 ] * xx [ 49 ] ; xx [ 63 ] = xx [
44 ] / xx [ 77 ] ; xx [ 123 ] = xx [ 30 ] - xx [ 23 ] * xx [ 34 ] ; xx [ 124
] = xx [ 26 ] - xx [ 37 ] ; xx [ 125 ] = xx [ 35 ] - xx [ 48 ] ; xx [ 126 ] =
xx [ 38 ] - xx [ 37 ] ; xx [ 127 ] = xx [ 46 ] - xx [ 32 ] * xx [ 49 ] + xx [
27 ] ; xx [ 128 ] = xx [ 47 ] - xx [ 55 ] ; xx [ 129 ] = xx [ 61 ] - xx [ 48
] ; xx [ 130 ] = xx [ 62 ] - xx [ 55 ] ; xx [ 131 ] = xx [ 73 ] - xx [ 44 ] *
xx [ 63 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 123 , xx + 96 , xx +
132 ) ; pm_math_Matrix3x3_compose_ra ( xx + 96 , xx + 132 , xx + 123 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 84 , xx + 57 , xx + 96 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 114 , xx + 57 , xx + 132 ) ; xx [ 23 ] =
xx [ 85 ] - xx [ 117 ] ; xx [ 26 ] = xx [ 91 ] - xx [ 119 ] ; xx [ 27 ] = xx
[ 0 ] * xx [ 23 ] + xx [ 1 ] * xx [ 26 ] + xx [ 33 ] * ( 0.250714913 + xx [
109 ] ) ; xx [ 30 ] = xx [ 0 ] * ( xx [ 0 ] * ( 1.445397740801292e-5 + xx [
123 ] - xx [ 96 ] - xx [ 96 ] - xx [ 132 ] ) + xx [ 1 ] * ( xx [ 125 ] - xx [
98 ] - xx [ 102 ] - xx [ 134 ] ) + xx [ 33 ] * xx [ 23 ] ) + xx [ 1 ] * ( xx
[ 0 ] * ( xx [ 129 ] - xx [ 102 ] - xx [ 98 ] - xx [ 138 ] ) + xx [ 1 ] * (
1.840057022591987e-3 + xx [ 131 ] - xx [ 104 ] - xx [ 104 ] - xx [ 140 ] ) +
xx [ 33 ] * xx [ 26 ] ) + xx [ 33 ] * xx [ 27 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 30 , 1 , xx + 23 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
"'Assembly1/Revolute1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 46 ] = ( xx [ 0 ] * xx [ 4 ] + xx [ 1 ] * xx [ 25 ] +
xx [ 33 ] * xx [ 106 ] ) / xx [ 30 ] ; xx [ 47 ] = xx [ 27 ] / xx [ 30 ] ; xx
[ 48 ] = ( xx [ 0 ] * xx [ 10 ] + xx [ 1 ] * xx [ 24 ] + xx [ 33 ] * xx [ 112
] ) / xx [ 30 ] ; xx [ 23 ] = 9.806649999999999 ; xx [ 26 ] =
0.9999917818212004 ; xx [ 27 ] = xx [ 2 ] * state [ 0 ] ; xx [ 2 ] = sin ( xx
[ 27 ] ) ; xx [ 32 ] = xx [ 0 ] * xx [ 2 ] ; xx [ 35 ] = 4.054169466209523e-3
; xx [ 37 ] = xx [ 1 ] * xx [ 2 ] ; xx [ 2 ] = xx [ 26 ] * xx [ 32 ] - xx [
35 ] * xx [ 37 ] ; xx [ 38 ] = xx [ 23 ] * xx [ 2 ] ; xx [ 44 ] = xx [ 26 ] *
xx [ 37 ] + xx [ 35 ] * xx [ 32 ] ; xx [ 32 ] = cos ( xx [ 27 ] ) ; xx [ 27 ]
= xx [ 26 ] * xx [ 32 ] ; xx [ 26 ] = xx [ 35 ] * xx [ 32 ] ; xx [ 32 ] = xx
[ 23 ] * xx [ 26 ] ; xx [ 35 ] = xx [ 8 ] * ( xx [ 38 ] * xx [ 44 ] + xx [ 27
] * xx [ 32 ] ) ; xx [ 37 ] = xx [ 8 ] * ( xx [ 27 ] * xx [ 38 ] - xx [ 32 ]
* xx [ 44 ] ) ; xx [ 27 ] = xx [ 23 ] - xx [ 8 ] * ( xx [ 38 ] * xx [ 2 ] +
xx [ 26 ] * xx [ 32 ] ) ; xx [ 57 ] = xx [ 35 ] ; xx [ 58 ] = xx [ 37 ] ; xx
[ 59 ] = xx [ 27 ] ; xx [ 2 ] = ( input [ 0 ] - ( xx [ 0 ] * ( xx [ 54 ] + xx
[ 79 ] + xx [ 43 ] * xx [ 10 ] - xx [ 22 ] * xx [ 4 ] ) + xx [ 1 ] * ( xx [
56 ] + xx [ 81 ] + xx [ 43 ] * xx [ 24 ] - xx [ 22 ] * xx [ 25 ] ) + xx [ 33
] * ( xx [ 83 ] + xx [ 43 ] * xx [ 110 ] - xx [ 22 ] * xx [ 108 ] ) ) ) / xx
[ 30 ] - pm_math_Vector3_dot_ra ( xx + 46 , xx + 57 ) ; xx [ 23 ] = xx [ 34 ]
; xx [ 24 ] = xx [ 49 ] ; xx [ 25 ] = xx [ 63 ] ; xx [ 4 ] = xx [ 0 ] * xx [
2 ] ; xx [ 0 ] = xx [ 1 ] * xx [ 2 ] ; xx [ 1 ] = xx [ 11 ] * xx [ 0 ] ; xx [
10 ] = xx [ 4 ] * xx [ 12 ] + xx [ 0 ] * xx [ 7 ] ; xx [ 7 ] = xx [ 4 ] * xx
[ 11 ] ; xx [ 46 ] = - xx [ 1 ] ; xx [ 47 ] = - xx [ 10 ] ; xx [ 48 ] = xx [
7 ] ; pm_math_Vector3_cross_ra ( xx + 17 , xx + 46 , xx + 54 ) ; xx [ 11 ] =
xx [ 4 ] + xx [ 8 ] * ( xx [ 54 ] - xx [ 5 ] * xx [ 1 ] ) ; xx [ 1 ] = xx [ 8
] * ( xx [ 55 ] - xx [ 5 ] * xx [ 10 ] ) ; xx [ 10 ] = xx [ 0 ] + xx [ 8 ] *
( xx [ 5 ] * xx [ 7 ] + xx [ 56 ] ) ; xx [ 17 ] = xx [ 11 ] ; xx [ 18 ] = xx
[ 1 ] ; xx [ 19 ] = xx [ 10 ] ; xx [ 46 ] = xx [ 3 ] ; xx [ 47 ] = xx [ 36 ]
; xx [ 48 ] = xx [ 45 ] ; xx [ 54 ] = xx [ 35 ] - xx [ 22 ] + xx [ 0 ] * xx [
68 ] ; xx [ 55 ] = xx [ 37 ] + xx [ 33 ] * xx [ 2 ] + xx [ 0 ] * xx [ 71 ] -
xx [ 4 ] * xx [ 67 ] ; xx [ 56 ] = xx [ 27 ] + xx [ 43 ] - xx [ 4 ] * xx [ 68
] ; pm_math_Quaternion_inverseXform_ra ( xx + 13 , xx + 54 , xx + 3 ) ; xx [
0 ] = xx [ 78 ] - ( pm_math_Vector3_dot_ra ( xx + 23 , xx + 17 ) +
pm_math_Vector3_dot_ra ( xx + 46 , xx + 3 ) ) ; xx [ 12 ] = xx [ 11 ] - xx [
6 ] * xx [ 0 ] + xx [ 28 ] ; xx [ 13 ] = xx [ 1 ] - xx [ 74 ] ; xx [ 14 ] =
xx [ 10 ] + xx [ 9 ] * xx [ 0 ] + xx [ 21 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 12 , xx + 6 ) ;
pm_math_Vector3_cross_ra ( xx + 12 , xx + 51 , xx + 9 ) ; xx [ 12 ] = xx [ 3
] + xx [ 70 ] + xx [ 9 ] ; xx [ 13 ] = xx [ 4 ] + xx [ 50 ] * xx [ 0 ] + xx [
95 ] + xx [ 10 ] ; xx [ 14 ] = xx [ 5 ] + xx [ 20 ] + xx [ 11 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 12 , xx + 3 ) ; deriv [ 0
] = state [ 1 ] ; deriv [ 1 ] = xx [ 2 ] ; deriv [ 2 ] = state [ 3 ] ; deriv
[ 3 ] = xx [ 0 ] ; deriv [ 4 ] = state [ 5 ] ; deriv [ 5 ] = xx [ 60 ] - ( xx
[ 29 ] * xx [ 8 ] + xx [ 31 ] * xx [ 4 ] ) ; errorResult [ 0 ] = 0.0 ; return
NULL ; }
