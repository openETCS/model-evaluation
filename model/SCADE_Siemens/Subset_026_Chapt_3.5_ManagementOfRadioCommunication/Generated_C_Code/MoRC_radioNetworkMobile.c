/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-05-15T14:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_radioNetworkMobile.h"

void MoRC_radioNetworkMobile_reset(MoRC_outC_radioNetworkMobile *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/** Subset 096, REQ 3.5.6.3.2, 3.5.6.5 */
/** Controls the registration to the radio network for a single mobile terminal. */
/** "Remark_1" {Description = "- Name: radioNetworkMobile - Description: Controls the registration to the radio network for a single mobile terminal.  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* radioNetworkMobile */
void MoRC_radioNetworkMobile(
  /* radioNetworkMobile::mobileHWStatus */MoRC_mobileHWStatus_Type *mobileHWStatus,
  /* radioNetworkMobile::mobileSWCmd */MoRC_mobileSWCmd_Type *mobileSWCmd,
  MoRC_outC_radioNetworkMobile *outC)
{
  kcg_bool tmp;
  /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */ MoRC_SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable;
  /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */ MoRC_SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable MobileSWConnection_SM_state_sel_MobileHW_available_SM_MobileHWAvailable;
  /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::ConnectedToTheRadioNetwork */ kcg_bool br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_ConnectedToTheRadioNetwork;
  /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::ConnectingToTheRadioNetwork */ kcg_bool br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_ConnectingToTheRadioNetwork;
  /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::RegisteredToTheRadioNetwork */ kcg_bool br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteredToTheRadioNetwork;
  /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::RegisteredToTheRadioNetwork */ kcg_bool br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteredToTheRadioNetwork;
  /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::RegisteringToTheRadioNetwork */ kcg_bool br_2_clock_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork;
  /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::RegisteringToTheRadioNetwork */ kcg_bool br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork;
  /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::RegisteringToTheRadioNetwork */ kcg_bool br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork;
  /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM::UnregisteredToTheRadioNetwork */ kcg_bool br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_UnregisteredToTheRadioNetwork;
  /* radioNetworkMobile::sHWDisconnect */ kcg_bool sHWDisconnect;
  /* radioNetworkMobile::sHWConnect */ kcg_bool sHWConnect;
  /* radioNetworkMobile::MobileHW_available_SM */ MoRC_SSM_ST_MobileHW_available_SM MobileHW_available_SM_state_sel;
  /* radioNetworkMobile::MobileHW_available_SM */ MoRC_SSM_ST_MobileHW_available_SM MobileHW_available_SM_state_act;
  /* radioNetworkMobile::hw_connectionStatus */ MoRC_mobileHWConnectionStatus_Type hw_connectionStatus;
  /* radioNetworkMobile::sw_cmd */ MoRC_mobileSWAction_Type sw_cmd;
  /* radioNetworkMobile::_L41 */ kcg_bool _L41;
  
  if (outC->init) {
    MobileHW_available_SM_state_sel =
      MoRC_SSM_st_InitialState_MobileHW_available_SM;
  }
  else {
    MobileHW_available_SM_state_sel = outC->MobileHW_available_SM_state_nxt;
  }
  if ((*mobileHWStatus).valid) {
    MoRC_kcg_copy_mobileHWStatus_Type(&outC->_L2, mobileHWStatus);
  }
  else if (outC->init) {
    MoRC_kcg_copy_mobileHWStatus_Type(
      &outC->_L2,
      (MoRC_mobileHWStatus_Type *) &MoRC_cInvalidMobileHWStatus);
  }
  switch (MobileHW_available_SM_state_sel) {
    case MoRC_SSM_st_MobileHWNotAvailable_MobileHW_available_SM :
      if (outC->_L2.valid) {
        MobileHW_available_SM_state_act =
          MoRC_SSM_st_MobileHWAvailable_MobileHW_available_SM;
      }
      else {
        MobileHW_available_SM_state_act =
          MoRC_SSM_st_MobileHWNotAvailable_MobileHW_available_SM;
      }
      br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_UnregisteredToTheRadioNetwork =
        outC->_L2.valid;
      break;
    case MoRC_SSM_st_MobileHWAvailable_MobileHW_available_SM :
      br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_UnregisteredToTheRadioNetwork =
        !outC->_L2.valid;
      if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_UnregisteredToTheRadioNetwork) {
        MobileHW_available_SM_state_act =
          MoRC_SSM_st_MobileHWNotAvailable_MobileHW_available_SM;
      }
      else {
        MobileHW_available_SM_state_act =
          MoRC_SSM_st_MobileHWAvailable_MobileHW_available_SM;
      }
      break;
    case MoRC_SSM_st_InitialState_MobileHW_available_SM :
      br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_UnregisteredToTheRadioNetwork =
        kcg_true;
      MobileHW_available_SM_state_act =
        MoRC_SSM_st_MobileHWNotAvailable_MobileHW_available_SM;
      break;
    
  }
  if ((*mobileSWCmd).valid) {
    MoRC_kcg_copy_mobileSWCmd_Type(&outC->_L18, mobileSWCmd);
  }
  else if (outC->init) {
    MoRC_kcg_copy_mobileSWCmd_Type(
      &outC->_L18,
      (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
  }
  if (outC->_L18.valid) {
    sw_cmd = outC->_L18.action;
  }
  else {
    sw_cmd = MoRC_mswa_nop;
  }
  if (outC->_L2.valid) {
    hw_connectionStatus = outC->_L2.connectionStatus;
  }
  else {
    hw_connectionStatus = MoRC_mhwc_notRegistered;
  }
  switch (MobileHW_available_SM_state_act) {
    case MoRC_SSM_st_InitialState_MobileHW_available_SM :
      _L41 = kcg_false;
      break;
    case MoRC_SSM_st_MobileHWAvailable_MobileHW_available_SM :
      if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_UnregisteredToTheRadioNetwork) {
        outC->init1 = kcg_true;
      }
      if (outC->init1) {
        MobileSWConnection_SM_state_sel_MobileHW_available_SM_MobileHWAvailable =
          MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
      }
      else {
        MobileSWConnection_SM_state_sel_MobileHW_available_SM_MobileHWAvailable =
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable;
      }
      switch (MobileSWConnection_SM_state_sel_MobileHW_available_SM_MobileHWAvailable) {
        case MoRC_SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          _L41 = kcg_false;
          break;
        case MoRC_SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          _L41 = kcg_false;
          break;
        case MoRC_SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          _L41 = kcg_false;
          break;
        case MoRC_SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          _L41 = kcg_false;
          break;
        case MoRC_SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          _L41 = kcg_false;
          break;
        case MoRC_SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork =
            hw_connectionStatus == MoRC_mhwc_registered;
          br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork =
            sw_cmd == MoRC_mswa_unregister;
          if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork) {
            _L41 = kcg_false;
          }
          else {
            br_2_clock_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork =
              br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork;
            if (br_2_clock_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork) {
              _L41 = kcg_false;
            }
            else {
              tmp = sw_cmd == MoRC_mswa_register;
              if (tmp) {
                _L41 = kcg_true;
              }
              else {
                _L41 = kcg_false;
              }
            }
          }
          break;
        case MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_UnregisteredToTheRadioNetwork =
            sw_cmd == MoRC_mswa_register;
          if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_UnregisteredToTheRadioNetwork) {
            _L41 = kcg_true;
          }
          else {
            _L41 = kcg_false;
          }
          break;
        
      }
      break;
    case MoRC_SSM_st_MobileHWNotAvailable_MobileHW_available_SM :
      _L41 = kcg_false;
      break;
    
  }
  if (_L41) {
    outC->registeredRadioNetworkID = outC->_L18.radioNetworkID;
  }
  else if (outC->init) {
    outC->registeredRadioNetworkID = MoRC_cInvalidRadioNetworkID_value;
  }
  outC->init = kcg_false;
  switch (MobileHW_available_SM_state_act) {
    case MoRC_SSM_st_InitialState_MobileHW_available_SM :
      MoRC_kcg_copy_mobileHWCmd_Type(
        &outC->mobileHWCmd,
        (MoRC_mobileHWCmd_Type *) &MoRC_cInvalidmobileHWCmd);
      MoRC_kcg_copy_mobileSWStatus_Type(
        &outC->mobileSWStatus,
        (MoRC_mobileSWStatus_Type *) &MoRC_cMobileSWStatus_noHW);
      outC->MobileHW_available_SM_state_nxt =
        MoRC_SSM_st_InitialState_MobileHW_available_SM;
      break;
    case MoRC_SSM_st_MobileHWAvailable_MobileHW_available_SM :
      outC->mobileSWStatus.valid = kcg_true;
      outC->mobileSWStatus.mobileHW_available = kcg_true;
      outC->mobileSWStatus.registeredRadioNetworkID =
        outC->registeredRadioNetworkID;
      outC->mobileSWStatus.settingUpConnectionHasFailed =
        (*mobileHWStatus).settingUpConnectionHasFailed;
      outC->mobileHWCmd.radioNetworkID = outC->_L18.radioNetworkID;
      switch (MobileSWConnection_SM_state_sel_MobileHW_available_SM_MobileHWAvailable) {
        case MoRC_SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          tmp = kcg_false;
          sHWDisconnect = kcg_false;
          sHWConnect = kcg_false;
          if (sw_cmd == MoRC_mswa_terminateRadioConnection) {
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              MoRC_SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else if (hw_connectionStatus == MoRC_mhwc_notRegistered) {
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else {
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              MoRC_SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          break;
        case MoRC_SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          tmp = kcg_false;
          sHWDisconnect = kcg_false;
          sHWConnect = kcg_false;
          MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
            MoRC_SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case MoRC_SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          tmp = kcg_false;
          sHWConnect = kcg_false;
          br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_ConnectedToTheRadioNetwork =
            sw_cmd == MoRC_mswa_disconnect;
          if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_ConnectedToTheRadioNetwork) {
            sHWDisconnect = kcg_true;
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              MoRC_SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else {
            sHWDisconnect = kcg_false;
            if (hw_connectionStatus == MoRC_mhwc_registered) {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                MoRC_SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
            else if (hw_connectionStatus == MoRC_mhwc_notRegistered) {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
            else if (sw_cmd == MoRC_mswa_establishRadioConnection) {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                MoRC_SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
            else {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                MoRC_SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
          }
          break;
        case MoRC_SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          tmp = kcg_false;
          sHWConnect = kcg_false;
          br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_ConnectingToTheRadioNetwork =
            sw_cmd == MoRC_mswa_disconnect;
          if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_ConnectingToTheRadioNetwork) {
            sHWDisconnect = kcg_true;
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              MoRC_SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else {
            sHWDisconnect = kcg_false;
            if (hw_connectionStatus == MoRC_mhwc_connected) {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                MoRC_SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
            else {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                MoRC_SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
          }
          break;
        case MoRC_SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          sHWDisconnect = kcg_false;
          br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteredToTheRadioNetwork =
            sw_cmd == MoRC_mswa_unregister;
          br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteredToTheRadioNetwork =
            sw_cmd == MoRC_mswa_connect;
          if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteredToTheRadioNetwork) {
            sHWConnect = kcg_false;
            tmp = kcg_true;
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else {
            tmp = kcg_false;
            if (br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteredToTheRadioNetwork) {
              sHWConnect = kcg_true;
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                MoRC_SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
            else {
              sHWConnect = kcg_false;
              if (hw_connectionStatus == MoRC_mhwc_notRegistered) {
                MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                  MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
              }
              else {
                MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                  MoRC_SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
              }
            }
          }
          break;
        case MoRC_SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          sHWDisconnect = kcg_false;
          sHWConnect = kcg_false;
          if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork) {
            tmp = kcg_false;
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              MoRC_SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else {
            if (br_2_clock_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork) {
              tmp = kcg_true;
            }
            else {
              tmp = kcg_false;
            }
            if (br_2_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_RegisteringToTheRadioNetwork) {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
            else {
              MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
                MoRC_SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
            }
          }
          break;
        case MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          tmp = kcg_false;
          sHWDisconnect = kcg_false;
          sHWConnect = kcg_false;
          if (br_1_guard_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM_UnregisteredToTheRadioNetwork) {
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              MoRC_SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          else {
            MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable =
              MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          }
          break;
        
      }
      outC->mobileHWCmd.valid = sHWConnect || sHWDisconnect || _L41 || tmp;
      if (tmp) {
        outC->mobileHWCmd.action = MoRC_mhwa_unregister;
      }
      else if (_L41) {
        outC->mobileHWCmd.action = MoRC_mhwa_register;
      }
      else if (sHWConnect) {
        outC->mobileHWCmd.action = MoRC_mhwa_connect;
      }
      else if (sHWDisconnect) {
        outC->mobileHWCmd.action = MoRC_mhwa_disconnect;
      }
      else {
        outC->mobileHWCmd.action = MoRC_mhwa_nop;
      }
      outC->MobileHW_available_SM_state_nxt =
        MoRC_SSM_st_MobileHWAvailable_MobileHW_available_SM;
      switch (MobileSWConnection_SM_state_act_MobileHW_available_SM_MobileHWAvailable) {
        case MoRC_SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus = MoRC_mswc_sessionEstablished;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            MoRC_SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case MoRC_SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus = MoRC_mswc_establishingSession;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            MoRC_SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case MoRC_SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus = MoRC_mswc_connected;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            MoRC_SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case MoRC_SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus = MoRC_mswc_connecting;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            MoRC_SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case MoRC_SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus = MoRC_mswc_registered;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            MoRC_SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case MoRC_SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus = MoRC_mswc_registering;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            MoRC_SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        case MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM :
          outC->mobileSWStatus.connectionStatus = MoRC_mswc_unregistered;
          outC->MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable =
            MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM;
          break;
        
      }
      outC->init1 = kcg_false;
      break;
    case MoRC_SSM_st_MobileHWNotAvailable_MobileHW_available_SM :
      MoRC_kcg_copy_mobileHWCmd_Type(
        &outC->mobileHWCmd,
        (MoRC_mobileHWCmd_Type *) &MoRC_cInvalidmobileHWCmd);
      MoRC_kcg_copy_mobileSWStatus_Type(
        &outC->mobileSWStatus,
        (MoRC_mobileSWStatus_Type *) &MoRC_cMobileSWStatus_noHW);
      outC->MobileHW_available_SM_state_nxt =
        MoRC_SSM_st_MobileHWNotAvailable_MobileHW_available_SM;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_radioNetworkMobile.c
** Generation date: 2013-05-15T14:10:00
*************************************************************$ */

