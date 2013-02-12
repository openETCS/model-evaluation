/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */
#ifndef _MoRC_KCG_TYPES_H_
#define _MoRC_KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef unsigned char kcg_char;
#endif /* kcg_char */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* truthtables::TruthTableValues */
typedef enum {
  MoRC_T_truthtables,
  MoRC_F_truthtables,
  MoRC_X_truthtables
} MoRC_TruthTableValues_truthtables;
/* ETCS_Mode_Type */
typedef enum {
  MoRC_ETCS_Mode_x,
  MoRC_ETCS_Mode_y,
  MoRC_ETCS_Mode_EndOfMission
} MoRC_ETCS_Mode_Type;
/* ETCS_Level_Type */
typedef enum {
  MoRC_ETCS_Level_1,
  MoRC_ETCS_Level_2,
  MoRC_ETCS_Level_3
} MoRC_ETCS_Level_Type;
/* mobileHWConnectionStatus_Type */
typedef enum {
  MoRC_mhwc_notRegistered,
  MoRC_mhwc_registered,
  MoRC_mhwc_connectionSetupInProgress,
  MoRC_mhwc_connected
} MoRC_mobileHWConnectionStatus_Type;
/* mobileSWAction_Type */
typedef enum {
  MoRC_mswa_nop,
  MoRC_mswa_register,
  MoRC_mswa_connect,
  MoRC_mswa_establishRadioConnection,
  MoRC_mswa_terminateRadioConnection,
  MoRC_mswa_disconnect,
  MoRC_mswa_unregister
} MoRC_mobileSWAction_Type;
/* mobileHWAction_Type */
typedef enum {
  MoRC_mhwa_nop,
  MoRC_mhwa_register,
  MoRC_mhwa_connect,
  MoRC_mhwa_disconnect,
  MoRC_mhwa_unregister
} MoRC_mobileHWAction_Type;
/* mobileSWConnectionStatus_Type */
typedef enum {
  MoRC_mswc_unregistered,
  MoRC_mswc_registering,
  MoRC_mswc_registered,
  MoRC_mswc_connecting,
  MoRC_mswc_connected,
  MoRC_mswc_establishingSession,
  MoRC_mswc_sessionEstablished
} MoRC_mobileSWConnectionStatus_Type;
/* safeRadioConnectionStatus_Type */
typedef enum {
  MoRC_srcs_NoConnection,
  MoRC_srcs_ConnectionLost_SetupFailed,
  MoRC_srcs_ConnectionUp
} MoRC_safeRadioConnectionStatus_Type;
/* morc_RBC_action_Type */
typedef enum {
  MoRC_morc_rbca_noAction,
  MoRC_morc_rbca_establishSession,
  MoRC_morc_rbca_terminateSesssion
} MoRC_morc_RBC_action_Type;
/* sessionStatus_Type */
typedef enum {
  MoRC_morc_st_inactive,
  MoRC_morc_st_establishing,
  MoRC_morc_st_maintaining,
  MoRC_morc_st_terminating
} MoRC_sessionStatus_Type;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_Idle_1_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_Idle_2_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByOBU_1_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByOBU_2_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_WaitForSystemVersionFromTrackSide_1_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_WaitForSystemVersionFromTrackSide_2_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_NoCompatibleSystemVersionSupported_1_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByTrackside_1_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_TR_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_1_EstablishmentOfACommunicationSession_SM
} MoRC_SSM_TR_EstablishmentOfACommunicationSession_SM;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM */
typedef enum {
  MoRC_SSM_st_Idle_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM,
  MoRC_SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM
} MoRC_SSM_ST_EstablishmentOfACommunicationSession_SM;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  MoRC_SSM_TR_Start_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  MoRC_SSM_TR_Start_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  MoRC_SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  MoRC_SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  MoRC_SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  MoRC_SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU
} MoRC_SSM_TR_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
typedef enum {
  MoRC_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  MoRC_SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  MoRC_SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  MoRC_SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  MoRC_SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM
} MoRC_SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPar,
  MoRC_SSM_TR_Start_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPart,
  MoRC_SSM_TR_Retry_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPart
} MoRC_SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartO;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum {
  MoRC_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetu,
  MoRC_SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetu
} MoRC_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartO;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNot,
  MoRC_SSM_TR_Start_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotP,
  MoRC_SSM_TR_Retry_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotP
} MoRC_SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfSta;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum {
  MoRC_SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatS,
  MoRC_SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatS
} MoRC_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfSta;
/* countDownTimer::TimerStatus_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_TimerStatus_SM,
  MoRC_SSM_TR_Stopped_1_TimerStatus_SM,
  MoRC_SSM_TR_Stopped_2_TimerStatus_SM,
  MoRC_SSM_TR_Counting_1_TimerStatus_SM,
  MoRC_SSM_TR_Counting_2_TimerStatus_SM,
  MoRC_SSM_TR_Counting_3_TimerStatus_SM,
  MoRC_SSM_TR_Counting_4_TimerStatus_SM,
  MoRC_SSM_TR_Expired_1_TimerStatus_SM,
  MoRC_SSM_TR_Expired_2_TimerStatus_SM
} MoRC_SSM_TR_TimerStatus_SM;
/* countDownTimer::TimerStatus_SM */
typedef enum {
  MoRC_SSM_st_Stopped_TimerStatus_SM,
  MoRC_SSM_st_Counting_TimerStatus_SM,
  MoRC_SSM_st_Expired_TimerStatus_SM
} MoRC_SSM_ST_TimerStatus_SM;
/* maintaining_a_CommunicationSession::Maintaining_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_Maintaining_SM,
  MoRC_SSM_TR_CommunicationSessionNotEstablished_1_Maintaining_SM,
  MoRC_SSM_TR_CommunicationSessionEstablished_1_Maintaining_SM
} MoRC_SSM_TR_Maintaining_SM;
/* maintaining_a_CommunicationSession::Maintaining_SM */
typedef enum {
  MoRC_SSM_st_CommunicationSessionNotEstablished_Maintaining_SM,
  MoRC_SSM_st_CommunicationSessionEstablished_Maintaining_SM
} MoRC_SSM_ST_Maintaining_SM;
/* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  MoRC_SSM_TR_SafeRadio_connected_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  MoRC_SSM_TR_SafeRadio_connected_2_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  MoRC_SSM_TR_ConnectionLost_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  MoRC_SSM_TR_ConnectionLost_2_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  MoRC_SSM_TR_ConnecctionLostInAnnouncedRadioHole_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished
} MoRC_SSM_TR_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished;
/* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
typedef enum {
  MoRC_SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  MoRC_SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  MoRC_SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  MoRC_SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM
} MoRC_SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished;
/* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_TerminateTheCommunicationSession_SM,
  MoRC_SSM_TR_Idle_1_TerminateTheCommunicationSession_SM,
  MoRC_SSM_TR_Idle_2_TerminateTheCommunicationSession_SM,
  MoRC_SSM_TR_WaitForAcknowledgementMessage_1_TerminateTheCommunicationSession_SM,
  MoRC_SSM_TR_EstablishingACommunicationSessionAborted_1_TerminateTheCommunicationSession_SM
} MoRC_SSM_TR_TerminateTheCommunicationSession_SM;
/* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
typedef enum {
  MoRC_SSM_st_Idle_TerminateTheCommunicationSession_SM,
  MoRC_SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM,
  MoRC_SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM,
  MoRC_SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM
} MoRC_SSM_ST_TerminateTheCommunicationSession_SM;
/* radioNetworkMobile::MobileHW_available_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_MobileHW_available_SM,
  MoRC_SSM_TR_MobileHWNotAvailable_1_MobileHW_available_SM,
  MoRC_SSM_TR_MobileHWAvailable_1_MobileHW_available_SM,
  MoRC_SSM_TR_InitialState_1_MobileHW_available_SM
} MoRC_SSM_TR_MobileHW_available_SM;
/* radioNetworkMobile::MobileHW_available_SM */
typedef enum {
  MoRC_SSM_st_MobileHWNotAvailable_MobileHW_available_SM,
  MoRC_SSM_st_MobileHWAvailable_MobileHW_available_SM,
  MoRC_SSM_st_InitialState_MobileHW_available_SM
} MoRC_SSM_ST_MobileHW_available_SM;
/* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_UnregisteredToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_RegisteringToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_RegisteringToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_RegisteringToTheRadioNetwork_3_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_RegisteredToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_RegisteredToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_RegisteredToTheRadioNetwork_3_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_ConnectingToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_ConnectingToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_ConnectedToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_ConnectedToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_ConnectedToTheRadioNetwork_3_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_ConnectedToTheRadioNetwork_4_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_EstablishingASession_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_SessionEstablished_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  MoRC_SSM_TR_SessionEstablished_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable
} MoRC_SSM_TR_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable;
/* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */
typedef enum {
  MoRC_SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  MoRC_SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  MoRC_SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  MoRC_SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  MoRC_SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  MoRC_SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  MoRC_SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM
} MoRC_SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable;
/* safeRadioConnectionIndication::connectionStatus_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_connectionStatus_SM,
  MoRC_SSM_TR_NoConnection_1_connectionStatus_SM,
  MoRC_SSM_TR_NoConnection_2_connectionStatus_SM,
  MoRC_SSM_TR_ConnectionLost_SetupFailed_1_connectionStatus_SM,
  MoRC_SSM_TR_ConnectionLost_SetupFailed_2_connectionStatus_SM,
  MoRC_SSM_TR_ConnectionUp_1_connectionStatus_SM,
  MoRC_SSM_TR_ConnectionUp_2_connectionStatus_SM
} MoRC_SSM_TR_connectionStatus_SM;
/* safeRadioConnectionIndication::connectionStatus_SM */
typedef enum {
  MoRC_SSM_st_NoConnection_connectionStatus_SM,
  MoRC_SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM,
  MoRC_SSM_st_ConnectionUp_connectionStatus_SM
} MoRC_SSM_ST_connectionStatus_SM;
/* initiateTerminatingASession::TrainExitedFromRBCArea_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_TrainExitedFromRBCArea_SM,
  MoRC_SSM_TR_Idle_1_TrainExitedFromRBCArea_SM,
  MoRC_SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM,
  MoRC_SSM_TR_WaitForOrderToTerminateTheSession_2_TrainExitedFromRBCArea_SM
} MoRC_SSM_TR_TrainExitedFromRBCArea_SM;
/* initiateTerminatingASession::TrainExitedFromRBCArea_SM */
typedef enum {
  MoRC_SSM_st_Idle_TrainExitedFromRBCArea_SM,
  MoRC_SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM
} MoRC_SSM_ST_TrainExitedFromRBCArea_SM;
/* terminateAndEstablishSession::SM1 */
typedef enum {
  MoRC_SSM_TR_no_trans_SM1,
  MoRC_SSM_TR_NoTerminationInProgress_1_SM1,
  MoRC_SSM_TR_TerminationInProgress_1_SM1,
  MoRC_SSM_TR_EstablishNewSession_1_SM1
} MoRC_SSM_TR_SM1;
/* terminateAndEstablishSession::SM1 */
typedef enum {
  MoRC_SSM_st_NoTerminationInProgress_SM1,
  MoRC_SSM_st_TerminationInProgress_SM1,
  MoRC_SSM_st_EstablishNewSession_SM1
} MoRC_SSM_ST_SM1;
/* managementOfRadioCommunication::CommunicationSession_SM */
typedef enum {
  MoRC_SSM_TR_no_trans_CommunicationSession_SM,
  MoRC_SSM_TR_NoSession_1_CommunicationSession_SM,
  MoRC_SSM_TR_Establishing_1_CommunicationSession_SM,
  MoRC_SSM_TR_Establishing_2_CommunicationSession_SM,
  MoRC_SSM_TR_Maintaining_1_CommunicationSession_SM,
  MoRC_SSM_TR_Terminating_1_CommunicationSession_SM
} MoRC_SSM_TR_CommunicationSession_SM;
/* managementOfRadioCommunication::CommunicationSession_SM */
typedef enum {
  MoRC_SSM_st_NoSession_CommunicationSession_SM,
  MoRC_SSM_st_Establishing_CommunicationSession_SM,
  MoRC_SSM_st_Maintaining_CommunicationSession_SM,
  MoRC_SSM_st_Terminating_CommunicationSession_SM
} MoRC_SSM_ST_CommunicationSession_SM;
/* rbc_id_Type */
typedef kcg_int MoRC_rbc_id_Type;

