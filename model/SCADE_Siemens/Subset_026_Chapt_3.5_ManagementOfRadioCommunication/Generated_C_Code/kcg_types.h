/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-05-15T14:10:00
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

/* Q_RBC_Type */
typedef enum {
  MoRC_q_rbc_terminateCommunicationSession,
  MoRC_q_rbc_establishCommunicationSession
} MoRC_Q_RBC_Type;
/* Q_DIR_Type */
typedef enum {
  MoRC_q_dir_reverse,
  MoRC_q_dir_nominal,
  MoRC_q_dir_bothDirections,
  MoRC_q_dir_spare
} MoRC_Q_DIR_Type;
/* Q_SLEEPSESSION_Type */
typedef enum {
  MoRC_q_sleepsession_ignoreSessionEstablishmentOrder,
  MoRC_q_sleepsession_executeSessionEstablishmentOrder
} MoRC_Q_SLEEPSESSION_Type;
/* M_ACK_Type */
typedef enum {
  MoRC_M_ACK_NoAckRequired,
  MoRC_M_ACK_AckRequired
} MoRC_M_ACK_Type;
/* truthtables::TruthTableValues */
typedef enum {
  MoRC_T_truthtables,
  MoRC_F_truthtables,
  MoRC_X_truthtables
} MoRC_TruthTableValues_truthtables;
/* radioHoleStatus_Type */
typedef enum {
  MoRC_rhs_none,
  MoRC_rhs_end,
  MoRC_rhs_begin,
  MoRC_rhs_inside
} MoRC_radioHoleStatus_Type;
/* onBoardOrder_Type */
typedef enum {
  MoRC_obo_noOrder,
  MoRC_obo_initiateCommunication,
  MoRC_obo_terminateCommunication
} MoRC_onBoardOrder_Type;
/* M_MODE_Type */
typedef enum {
  MoRC_ETCS_Mode_FullSupervision,
  MoRC_ETCS_Mode_OnSight,
  MoRC_ETCS_Mode_StaffResponsible,
  MoRC_ETCS_Mode_Shunting,
  MoRC_ETCS_Mode_Unfitted,
  MoRC_ETCS_Mode_Sleeping,
  MoRC_ETCS_Mode_StandBy,
  MoRC_ETCS_Mode_Trip,
  MoRC_ETCS_Mode_PostTrip,
  MoRC_ETCS_Mode_SystemFailure,
  MoRC_ETCS_Mode_Isolation,
  MoRC_ETCS_Mode_NonLeading,
  MoRC_ETCS_Mode_LimitedSupervision,
  MoRC_ETCS_Mode_NationalSystem,
  MoRC_ETCS_Mode_Reversing,
  MoRC_ETCS_Mode_PassiveShunting,
  MoRC_ETCS_Mode_EndOfMission
} MoRC_M_MODE_Type;
/* M_LEVEL_Type */
typedef enum {
  MoRC_ETCS_Level_0,
  MoRC_ETCS_Level_NTC,
  MoRC_ETCS_Level_1,
  MoRC_ETCS_Level_2,
  MoRC_ETCS_Level_3
} MoRC_M_LEVEL_Type;
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
/* MoRC_withSimplified_IF::PowerUpSequencer */
typedef enum {
  MoRC_SSM_TR_no_trans_PowerUpSequencer,
  MoRC_SSM_TR_TheVeryFirstCycle_1_PowerUpSequencer,
  MoRC_SSM_TR_AtPowerUpState_1_PowerUpSequencer
} MoRC_SSM_TR_PowerUpSequencer;
/* MoRC_withSimplified_IF::PowerUpSequencer */
typedef enum {
  MoRC_SSM_st_TheVeryFirstCycle_PowerUpSequencer,
  MoRC_SSM_st_AtPowerUpState_PowerUpSequencer,
  MoRC_SSM_st_AfterPowerUp_PowerUpSequencer
} MoRC_SSM_ST_PowerUpSequencer;
/* rbc_id_Type */
typedef kcg_int MoRC_rbc_id_Type;

/* rbc_phoneNo_Type */
typedef kcg_int MoRC_rbc_phoneNo_Type;

/* time_Type */
typedef kcg_int MoRC_time_Type;

/* radioNetworkID_Type */
typedef kcg_int MoRC_radioNetworkID_Type;

/* NID_PACKET_Type */
typedef kcg_int MoRC_NID_PACKET_Type;

/* NID_C_Type */
typedef kcg_int MoRC_NID_C_Type;

/* NID_RBC_Type */
typedef kcg_int MoRC_NID_RBC_Type;

/* NID_RADIO_Type */
typedef kcg_int MoRC_NID_RADIO_Type;

/* NID_MESSAGE_Type */
typedef kcg_int MoRC_NID_MESSAGE_Type;

/* T_TRAIN_Type */
typedef kcg_int MoRC_T_TRAIN_Type;

/* NID_LRBG_Type */
typedef kcg_int MoRC_NID_LRBG_Type;

/* D_RBCTR_Type */
typedef kcg_int MoRC_D_RBCTR_Type;

/* NID_ENGINE_Type */
typedef kcg_int MoRC_NID_ENGINE_Type;

typedef struct {
  kcg_bool valid;
  MoRC_rbc_id_Type rbc_id;
  MoRC_rbc_phoneNo_Type telephoneNoOfTheRBC;
  MoRC_morc_RBC_action_Type actionToBePerformed;
  kcg_bool appliesAlsoToSleepingUnits;
} MoRC_struct__10799;

/* orderToContactAnRBC_Type */
typedef MoRC_struct__10799 MoRC_orderToContactAnRBC_Type;

typedef struct {
  kcg_bool valid;
  MoRC_safeRadioConnectionStatus_Type status;
} MoRC_struct__10807;

/* safeRadioConnectionStatusValid_Type */
typedef MoRC_struct__10807 MoRC_safeRadioConnectionStatusValid_Type;

typedef struct {
  kcg_bool valid;
  kcg_bool mobileHW_available;
  MoRC_mobileSWConnectionStatus_Type connectionStatus;
  MoRC_radioNetworkID_Type registeredRadioNetworkID;
  kcg_bool settingUpConnectionHasFailed;
} MoRC_struct__10812;

/* mobileSWStatus_Type */
typedef MoRC_struct__10812 MoRC_mobileSWStatus_Type;

typedef struct {
  kcg_bool valid;
  MoRC_mobileHWAction_Type action;
  MoRC_radioNetworkID_Type radioNetworkID;
} MoRC_struct__10820;

/* mobileHWCmd_Type */
typedef MoRC_struct__10820 MoRC_mobileHWCmd_Type;

typedef struct {
  kcg_bool valid;
  MoRC_mobileSWAction_Type action;
  MoRC_radioNetworkID_Type radioNetworkID;
} MoRC_struct__10826;

/* mobileSWCmd_Type */
typedef MoRC_struct__10826 MoRC_mobileSWCmd_Type;

typedef struct {
  kcg_bool valid;
  MoRC_mobileHWConnectionStatus_Type connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
} MoRC_struct__10832;

/* mobileHWStatus_Type */
typedef MoRC_struct__10832 MoRC_mobileHWStatus_Type;

typedef struct {
  kcg_bool valid;
  MoRC_radioNetworkID_Type radioNetworkID;
} MoRC_struct__10838;

/* validRadioNetworkID_Type */
typedef MoRC_struct__10838 MoRC_validRadioNetworkID_Type;

typedef struct { kcg_int k; kcg_real f; } MoRC_struct__10843;

/* lut::LutIndex */
typedef MoRC_struct__10843 MoRC_LutIndex_lut;

typedef struct {
  kcg_int firstNumber;
  kcg_int secondNumber;
} MoRC_struct__10848;

/* M_VERSION_Type */
typedef MoRC_struct__10848 MoRC_M_VERSION_Type;

typedef struct {
  kcg_bool valid;
  MoRC_NID_MESSAGE_Type NID_MESSAGE;
  MoRC_T_TRAIN_Type T_TRAIN;
  MoRC_NID_ENGINE_Type NID_ENGINE;
} MoRC_struct__10853;

/* m155_initiationOfACommunicationSession_Type */
typedef MoRC_struct__10853 MoRC_m155_initiationOfACommunicationSession_Type;

/* m156_terminationOfACommunicationSession_Type */
typedef MoRC_struct__10853 MoRC_m156_terminationOfACommunicationSession_Type;

/* m154_NoCompatibleVersionSupported_Type */
typedef MoRC_struct__10853 MoRC_m154_NoCompatibleVersionSupported_Type;

typedef struct {
  kcg_bool valid;
  MoRC_NID_MESSAGE_Type NID_MESSAGE;
  MoRC_T_TRAIN_Type T_TRAIN;
  MoRC_NID_ENGINE_Type NID_ENGINE;
  MoRC_NID_RADIO_Type NID_RADIO;
} MoRC_struct__10860;

/* m159_SessionEstablished_Type */
typedef MoRC_struct__10860 MoRC_m159_SessionEstablished_Type;

typedef struct {
  kcg_bool valid;
  MoRC_NID_PACKET_Type NID_PACKET;
  MoRC_Q_DIR_Type Q_DIR;
  kcg_int L_PACKET;
  MoRC_D_RBCTR_Type D_RBCTR;
  MoRC_NID_C_Type NID_C;
  MoRC_NID_RBC_Type NID_RBC;
  MoRC_NID_RADIO_Type NID_RADIO;
  MoRC_Q_SLEEPSESSION_Type Q_SLEEPSESSION;
} MoRC_struct__10868;

/* p131_RBC_TransitionOrderType */
typedef MoRC_struct__10868 MoRC_p131_RBC_TransitionOrderType;

typedef struct {
  kcg_bool valid;
  MoRC_NID_MESSAGE_Type NID_MESSAGE;
  MoRC_T_TRAIN_Type T_TRAIN;
  MoRC_M_ACK_Type M_ACK;
  MoRC_NID_LRBG_Type NID_LRBG;
} MoRC_struct__10880;

/* m24_generalMessage_Type */
typedef MoRC_struct__10880 MoRC_m24_generalMessage_Type;

/* m38_initiationOfACommunicationSession_Type */
typedef MoRC_struct__10880 MoRC_m38_initiationOfACommunicationSession_Type;

/* m39_acknowledgementOfTerminationOfACommunicationSession_Type */
typedef MoRC_struct__10880 MoRC_m39_acknowledgementOfTerminationOfACommunicationSession_Type;

typedef struct {
  kcg_bool valid;
  MoRC_NID_MESSAGE_Type NID_MESSAGE;
  MoRC_T_TRAIN_Type T_TRAIN;
  MoRC_M_ACK_Type M_ACK;
  MoRC_NID_LRBG_Type NID_LRBG;
  MoRC_M_VERSION_Type M_VERSION;
} MoRC_struct__10888;

/* m32_RBC_RIU_systemVersion_Type */
typedef MoRC_struct__10888 MoRC_m32_RBC_RIU_systemVersion_Type;

typedef struct {
  kcg_bool valid;
  MoRC_NID_PACKET_Type NID_PACKET;
  MoRC_Q_DIR_Type Q_DIR;
  kcg_int L_PACKET;
  MoRC_Q_RBC_Type Q_RBC;
  MoRC_NID_C_Type NID_C;
  MoRC_NID_RBC_Type NID_RBC;
  MoRC_NID_RADIO_Type NID_RADIO;
  MoRC_Q_SLEEPSESSION_Type Q_SLEEPSESSION;
} MoRC_struct__10897;

/* p42_SessionManagement_Type */
typedef MoRC_struct__10897 MoRC_p42_SessionManagement_Type;

typedef struct {
  MoRC_m24_generalMessage_Type m24_generalMessage;
  MoRC_m32_RBC_RIU_systemVersion_Type m32_RBC_RIU_systemVersion;
  MoRC_m38_initiationOfACommunicationSession_Type m38_initiationOfACommunicationSession;
  MoRC_m39_acknowledgementOfTerminationOfACommunicationSession_Type m39_acknowledgementOfTerminationOfACommunicationSession;
  MoRC_p131_RBC_TransitionOrderType p131_RBC_TransitionOrder;
  MoRC_p42_SessionManagement_Type p42_sessionManagement;
} MoRC_struct__10909;

/* track_2_train_Type */
typedef MoRC_struct__10909 MoRC_track_2_train_Type;

typedef struct {
  MoRC_m155_initiationOfACommunicationSession_Type m155_initiationOfACommunicationSession;
  MoRC_m156_terminationOfACommunicationSession_Type m156_terminationOfACommunicationSession;
  MoRC_m159_SessionEstablished_Type m159_SessionEstablished;
  MoRC_m154_NoCompatibleVersionSupported_Type m154_NoCompatibleVersionSupported;
} MoRC_struct__10918;

/* train_2_track_Type */
typedef MoRC_struct__10918 MoRC_train_2_track_Type;

typedef struct {
  kcg_bool valid;
  MoRC_mobileHWConnectionStatus_Type connectionStatus;
} MoRC_struct__10925;

/* RadioNetworkMobileHWStatusType */
typedef MoRC_struct__10925 MoRC_RadioNetworkMobileHWStatusType;

typedef struct {
  kcg_bool valid;
  MoRC_rbc_id_Type radioInFillUnit_id;
  MoRC_rbc_phoneNo_Type telephoneNoOfTheRadioInfillUnit;
  MoRC_morc_RBC_action_Type actionToBePerformed;
} MoRC_struct__10930;

/* orderToContactARadioInfillUnit_Type */
typedef MoRC_struct__10930 MoRC_orderToContactARadioInfillUnit_Type;

typedef struct {
  kcg_bool valid;
  MoRC_rbc_id_Type rbc_id;
  MoRC_rbc_phoneNo_Type telephoneNoOfTheRBC;
  kcg_bool appliesAlsoToSleepingUnits;
} MoRC_struct__10937;

/* orderToContactAnAcceptingRBC_Type */
typedef MoRC_struct__10937 MoRC_orderToContactAnAcceptingRBC_Type;

typedef struct {
  kcg_bool valid;
  MoRC_orderToContactAnAcceptingRBC_Type orderToContactAnAcceptingRBC;
} MoRC_struct__10944;

/* rbc_TransitionOrder_Type */
typedef MoRC_struct__10944 MoRC_rbc_TransitionOrder_Type;

#ifndef MoRC_kcg_copy_struct__10799
#define MoRC_kcg_copy_struct__10799(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10799)))
#endif /* MoRC_kcg_copy_struct__10799 */

#ifndef MoRC_kcg_copy_struct__10807
#define MoRC_kcg_copy_struct__10807(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10807)))
#endif /* MoRC_kcg_copy_struct__10807 */

#ifndef MoRC_kcg_copy_struct__10812
#define MoRC_kcg_copy_struct__10812(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10812)))
#endif /* MoRC_kcg_copy_struct__10812 */

#ifndef MoRC_kcg_copy_struct__10820
#define MoRC_kcg_copy_struct__10820(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10820)))
#endif /* MoRC_kcg_copy_struct__10820 */

#ifndef MoRC_kcg_copy_struct__10826
#define MoRC_kcg_copy_struct__10826(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10826)))
#endif /* MoRC_kcg_copy_struct__10826 */

#ifndef MoRC_kcg_copy_struct__10832
#define MoRC_kcg_copy_struct__10832(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10832)))
#endif /* MoRC_kcg_copy_struct__10832 */

#ifndef MoRC_kcg_copy_struct__10838
#define MoRC_kcg_copy_struct__10838(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10838)))
#endif /* MoRC_kcg_copy_struct__10838 */

#ifndef MoRC_kcg_copy_struct__10843
#define MoRC_kcg_copy_struct__10843(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10843)))
#endif /* MoRC_kcg_copy_struct__10843 */

#ifndef MoRC_kcg_copy_struct__10848
#define MoRC_kcg_copy_struct__10848(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10848)))
#endif /* MoRC_kcg_copy_struct__10848 */

#ifndef MoRC_kcg_copy_struct__10853
#define MoRC_kcg_copy_struct__10853(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10853)))
#endif /* MoRC_kcg_copy_struct__10853 */

#ifndef MoRC_kcg_copy_struct__10860
#define MoRC_kcg_copy_struct__10860(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10860)))
#endif /* MoRC_kcg_copy_struct__10860 */

