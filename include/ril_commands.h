/* //device/libs/telephony/ril_commands.h
**
** Copyright 2006, The Android Open Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/
    {0, NULL},                   //none
    {RIL_REQUEST_GET_SIM_STATUS, radio::getIccCardStatusResponse},
    {RIL_REQUEST_ENTER_SIM_PIN, radio::supplyIccPinForAppResponse},
    {RIL_REQUEST_ENTER_SIM_PUK, radio::supplyIccPukForAppResponse},
    {RIL_REQUEST_ENTER_SIM_PIN2, radio::supplyIccPin2ForAppResponse},
    {RIL_REQUEST_ENTER_SIM_PUK2, radio::supplyIccPuk2ForAppResponse},
    {RIL_REQUEST_CHANGE_SIM_PIN, radio::changeIccPinForAppResponse},
    {RIL_REQUEST_CHANGE_SIM_PIN2, radio::changeIccPin2ForAppResponse},
    {RIL_REQUEST_ENTER_NETWORK_DEPERSONALIZATION, radio::supplyNetworkDepersonalizationResponse},
    {RIL_REQUEST_GET_CURRENT_CALLS, radio::getCurrentCallsResponse},
    {RIL_REQUEST_DIAL, radio::dialResponse},
    {RIL_REQUEST_GET_IMSI, radio::getIMSIForAppResponse},
    {RIL_REQUEST_HANGUP, radio::hangupConnectionResponse},
    {RIL_REQUEST_HANGUP_WAITING_OR_BACKGROUND, radio::hangupWaitingOrBackgroundResponse},
    {RIL_REQUEST_HANGUP_FOREGROUND_RESUME_BACKGROUND, radio::hangupForegroundResumeBackgroundResponse},
    {RIL_REQUEST_SWITCH_WAITING_OR_HOLDING_AND_ACTIVE, radio::switchWaitingOrHoldingAndActiveResponse},
    {RIL_REQUEST_CONFERENCE, radio::conferenceResponse},
    {RIL_REQUEST_UDUB, radio::rejectCallResponse},
    {RIL_REQUEST_LAST_CALL_FAIL_CAUSE, radio::getLastCallFailCauseResponse},
    {RIL_REQUEST_SIGNAL_STRENGTH, radio::getSignalStrengthResponse},
    {RIL_REQUEST_VOICE_REGISTRATION_STATE, radio::getVoiceRegistrationStateResponse},
    {RIL_REQUEST_DATA_REGISTRATION_STATE, radio::getDataRegistrationStateResponse},
    {RIL_REQUEST_OPERATOR, radio::getOperatorResponse},
    {RIL_REQUEST_RADIO_POWER, radio::setRadioPowerResponse},
    {RIL_REQUEST_DTMF, radio::sendDtmfResponse},
    {RIL_REQUEST_SEND_SMS, radio::sendSmsResponse},
    {RIL_REQUEST_SEND_SMS_EXPECT_MORE, radio::sendSMSExpectMoreResponse},
    {RIL_REQUEST_SETUP_DATA_CALL, radio::setupDataCallResponse},
    {RIL_REQUEST_SIM_IO, radio::iccIOForAppResponse},
    {RIL_REQUEST_SEND_USSD, radio::sendUssdResponse},
    {RIL_REQUEST_CANCEL_USSD, radio::cancelPendingUssdResponse},
    {RIL_REQUEST_GET_CLIR, radio::getClirResponse},
    {RIL_REQUEST_SET_CLIR, radio::setClirResponse},
    {RIL_REQUEST_QUERY_CALL_FORWARD_STATUS, radio::getCallForwardStatusResponse},
    {RIL_REQUEST_SET_CALL_FORWARD, radio::setCallForwardResponse},
    {RIL_REQUEST_QUERY_CALL_WAITING, radio::getCallWaitingResponse},
    {RIL_REQUEST_SET_CALL_WAITING, radio::setCallWaitingResponse},
    {RIL_REQUEST_SMS_ACKNOWLEDGE, radio::acknowledgeLastIncomingGsmSmsResponse},
    {RIL_REQUEST_GET_IMEI, NULL},
    {RIL_REQUEST_GET_IMEISV, NULL},
    {RIL_REQUEST_ANSWER, radio::acceptCallResponse},
    {RIL_REQUEST_DEACTIVATE_DATA_CALL, radio::deactivateDataCallResponse},
    {RIL_REQUEST_QUERY_FACILITY_LOCK, radio::getFacilityLockForAppResponse},
    {RIL_REQUEST_SET_FACILITY_LOCK, radio::setFacilityLockForAppResponse},
    {RIL_REQUEST_CHANGE_BARRING_PASSWORD, radio::setBarringPasswordResponse},
    {RIL_REQUEST_QUERY_NETWORK_SELECTION_MODE, radio::getNetworkSelectionModeResponse},
    {RIL_REQUEST_SET_NETWORK_SELECTION_AUTOMATIC, radio::setNetworkSelectionModeAutomaticResponse},
    {RIL_REQUEST_SET_NETWORK_SELECTION_MANUAL, radio::setNetworkSelectionModeManualResponse},
    {RIL_REQUEST_QUERY_AVAILABLE_NETWORKS , radio::getAvailableNetworksResponse},
    {RIL_REQUEST_DTMF_START, radio::startDtmfResponse},
    {RIL_REQUEST_DTMF_STOP, radio::stopDtmfResponse},
    {RIL_REQUEST_BASEBAND_VERSION, radio::getBasebandVersionResponse},
    {RIL_REQUEST_SEPARATE_CONNECTION, radio::separateConnectionResponse},
    {RIL_REQUEST_SET_MUTE, radio::setMuteResponse},
    {RIL_REQUEST_GET_MUTE, radio::getMuteResponse},
    {RIL_REQUEST_QUERY_CLIP, radio::getClipResponse},
    {RIL_REQUEST_LAST_DATA_CALL_FAIL_CAUSE, NULL},
    {RIL_REQUEST_DATA_CALL_LIST, radio::getDataCallListResponse},
    {RIL_REQUEST_RESET_RADIO, NULL},
    {RIL_REQUEST_OEM_HOOK_RAW, NULL},
    {RIL_REQUEST_OEM_HOOK_STRINGS, NULL},
    {RIL_REQUEST_SCREEN_STATE, radio::sendDeviceStateResponse},   // Note the response function is different.
    {RIL_REQUEST_SET_SUPP_SVC_NOTIFICATION, radio::setSuppServiceNotificationsResponse},
    {RIL_REQUEST_WRITE_SMS_TO_SIM, radio::writeSmsToSimResponse},
    {RIL_REQUEST_DELETE_SMS_ON_SIM, radio::deleteSmsOnSimResponse},
    {RIL_REQUEST_SET_BAND_MODE, radio::setBandModeResponse},
    {RIL_REQUEST_QUERY_AVAILABLE_BAND_MODE, radio::getAvailableBandModesResponse},
    {RIL_REQUEST_STK_GET_PROFILE, NULL},
    {RIL_REQUEST_STK_SET_PROFILE, NULL},
    {RIL_REQUEST_STK_SEND_ENVELOPE_COMMAND, radio::sendEnvelopeResponse},
    {RIL_REQUEST_STK_SEND_TERMINAL_RESPONSE, radio::sendTerminalResponseToSimResponse},
    {RIL_REQUEST_STK_HANDLE_CALL_SETUP_REQUESTED_FROM_SIM, radio::handleStkCallSetupRequestFromSimResponse},
    {RIL_REQUEST_EXPLICIT_CALL_TRANSFER, radio::explicitCallTransferResponse},
    {RIL_REQUEST_SET_PREFERRED_NETWORK_TYPE, radio::setPreferredNetworkTypeResponse},
    {RIL_REQUEST_GET_PREFERRED_NETWORK_TYPE, radio::getPreferredNetworkTypeResponse},
    {RIL_REQUEST_GET_NEIGHBORING_CELL_IDS, radio::getNeighboringCidsResponse},
    {RIL_REQUEST_SET_LOCATION_UPDATES, radio::setLocationUpdatesResponse},
    {RIL_REQUEST_CDMA_SET_SUBSCRIPTION_SOURCE, radio::setCdmaSubscriptionSourceResponse},
    {RIL_REQUEST_CDMA_SET_ROAMING_PREFERENCE, radio::setCdmaRoamingPreferenceResponse},
    {RIL_REQUEST_CDMA_QUERY_ROAMING_PREFERENCE, radio::getCdmaRoamingPreferenceResponse},
    {RIL_REQUEST_SET_TTY_MODE, radio::setTTYModeResponse},
    {RIL_REQUEST_QUERY_TTY_MODE, radio::getTTYModeResponse},
    {RIL_REQUEST_CDMA_SET_PREFERRED_VOICE_PRIVACY_MODE, radio::setPreferredVoicePrivacyResponse},
    {RIL_REQUEST_CDMA_QUERY_PREFERRED_VOICE_PRIVACY_MODE, radio::getPreferredVoicePrivacyResponse},
    {RIL_REQUEST_CDMA_FLASH, radio::sendCDMAFeatureCodeResponse},
    {RIL_REQUEST_CDMA_BURST_DTMF, radio::sendBurstDtmfResponse},
    {RIL_REQUEST_CDMA_VALIDATE_AND_WRITE_AKEY, NULL},
    {RIL_REQUEST_CDMA_SEND_SMS, radio::sendCdmaSmsResponse},
    {RIL_REQUEST_CDMA_SMS_ACKNOWLEDGE, radio::acknowledgeLastIncomingCdmaSmsResponse},
    {RIL_REQUEST_GSM_GET_BROADCAST_SMS_CONFIG, radio::getGsmBroadcastConfigResponse},
    {RIL_REQUEST_GSM_SET_BROADCAST_SMS_CONFIG, radio::setGsmBroadcastConfigResponse},
    {RIL_REQUEST_GSM_SMS_BROADCAST_ACTIVATION, radio::setGsmBroadcastActivationResponse},
    {RIL_REQUEST_CDMA_GET_BROADCAST_SMS_CONFIG, radio::getCdmaBroadcastConfigResponse},
    {RIL_REQUEST_CDMA_SET_BROADCAST_SMS_CONFIG, radio::setCdmaBroadcastConfigResponse},
    {RIL_REQUEST_CDMA_SMS_BROADCAST_ACTIVATION, radio::setCdmaBroadcastActivationResponse},
    {RIL_REQUEST_CDMA_SUBSCRIPTION, radio::getCDMASubscriptionResponse},
    {RIL_REQUEST_CDMA_WRITE_SMS_TO_RUIM, radio::writeSmsToRuimResponse},
    {RIL_REQUEST_CDMA_DELETE_SMS_ON_RUIM, radio::deleteSmsOnRuimResponse},
    {RIL_REQUEST_DEVICE_IDENTITY, radio::getDeviceIdentityResponse},
    {RIL_REQUEST_EXIT_EMERGENCY_CALLBACK_MODE, radio::exitEmergencyCallbackModeResponse},
    {RIL_REQUEST_GET_SMSC_ADDRESS, radio::getSmscAddressResponse},
    {RIL_REQUEST_SET_SMSC_ADDRESS, radio::setSmscAddressResponse},
    {RIL_REQUEST_REPORT_SMS_MEMORY_STATUS, radio::reportSmsMemoryStatusResponse},
    {RIL_REQUEST_REPORT_STK_SERVICE_IS_RUNNING, radio::reportStkServiceIsRunningResponse},
    {RIL_REQUEST_CDMA_GET_SUBSCRIPTION_SOURCE, radio::getCdmaSubscriptionSourceResponse},
    {RIL_REQUEST_ISIM_AUTHENTICATION, radio::requestIsimAuthenticationResponse},
    {RIL_REQUEST_ACKNOWLEDGE_INCOMING_GSM_SMS_WITH_PDU, radio::acknowledgeIncomingGsmSmsWithPduResponse},
    {RIL_REQUEST_STK_SEND_ENVELOPE_WITH_STATUS, radio::sendEnvelopeWithStatusResponse},
    {RIL_REQUEST_VOICE_RADIO_TECH, radio::getVoiceRadioTechnologyResponse},
    {RIL_REQUEST_GET_CELL_INFO_LIST, radio::getCellInfoListResponse},
    {RIL_REQUEST_SET_UNSOL_CELL_INFO_LIST_RATE, radio::setCellInfoListRateResponse},
    {RIL_REQUEST_SET_INITIAL_ATTACH_APN, radio::setInitialAttachApnResponse},
    {RIL_REQUEST_IMS_REGISTRATION_STATE, radio::getImsRegistrationStateResponse},
    {RIL_REQUEST_IMS_SEND_SMS, radio::sendImsSmsResponse},
    {RIL_REQUEST_SIM_TRANSMIT_APDU_BASIC, radio::iccTransmitApduBasicChannelResponse},
    {RIL_REQUEST_SIM_OPEN_CHANNEL, radio::iccOpenLogicalChannelResponse},
    {RIL_REQUEST_SIM_CLOSE_CHANNEL, radio::iccCloseLogicalChannelResponse},
    {RIL_REQUEST_SIM_TRANSMIT_APDU_CHANNEL, radio::iccTransmitApduLogicalChannelResponse},
    {RIL_REQUEST_NV_READ_ITEM, radio::nvReadItemResponse},
    {RIL_REQUEST_NV_WRITE_ITEM, radio::nvWriteItemResponse},
    {RIL_REQUEST_NV_WRITE_CDMA_PRL, radio::nvWriteCdmaPrlResponse},
    {RIL_REQUEST_NV_RESET_CONFIG, radio::nvResetConfigResponse},
    {RIL_REQUEST_SET_UICC_SUBSCRIPTION, radio::setUiccSubscriptionResponse},
    {RIL_REQUEST_ALLOW_DATA, radio::setDataAllowedResponse},
    {RIL_REQUEST_GET_HARDWARE_CONFIG, radio::getHardwareConfigResponse},
    {RIL_REQUEST_SIM_AUTHENTICATION, radio::requestIccSimAuthenticationResponse},
    {RIL_REQUEST_GET_DC_RT_INFO, NULL},
    {RIL_REQUEST_SET_DC_RT_INFO_RATE, NULL},
    {RIL_REQUEST_SET_DATA_PROFILE, radio::setDataProfileResponse},
    {RIL_REQUEST_SHUTDOWN, radio::requestShutdownResponse},
    {RIL_REQUEST_GET_RADIO_CAPABILITY, radio::getRadioCapabilityResponse},
    {RIL_REQUEST_SET_RADIO_CAPABILITY, radio::setRadioCapabilityResponse},
    {RIL_REQUEST_START_LCE, radio::startLceServiceResponse},
    {RIL_REQUEST_STOP_LCE, radio::stopLceServiceResponse},
    {RIL_REQUEST_PULL_LCEDATA, radio::pullLceDataResponse},
    {RIL_REQUEST_OPPO_GET_RADIO_INFO, NULL},
    {RIL_REQUEST_GET_ACTIVITY_INFO, radio::getModemActivityInfoResponse},
    {RIL_REQUEST_SET_CARRIER_RESTRICTIONS, radio::setAllowedCarriersResponse},
    {RIL_REQUEST_GET_CARRIER_RESTRICTIONS, radio::getAllowedCarriersResponse},
    {RIL_REQUEST_SEND_DEVICE_STATE, radio::sendDeviceStateResponse},
    {RIL_REQUEST_SET_UNSOLICITED_RESPONSE_FILTER, radio::setIndicationFilterResponse},
    {RIL_REQUEST_SET_SIM_CARD_POWER, radio::setSimCardPowerResponse},
    {RIL_REQUEST_SET_CARRIER_INFO_IMSI_ENCRYPTION, radio::setCarrierInfoForImsiEncryptionResponse},
    {RIL_REQUEST_START_NETWORK_SCAN, radio::startNetworkScanResponse},
    {RIL_REQUEST_STOP_NETWORK_SCAN, radio::stopNetworkScanResponse},
    {RIL_REQUEST_START_KEEPALIVE, radio::startKeepaliveResponse},
    {RIL_REQUEST_STOP_KEEPALIVE, radio::stopKeepaliveResponse},