/* rbc_phoneNo_Type */
typedef kcg_int MoRC_rbc_phoneNo_Type;

/* time_Type */
typedef kcg_int MoRC_time_Type;

/* radioNetworkID_Type */
typedef kcg_int MoRC_radioNetworkID_Type;

typedef struct {
  kcg_bool valid;
  MoRC_rbc_id_Type rbc_id;
  MoRC_rbc_phoneNo_Type telephoneNoOfTheRBC;
  MoRC_morc_RBC_action_Type actionToBePerformed;
  kcg_bool appliesAlsoToSleepingUnits;
} MoRC_struct__9895;

/* orderToContactAnRBC_Type */
typedef MoRC_struct__9895 MoRC_orderToContactAnRBC_Type;

typedef struct {
  kcg_bool valid;
  MoRC_safeRadioConnectionStatus_Type status;
} MoRC_struct__9903;

/* safeRadioConnectionStatusValid_Type */
typedef MoRC_struct__9903 MoRC_safeRadioConnectionStatusValid_Type;

typedef struct {
  kcg_bool valid;
  kcg_bool mobileHW_available;
  MoRC_mobileSWConnectionStatus_Type connectionStatus;
  MoRC_radioNetworkID_Type registeredRadioNetworkID;
  kcg_bool settingUpConnectionHasFailed;
} MoRC_struct__9908;