#ifndef MoRC_kcg_copy_struct__10868
#define MoRC_kcg_copy_struct__10868(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10868)))
#endif /* MoRC_kcg_copy_struct__10868 */

#ifndef MoRC_kcg_copy_struct__10880
#define MoRC_kcg_copy_struct__10880(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10880)))
#endif /* MoRC_kcg_copy_struct__10880 */

#ifndef MoRC_kcg_copy_struct__10888
#define MoRC_kcg_copy_struct__10888(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10888)))
#endif /* MoRC_kcg_copy_struct__10888 */

#ifndef MoRC_kcg_copy_struct__10897
#define MoRC_kcg_copy_struct__10897(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10897)))
#endif /* MoRC_kcg_copy_struct__10897 */

#ifndef MoRC_kcg_copy_struct__10909
#define MoRC_kcg_copy_struct__10909(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10909)))
#endif /* MoRC_kcg_copy_struct__10909 */

#ifndef MoRC_kcg_copy_struct__10918
#define MoRC_kcg_copy_struct__10918(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10918)))
#endif /* MoRC_kcg_copy_struct__10918 */

#ifndef MoRC_kcg_copy_struct__10925
#define MoRC_kcg_copy_struct__10925(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10925)))
#endif /* MoRC_kcg_copy_struct__10925 */

#ifndef MoRC_kcg_copy_struct__10930
#define MoRC_kcg_copy_struct__10930(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10930)))
#endif /* MoRC_kcg_copy_struct__10930 */

#ifndef MoRC_kcg_copy_struct__10937
#define MoRC_kcg_copy_struct__10937(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10937)))
#endif /* MoRC_kcg_copy_struct__10937 */

#ifndef MoRC_kcg_copy_struct__10944
#define MoRC_kcg_copy_struct__10944(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MoRC_struct__10944)))
#endif /* MoRC_kcg_copy_struct__10944 */

#ifndef MoRC_kcg_comp_struct__10799
extern kcg_bool MoRC_kcg_comp_struct__10799(
  MoRC_struct__10799 *kcg_c1,
  MoRC_struct__10799 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10799 */

#ifndef MoRC_kcg_comp_struct__10807
extern kcg_bool MoRC_kcg_comp_struct__10807(
  MoRC_struct__10807 *kcg_c1,
  MoRC_struct__10807 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10807 */

#ifndef MoRC_kcg_comp_struct__10812
extern kcg_bool MoRC_kcg_comp_struct__10812(
  MoRC_struct__10812 *kcg_c1,
  MoRC_struct__10812 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10812 */

#ifndef MoRC_kcg_comp_struct__10820
extern kcg_bool MoRC_kcg_comp_struct__10820(
  MoRC_struct__10820 *kcg_c1,
  MoRC_struct__10820 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10820 */

#ifndef MoRC_kcg_comp_struct__10826
extern kcg_bool MoRC_kcg_comp_struct__10826(
  MoRC_struct__10826 *kcg_c1,
  MoRC_struct__10826 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10826 */

#ifndef MoRC_kcg_comp_struct__10832
extern kcg_bool MoRC_kcg_comp_struct__10832(
  MoRC_struct__10832 *kcg_c1,
  MoRC_struct__10832 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10832 */

#ifndef MoRC_kcg_comp_struct__10838
extern kcg_bool MoRC_kcg_comp_struct__10838(
  MoRC_struct__10838 *kcg_c1,
  MoRC_struct__10838 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10838 */

#ifndef MoRC_kcg_comp_struct__10843
extern kcg_bool MoRC_kcg_comp_struct__10843(
  MoRC_struct__10843 *kcg_c1,
  MoRC_struct__10843 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10843 */

#ifndef MoRC_kcg_comp_struct__10848
extern kcg_bool MoRC_kcg_comp_struct__10848(
  MoRC_struct__10848 *kcg_c1,
  MoRC_struct__10848 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10848 */

#ifndef MoRC_kcg_comp_struct__10853
extern kcg_bool MoRC_kcg_comp_struct__10853(
  MoRC_struct__10853 *kcg_c1,
  MoRC_struct__10853 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10853 */

#ifndef MoRC_kcg_comp_struct__10860
extern kcg_bool MoRC_kcg_comp_struct__10860(
  MoRC_struct__10860 *kcg_c1,
  MoRC_struct__10860 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10860 */

#ifndef MoRC_kcg_comp_struct__10868
extern kcg_bool MoRC_kcg_comp_struct__10868(
  MoRC_struct__10868 *kcg_c1,
  MoRC_struct__10868 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10868 */

#ifndef MoRC_kcg_comp_struct__10880
extern kcg_bool MoRC_kcg_comp_struct__10880(
  MoRC_struct__10880 *kcg_c1,
  MoRC_struct__10880 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10880 */

#ifndef MoRC_kcg_comp_struct__10888
extern kcg_bool MoRC_kcg_comp_struct__10888(
  MoRC_struct__10888 *kcg_c1,
  MoRC_struct__10888 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10888 */

#ifndef MoRC_kcg_comp_struct__10897
extern kcg_bool MoRC_kcg_comp_struct__10897(
  MoRC_struct__10897 *kcg_c1,
  MoRC_struct__10897 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10897 */

#ifndef MoRC_kcg_comp_struct__10909
extern kcg_bool MoRC_kcg_comp_struct__10909(
  MoRC_struct__10909 *kcg_c1,
  MoRC_struct__10909 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10909 */

#ifndef MoRC_kcg_comp_struct__10918
extern kcg_bool MoRC_kcg_comp_struct__10918(
  MoRC_struct__10918 *kcg_c1,
  MoRC_struct__10918 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10918 */

#ifndef MoRC_kcg_comp_struct__10925
extern kcg_bool MoRC_kcg_comp_struct__10925(
  MoRC_struct__10925 *kcg_c1,
  MoRC_struct__10925 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10925 */

#ifndef MoRC_kcg_comp_struct__10930
extern kcg_bool MoRC_kcg_comp_struct__10930(
  MoRC_struct__10930 *kcg_c1,
  MoRC_struct__10930 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10930 */

#ifndef MoRC_kcg_comp_struct__10937
extern kcg_bool MoRC_kcg_comp_struct__10937(
  MoRC_struct__10937 *kcg_c1,
  MoRC_struct__10937 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10937 */

#ifndef MoRC_kcg_comp_struct__10944
extern kcg_bool MoRC_kcg_comp_struct__10944(
  MoRC_struct__10944 *kcg_c1,
  MoRC_struct__10944 *kcg_c2);
#endif /* MoRC_kcg_comp_struct__10944 */

#define MoRC_kcg_comp_p42_SessionManagement_Type MoRC_kcg_comp_struct__10897

#define MoRC_kcg_copy_p42_SessionManagement_Type MoRC_kcg_copy_struct__10897

#define MoRC_kcg_comp_safeRadioConnectionStatusValid_Type MoRC_kcg_comp_struct__10807

#define MoRC_kcg_copy_safeRadioConnectionStatusValid_Type MoRC_kcg_copy_struct__10807

#define MoRC_kcg_comp_mobileSWStatus_Type MoRC_kcg_comp_struct__10812

#define MoRC_kcg_copy_mobileSWStatus_Type MoRC_kcg_copy_struct__10812

#define MoRC_kcg_comp_mobileHWStatus_Type MoRC_kcg_comp_struct__10832

#define MoRC_kcg_copy_mobileHWStatus_Type MoRC_kcg_copy_struct__10832

#define MoRC_kcg_comp_mobileSWCmd_Type MoRC_kcg_comp_struct__10826

#define MoRC_kcg_copy_mobileSWCmd_Type MoRC_kcg_copy_struct__10826

#define MoRC_kcg_comp_mobileHWCmd_Type MoRC_kcg_comp_struct__10820

#define MoRC_kcg_copy_mobileHWCmd_Type MoRC_kcg_copy_struct__10820

#define MoRC_kcg_comp_M_VERSION_Type MoRC_kcg_comp_struct__10848

#define MoRC_kcg_copy_M_VERSION_Type MoRC_kcg_copy_struct__10848

#define MoRC_kcg_comp_RadioNetworkMobileHWStatusType MoRC_kcg_comp_struct__10925

#define MoRC_kcg_copy_RadioNetworkMobileHWStatusType MoRC_kcg_copy_struct__10925

#define MoRC_kcg_comp_validRadioNetworkID_Type MoRC_kcg_comp_struct__10838

#define MoRC_kcg_copy_validRadioNetworkID_Type MoRC_kcg_copy_struct__10838

#define MoRC_kcg_comp_LutIndex_lut MoRC_kcg_comp_struct__10843

#define MoRC_kcg_copy_LutIndex_lut MoRC_kcg_copy_struct__10843

#define MoRC_kcg_comp_m154_NoCompatibleVersionSupported_Type MoRC_kcg_comp_struct__10853

#define MoRC_kcg_copy_m154_NoCompatibleVersionSupported_Type MoRC_kcg_copy_struct__10853

#define MoRC_kcg_comp_m159_SessionEstablished_Type MoRC_kcg_comp_struct__10860

#define MoRC_kcg_copy_m159_SessionEstablished_Type MoRC_kcg_copy_struct__10860

#define MoRC_kcg_comp_m156_terminationOfACommunicationSession_Type MoRC_kcg_comp_struct__10853

#define MoRC_kcg_copy_m156_terminationOfACommunicationSession_Type MoRC_kcg_copy_struct__10853

#define MoRC_kcg_comp_orderToContactARadioInfillUnit_Type MoRC_kcg_comp_struct__10930

#define MoRC_kcg_copy_orderToContactARadioInfillUnit_Type MoRC_kcg_copy_struct__10930

#define MoRC_kcg_comp_m155_initiationOfACommunicationSession_Type MoRC_kcg_comp_struct__10853

#define MoRC_kcg_copy_m155_initiationOfACommunicationSession_Type MoRC_kcg_copy_struct__10853

#define MoRC_kcg_comp_rbc_TransitionOrder_Type MoRC_kcg_comp_struct__10944

#define MoRC_kcg_copy_rbc_TransitionOrder_Type MoRC_kcg_copy_struct__10944

#define MoRC_kcg_comp_p131_RBC_TransitionOrderType MoRC_kcg_comp_struct__10868

#define MoRC_kcg_copy_p131_RBC_TransitionOrderType MoRC_kcg_copy_struct__10868

#define MoRC_kcg_comp_orderToContactAnAcceptingRBC_Type MoRC_kcg_comp_struct__10937

#define MoRC_kcg_copy_orderToContactAnAcceptingRBC_Type MoRC_kcg_copy_struct__10937

#define MoRC_kcg_comp_m39_acknowledgementOfTerminationOfACommunicationSession_Type MoRC_kcg_comp_struct__10880

#define MoRC_kcg_copy_m39_acknowledgementOfTerminationOfACommunicationSession_Type MoRC_kcg_copy_struct__10880

#define MoRC_kcg_comp_m38_initiationOfACommunicationSession_Type MoRC_kcg_comp_struct__10880

#define MoRC_kcg_copy_m38_initiationOfACommunicationSession_Type MoRC_kcg_copy_struct__10880

#define MoRC_kcg_comp_m32_RBC_RIU_systemVersion_Type MoRC_kcg_comp_struct__10888

#define MoRC_kcg_copy_m32_RBC_RIU_systemVersion_Type MoRC_kcg_copy_struct__10888

#define MoRC_kcg_comp_m24_generalMessage_Type MoRC_kcg_comp_struct__10880

#define MoRC_kcg_copy_m24_generalMessage_Type MoRC_kcg_copy_struct__10880

#define MoRC_kcg_comp_track_2_train_Type MoRC_kcg_comp_struct__10909

#define MoRC_kcg_copy_track_2_train_Type MoRC_kcg_copy_struct__10909

#define MoRC_kcg_comp_train_2_track_Type MoRC_kcg_comp_struct__10918

#define MoRC_kcg_copy_train_2_track_Type MoRC_kcg_copy_struct__10918

#define MoRC_kcg_comp_orderToContactAnRBC_Type MoRC_kcg_comp_struct__10799

#define MoRC_kcg_copy_orderToContactAnRBC_Type MoRC_kcg_copy_struct__10799

#endif /* _MoRC_KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2013-05-15T14:10:00
*************************************************************$ */

