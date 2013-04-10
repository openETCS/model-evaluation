/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-04-10T10:44:31
*************************************************************$ */
#ifndef _MoRC_countDownTimer_H_
#define _MoRC_countDownTimer_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* countDownTimer::expired */ expired;
  kcg_bool /* countDownTimer::started */ started;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_time_Type /* countDownTimer::TimerStatus_SM::Counting::_L4 */ _L4_TimerStatus_SM_Counting;
  MoRC_SSM_ST_TimerStatus_SM /* countDownTimer::TimerStatus_SM */ TimerStatus_SM_state_nxt;
  kcg_bool /* countDownTimer::TimerStatus_SM */ TimerStatus_SM_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_countDownTimer;

/* ===========  node initialization and cycle functions  =========== */
/** The countDownTimer implements a generic timer function. */
/** "GdC_1" {Author = "Author : Uwe Steinke", DateC = "Created : 2012-10-15", DateM = "Modified : 2012-12-20", Version = "Version : 00.00.00.001"} */
/** "Remark_1" {Description = "- Name: countDownTimer - Description: Implements a generic Count Down Timer  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE. "} */
/* countDownTimer */
extern void MoRC_countDownTimer(
  /* countDownTimer::re_start */kcg_bool re_start,
  /* countDownTimer::stop */kcg_bool stop,
  /* countDownTimer::actualTime */MoRC_time_Type actualTime,
  /* countDownTimer::autoretrigger */kcg_bool autoretrigger,
  /* countDownTimer::interval */MoRC_time_Type interval,
  MoRC_outC_countDownTimer *outC);

extern void MoRC_countDownTimer_reset(MoRC_outC_countDownTimer *outC);

#endif /* _MoRC_countDownTimer_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_countDownTimer.h
** Generation date: 2013-04-10T10:44:31
*************************************************************$ */

