/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */
#ifndef _MoRC_waitAndRepeatTimer_H_
#define _MoRC_waitAndRepeatTimer_H_

#include "kcg_types.h"
#include "MoRC_countDownTimer.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* waitAndRepeatTimer::triggerAction */ triggerAction;
  kcg_bool /* waitAndRepeatTimer::elapsed */ elapsed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* waitAndRepeatTimer::_L22 */ _L22;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_countDownTimer /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_waitAndRepeatTimer;

/* ===========  node initialization and cycle functions  =========== */
/** Implements a timer for a triggering an action a limited number of times in configured intervals. */
/** Repeats triggerAction maxNoOfRepetition times in intervals of repeatInterval. */
/** triggerAction is activated at the beginning of each interval. */
/** elapsed is activated after the last interval. */
/** "Remark_1" {Description = "- Name: waitAndRepeatTimer - Description: Implements a timer for a triggering an action a limited number of times in configured intervals - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* waitAndRepeatTimer */
extern void MoRC_waitAndRepeatTimer(
  /* waitAndRepeatTimer::actualTime */MoRC_time_Type actualTime,
  /* waitAndRepeatTimer::re_start */kcg_bool re_start,
  /* waitAndRepeatTimer::stop */kcg_bool stop,
  /* waitAndRepeatTimer::repeatInterval */MoRC_time_Type repeatInterval,
  /* waitAndRepeatTimer::maxNoOfRepetitions */kcg_int maxNoOfRepetitions,
  MoRC_outC_waitAndRepeatTimer *outC);

extern void MoRC_waitAndRepeatTimer_reset(MoRC_outC_waitAndRepeatTimer *outC);

#endif /* _MoRC_waitAndRepeatTimer_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_waitAndRepeatTimer.h
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */

