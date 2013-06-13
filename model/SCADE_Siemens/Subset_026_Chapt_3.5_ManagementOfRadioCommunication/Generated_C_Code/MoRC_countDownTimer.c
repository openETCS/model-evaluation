/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-06-05T16:29:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_countDownTimer.h"

void MoRC_countDownTimer_reset(MoRC_outC_countDownTimer *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/** The countDownTimer implements a generic timer function. */
/** "GdC_1" {Author = "Author : Uwe Steinke", DateC = "Created : 2012-10-15", DateM = "Modified : 2012-12-20", Version = "Version : 00.00.00.001"} */
/** "Remark_1" {Description = "- Name: countDownTimer - Description: Implements a generic Count Down Timer  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE. "} */
/* countDownTimer */
void MoRC_countDownTimer(
  /* countDownTimer::re_start */kcg_bool re_start,
  /* countDownTimer::stop */kcg_bool stop,
  /* countDownTimer::actualTime */MoRC_time_Type actualTime,
  /* countDownTimer::autoretrigger */kcg_bool autoretrigger,
  /* countDownTimer::interval */MoRC_time_Type interval,
  MoRC_outC_countDownTimer *outC)
{
  MoRC_SSM_TR_TimerStatus_SM tmp2;
  kcg_bool tmp1;
  kcg_bool tmp;
  /* countDownTimer::TimerStatus_SM::Counting */ kcg_bool Counting_weakb_clock_TimerStatus_SM;
  /* countDownTimer::TimerStatus_SM::Counting */ kcg_bool br_2_guard_TimerStatus_SM_Counting;
  /* countDownTimer::TimerStatus_SM::Expired */ kcg_bool br_2_guard_TimerStatus_SM_Expired;
  /* countDownTimer::TimerStatus_SM::Stopped */ kcg_bool br_2_guard_TimerStatus_SM_Stopped;
  /* countDownTimer::TimerStatus_SM */ MoRC_SSM_ST_TimerStatus_SM TimerStatus_SM_state_sel;
  /* countDownTimer::TimerStatus_SM */ MoRC_SSM_ST_TimerStatus_SM TimerStatus_SM_state_act;
  /* countDownTimer::TimerStatus_SM */ kcg_bool TimerStatus_SM_reset_sel;
  
  if (outC->init1) {
    TimerStatus_SM_state_sel = MoRC_SSM_st_Stopped_TimerStatus_SM;
  }
  else {
    TimerStatus_SM_state_sel = outC->TimerStatus_SM_state_nxt;
  }
  switch (TimerStatus_SM_state_sel) {
    case MoRC_SSM_st_Expired_TimerStatus_SM :
      if (stop) {
        TimerStatus_SM_state_act = MoRC_SSM_st_Stopped_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_state_act = MoRC_SSM_st_Expired_TimerStatus_SM;
      }
      TimerStatus_SM_reset_sel = stop;
      break;
    case MoRC_SSM_st_Counting_TimerStatus_SM :
      if (stop) {
        TimerStatus_SM_state_act = MoRC_SSM_st_Stopped_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_state_act = MoRC_SSM_st_Counting_TimerStatus_SM;
      }
      TimerStatus_SM_reset_sel = stop;
      break;
    case MoRC_SSM_st_Stopped_TimerStatus_SM :
      tmp = stop;
      br_2_guard_TimerStatus_SM_Stopped = re_start || autoretrigger;
      if (tmp) {
        TimerStatus_SM_state_act = MoRC_SSM_st_Stopped_TimerStatus_SM;
        TimerStatus_SM_reset_sel = kcg_true;
      }
      else {
        if (br_2_guard_TimerStatus_SM_Stopped) {
          TimerStatus_SM_state_act = MoRC_SSM_st_Counting_TimerStatus_SM;
        }
        else {
          TimerStatus_SM_state_act = MoRC_SSM_st_Stopped_TimerStatus_SM;
        }
        TimerStatus_SM_reset_sel = br_2_guard_TimerStatus_SM_Stopped;
      }
      break;
    
  }
  switch (TimerStatus_SM_state_act) {
    case MoRC_SSM_st_Counting_TimerStatus_SM :
      switch (TimerStatus_SM_state_sel) {
        case MoRC_SSM_st_Stopped_TimerStatus_SM :
          if (tmp) {
            tmp2 = MoRC_SSM_TR_Stopped_1_TimerStatus_SM;
          }
          else if (br_2_guard_TimerStatus_SM_Stopped) {
            tmp2 = MoRC_SSM_TR_Stopped_2_TimerStatus_SM;
          }
          else {
            tmp2 = MoRC_SSM_TR_no_trans_TimerStatus_SM;
          }
          break;
        case MoRC_SSM_st_Counting_TimerStatus_SM :
          if (stop) {
            tmp2 = MoRC_SSM_TR_Counting_1_TimerStatus_SM;
          }
          else {
            tmp2 = MoRC_SSM_TR_no_trans_TimerStatus_SM;
          }
          break;
        case MoRC_SSM_st_Expired_TimerStatus_SM :
          if (stop) {
            tmp2 = MoRC_SSM_TR_Expired_1_TimerStatus_SM;
          }
          else {
            tmp2 = MoRC_SSM_TR_no_trans_TimerStatus_SM;
          }
          break;
        
      }
      Counting_weakb_clock_TimerStatus_SM = tmp2 !=
        MoRC_SSM_TR_no_trans_TimerStatus_SM;
      if (TimerStatus_SM_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    
  }
  if (outC->init1) {
    outC->init1 = kcg_false;
    TimerStatus_SM_reset_sel = kcg_false;
  }
  else {
    TimerStatus_SM_reset_sel = outC->TimerStatus_SM_reset_nxt;
  }
  switch (TimerStatus_SM_state_sel) {
    case MoRC_SSM_st_Counting_TimerStatus_SM :
      if (TimerStatus_SM_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    
  }
  switch (TimerStatus_SM_state_act) {
    case MoRC_SSM_st_Stopped_TimerStatus_SM :
      outC->expired = kcg_false;
      outC->TimerStatus_SM_reset_nxt = kcg_false;
      outC->TimerStatus_SM_state_nxt = MoRC_SSM_st_Stopped_TimerStatus_SM;
      break;
    case MoRC_SSM_st_Counting_TimerStatus_SM :
      if (outC->init) {
        outC->_L4_TimerStatus_SM_Counting = actualTime;
      }
      outC->expired = actualTime - interval >=
        outC->_L4_TimerStatus_SM_Counting;
      if (Counting_weakb_clock_TimerStatus_SM) {
        outC->TimerStatus_SM_reset_nxt = kcg_false;
        outC->TimerStatus_SM_state_nxt = MoRC_SSM_st_Counting_TimerStatus_SM;
      }
      else {
        tmp1 = outC->expired && autoretrigger;
        br_2_guard_TimerStatus_SM_Counting = re_start;
        if (br_2_guard_TimerStatus_SM_Counting) {
          outC->TimerStatus_SM_reset_nxt = kcg_true;
          outC->TimerStatus_SM_state_nxt = MoRC_SSM_st_Counting_TimerStatus_SM;
        }
        else {
          TimerStatus_SM_reset_sel = tmp1;
          if (tmp1) {
            outC->TimerStatus_SM_reset_nxt = kcg_true;
            outC->TimerStatus_SM_state_nxt =
              MoRC_SSM_st_Counting_TimerStatus_SM;
          }
          else {
            outC->TimerStatus_SM_reset_nxt = outC->expired;
            if (outC->expired) {
              outC->TimerStatus_SM_state_nxt =
                MoRC_SSM_st_Expired_TimerStatus_SM;
            }
            else {
              outC->TimerStatus_SM_state_nxt =
                MoRC_SSM_st_Counting_TimerStatus_SM;
            }
          }
        }
      }
      break;
    case MoRC_SSM_st_Expired_TimerStatus_SM :
      outC->expired = kcg_true;
      br_2_guard_TimerStatus_SM_Expired = re_start || autoretrigger;
      outC->TimerStatus_SM_reset_nxt = br_2_guard_TimerStatus_SM_Expired;
      if (br_2_guard_TimerStatus_SM_Expired) {
        outC->TimerStatus_SM_state_nxt = MoRC_SSM_st_Counting_TimerStatus_SM;
      }
      else {
        outC->TimerStatus_SM_state_nxt = MoRC_SSM_st_Expired_TimerStatus_SM;
      }
      break;
    
  }
  switch (TimerStatus_SM_state_sel) {
    case MoRC_SSM_st_Stopped_TimerStatus_SM :
      if (tmp) {
        tmp1 = kcg_false;
      }
      else if (br_2_guard_TimerStatus_SM_Stopped) {
        tmp1 = kcg_true;
      }
      else {
        tmp1 = kcg_false;
      }
      break;
    case MoRC_SSM_st_Counting_TimerStatus_SM :
      tmp1 = kcg_false;
      break;
    case MoRC_SSM_st_Expired_TimerStatus_SM :
      tmp1 = kcg_false;
      break;
    
  }
  switch (TimerStatus_SM_state_act) {
    case MoRC_SSM_st_Expired_TimerStatus_SM :
      if (br_2_guard_TimerStatus_SM_Expired) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
      break;
    case MoRC_SSM_st_Counting_TimerStatus_SM :
      if (Counting_weakb_clock_TimerStatus_SM) {
        tmp = kcg_false;
      }
      else if (br_2_guard_TimerStatus_SM_Counting) {
        tmp = kcg_true;
      }
      else if (TimerStatus_SM_reset_sel) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
      outC->init = kcg_false;
      break;
    case MoRC_SSM_st_Stopped_TimerStatus_SM :
      tmp = kcg_false;
      break;
    
  }
  outC->started = tmp1 || tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_countDownTimer.c
** Generation date: 2013-06-05T16:29:47
*************************************************************$ */