/* mobileSWStatus_Type */
typedef MoRC_struct__9908 MoRC_mobileSWStatus_Type;

typedef struct {
  kcg_bool valid;
  MoRC_mobileHWAction_Type action;
  MoRC_radioNetworkID_Type radioNetworkID;
} MoRC_struct__9916;

/* mobileHWCmd_Type */
typedef MoRC_struct__9916 MoRC_mobileHWCmd_Type;

typedef struct {
  kcg_bool valid;
  MoRC_mobileSWAction_Type action;
  MoRC_radioNetworkID_Type radioNetworkID;
} MoRC_struct__9922;

/* mobileSWCmd_Type */
typedef MoRC_struct__9922 MoRC_mobileSWCmd_Type;

typedef struct {
  kcg_bool valid;
  MoRC_mobileHWConnectionStatus_Type connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
} MoRC_struct__9928;

/* mobileHWStatus_Type */
typedef MoRC_struct__9928 MoRC_mobileHWStatus_Type;

typedef struct {
  kcg_bool valid;
  MoRC_radioNetworkID_Type radioNetworkID;
} MoRC_struct__9934;

/* validRadioNetworkID_Type */
typedef MoRC_struct__9934 MoRC_validRadioNetworkID_Type;

typedef struct { kcg_int k; kcg_real f; } MoRC_struct__9939;

