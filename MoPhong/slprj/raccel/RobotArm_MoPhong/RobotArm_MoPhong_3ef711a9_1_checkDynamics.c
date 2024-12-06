#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "RobotArm_MoPhong_3ef711a9_1_geometries.h"
PmfMessageId RobotArm_MoPhong_3ef711a9_1_checkDynamics ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const double *
input , const double * inputDot , const double * inputDdot , const double *
discreteState , const int * modeVector , double * errorResult ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) state ; ( void ) input ; ( void ) inputDot ; ( void )
inputDdot ; ( void ) discreteState ; ( void ) modeVector ; ( void ) neDiagMgr
; errorResult [ 0 ] = 0.0 ; return NULL ; }