/* lut::LutIndex */
typedef MoRC_struct__9939 MoRC_LutIndex_lut;

typedef struct {
  kcg_bool valid;
  MoRC_mobileHWConnectionStatus_Type connectionStatus;
} MoRC_struct__9944;

/* RadioNetworkMobileHWStatusType */
typedef MoRC_struct__9944 MoRC_RadioNetworkMobileHWStatusType;

typedef struct {
  kcg_bool valid;
  MoRC_rbc_id_Type radioInFillUnit_id;
  MoRC_rbc_phoneNo_Type telephoneNoOfTheRadioInfillUnit;
  MoRC_morc_RBC_action_Type actionToBePerformed;
} MoRC_struct__9949;

/* orderToContactARadioInfillUnit_Type */
typedef MoRC_struct__9949 MoRC_orderToContactARadioInfillUnit_Type;

typedef struct {
  kcg_bool valid;
  MoRC_rbc_id_Type rbc_id;
  MoRC_rbc_phoneNo_Type telephoneNoOfTheRBC;
  kcg_bool appliesAlsoToSleepingUnits;
} MoRC_struct__9956;

/* orderToContactAnAcceptingRBC_Type */
typedef MoRC_struct__9956 MoRC_orderToContactAnAcceptingRBC_Type;

typedef struct {
  kcg_bool valid;
  MoRC_orderToContactAnAcceptingRBC_Type orderToContactAnAcceptingRBC;
} MoRC_struct__9963;

/* rbc_TransitionOrder_Type */
typedef MoRC_struct__9963 MoRC_rbc_TransitionOrder_Type;

#ifndef MoRC_kcg_copy_struct__9895
#define MoRC_kcg_copy_struct__9895(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__9895)))
#endif /* MoRC_kcg_copy_struct__9895 */

#ifndef MoRC_kcg_copy_struct__9903
#define MoRC_kcg_copy_struct__9903(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__9903)))
#endif /* MoRC_kcg_copy_struct__9903 */

#ifndef MoRC_kcg_copy_struct__9908
#define MoRC_kcg_copy_struct__9908(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__9908)))
#endif /* MoRC_kcg_copy_struct__9908 */

#ifndef MoRC_kcg_copy_struct__9916
#define MoRC_kcg_copy_struct__9916(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__9916)))
#endif /* MoRC_kcg_copy_struct__9916 */

#ifndef MoRC_kcg_copy_struct__9922
#define MoRC_kcg_copy_struct__9922(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__9922)))
#endif /* MoRC_kcg_copy_struct__9922 */

#ifndef MoRC_kcg_copy_struct__9928
#define MoRC_kcg_copy_struct__9928(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__9928)))
#endif /* MoRC_kcg_copy_struct__9928 */

#ifndef MoRC_kcg_copy_struct__9934
#define MoRC_kcg_copy_struct__9934(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__9934)))
#endif /* MoRC_kcg_copy_struct__9934 */

#ifndef MoRC_kcg_copy_struct__9939
#define MoRC_kcg_copy_struct__9939(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__9939)))
#endif /* MoRC_kcg_copy_struct__9939 */

#ifndef MoRC_kcg_copy_struct__9944
#define MoRC_kcg_copy_struct__9944(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__9944)))
#endif /* MoRC_kcg_copy_struct__9944 */

#ifndef MoRC_kcg_copy_struct__9949
#define MoRC_kcg_copy_struct__9949(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__9949)))
#endif /* MoRC_kcg_copy_struct__9949 */

#ifndef MoRC_kcg_copy_struct__9956
#define MoRC_kcg_copy_struct__9956(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__9956)))
#endif /* MoRC_kcg_copy_struct__9956 */

#ifndef MoRC_kcg_copy_struct__9963
#define MoRC_kcg_copy_struct__9963(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__9963)))
#endif /* MoRC_kcg_copy_struct__9963 */

#ifndef MoRC_kcg_comp_struct__9895
extern kcg_bool MoRC_kcg_comp_struct__9895(
  MoRC_struct__9895 *kcg_c1,
  MoRC_struct__9895 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__9895 */

#ifndef MoRC_kcg_comp_struct__9903
extern kcg_bool MoRC_kcg_comp_struct__9903(
  MoRC_struct__9903 *kcg_c1,
  MoRC_struct__9903 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__9903 */

#ifndef MoRC_kcg_comp_struct__9908
extern kcg_bool MoRC_kcg_comp_struct__9908(
  MoRC_struct__9908 *kcg_c1,
  MoRC_struct__9908 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__9908 */

#ifndef MoRC_kcg_comp_struct__9916
extern kcg_bool MoRC_kcg_comp_struct__9916(
  MoRC_struct__9916 *kcg_c1,
  MoRC_struct__9916 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__9916 */

#ifndef MoRC_kcg_comp_struct__9922
extern kcg_bool MoRC_kcg_comp_struct__9922(
  MoRC_struct__9922 *kcg_c1,
  MoRC_struct__9922 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__9922 */

#ifndef MoRC_kcg_comp_struct__9928
extern kcg_bool MoRC_kcg_comp_struct__9928(
  MoRC_struct__9928 *kcg_c1,
  MoRC_struct__9928 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__9928 */

#ifndef MoRC_kcg_comp_struct__9934
extern kcg_bool MoRC_kcg_comp_struct__9934(
  MoRC_struct__9934 *kcg_c1,
  MoRC_struct__9934 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__9934 */

#ifndef MoRC_kcg_comp_struct__9939
extern kcg_bool MoRC_kcg_comp_struct__9939(
  MoRC_struct__9939 *kcg_c1,
  MoRC_struct__9939 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__9939 */

#ifndef MoRC_kcg_comp_struct__9944
extern kcg_bool MoRC_kcg_comp_struct__9944(
  MoRC_struct__9944 *kcg_c1,
  MoRC_struct__9944 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__9944 */

#ifndef MoRC_kcg_comp_struct__9949
extern kcg_bool MoRC_kcg_comp_struct__9949(
  MoRC_struct__9949 *kcg_c1,
  MoRC_struct__9949 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__9949 */

#ifndef MoRC_kcg_comp_struct__9956
extern kcg_bool MoRC_kcg_comp_struct__9956(
  MoRC_struct__9956 *kcg_c1,
  MoRC_struct__9956 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__9956 */

#ifndef MoRC_kcg_comp_struct__9963
extern kcg_bool MoRC_kcg_comp_struct__9963(
  MoRC_struct__9963 *kcg_c1,
  MoRC_struct__9963 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__9963 */

#define MoRC_kcg_comp_orderToContactAnRBC_Type MoRC_kcg_comp_struct__9895

#define MoRC_kcg_copy_orderToContactAnRBC_Type MoRC_kcg_copy_struct__9895

#define MoRC_kcg_comp_safeRadioConnectionStatusValid_Type MoRC_kcg_comp_struct__9903

#define MoRC_kcg_copy_safeRadioConnectionStatusValid_Type MoRC_kcg_copy_struct__9903

#define MoRC_kcg_comp_mobileSWStatus_Type MoRC_kcg_comp_struct__9908

#define MoRC_kcg_copy_mobileSWStatus_Type MoRC_kcg_copy_struct__9908

#define MoRC_kcg_comp_mobileHWStatus_Type MoRC_kcg_comp_struct__9928

#define MoRC_kcg_copy_mobileHWStatus_Type MoRC_kcg_copy_struct__9928

#define MoRC_kcg_comp_mobileSWCmd_Type MoRC_kcg_comp_struct__9922

#define MoRC_kcg_copy_mobileSWCmd_Type MoRC_kcg_copy_struct__9922

#define MoRC_kcg_comp_LutIndex_lut MoRC_kcg_comp_struct__9939

#define MoRC_kcg_copy_LutIndex_lut MoRC_kcg_copy_struct__9939

#define MoRC_kcg_comp_mobileHWCmd_Type MoRC_kcg_comp_struct__9916

#define MoRC_kcg_copy_mobileHWCmd_Type MoRC_kcg_copy_struct__9916

#define MoRC_kcg_comp_RadioNetworkMobileHWStatusType MoRC_kcg_comp_struct__9944

#define MoRC_kcg_copy_RadioNetworkMobileHWStatusType MoRC_kcg_copy_struct__9944

#define MoRC_kcg_comp_validRadioNetworkID_Type MoRC_kcg_comp_struct__9934

#define MoRC_kcg_copy_validRadioNetworkID_Type MoRC_kcg_copy_struct__9934

#define MoRC_kcg_comp_orderToContactARadioInfillUnit_Type MoRC_kcg_comp_struct__9949

#define MoRC_kcg_copy_orderToContactARadioInfillUnit_Type MoRC_kcg_copy_struct__9949

#define MoRC_kcg_comp_rbc_TransitionOrder_Type MoRC_kcg_comp_struct__9963

#define MoRC_kcg_copy_rbc_TransitionOrder_Type MoRC_kcg_copy_struct__9963

#define MoRC_kcg_comp_orderToContactAnAcceptingRBC_Type MoRC_kcg_comp_struct__9956

#define MoRC_kcg_copy_orderToContactAnAcceptingRBC_Type MoRC_kcg_copy_struct__9956

#endif /* _MoRC_KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */

