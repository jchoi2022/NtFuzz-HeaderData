typedef struct _MODEMDEVCAPS {
    DWORD dwActualSize;
    DWORD dwRequiredSize;
    DWORD dwDevSpecificOffset;
    DWORD dwDevSpecificSize;
    DWORD dwModemProviderVersion;
    DWORD dwModemManufacturerOffset;
    DWORD dwModemManufacturerSize;
    DWORD dwModemModelOffset;
    DWORD dwModemModelSize;
    DWORD dwModemVersionOffset;
    DWORD dwModemVersionSize;
    DWORD dwDialOptions;
    DWORD dwCallSetupFailTimer;
    DWORD dwInactivityTimeout;
    DWORD dwSpeakerVolume;
    DWORD dwSpeakerMode;
    DWORD dwModemOptions;
    DWORD dwMaxDTERate;
    DWORD dwMaxDCERate;
    BYTE abVariablePortion [1];
} MODEMDEVCAPS, *PMODEMDEVCAPS, *LPMODEMDEVCAPS;
typedef struct _MODEMSETTINGS {
    DWORD dwActualSize;
    DWORD dwRequiredSize;
    DWORD dwDevSpecificOffset;
    DWORD dwDevSpecificSize;
    DWORD dwCallSetupFailTimer;
    DWORD dwInactivityTimeout;
    DWORD dwSpeakerVolume;
    DWORD dwSpeakerMode;
    DWORD dwPreferredModemOptions;
    DWORD dwNegotiatedModemOptions;
    DWORD dwNegotiatedDCERate;
    BYTE abVariablePortion [1];
} MODEMSETTINGS, *PMODEMSETTINGS, *LPMODEMSETTINGS;
                   (((_dwOptions)&MDM_MASK_BEARERMODE) >> MDM_SHIFT_BEARERMODE)
    (((_dwOptions) &= ~MDM_MASK_BEARERMODE), \
    ((_dwOptions) |= (((_bm)<<MDM_SHIFT_BEARERMODE)&MDM_MASK_BEARERMODE)))
               (((_dwOptions)&MDM_MASK_PROTOCOLID) >> MDM_SHIFT_PROTOCOLID)
    (((_dwOptions) &= ~MDM_MASK_PROTOCOLID), \
    ((_dwOptions) |= (((_prot)<<MDM_SHIFT_PROTOCOLID)&MDM_MASK_PROTOCOLID)))
               (((_dwOptions)&MDM_MASK_PROTOCOLDATA) >> MDM_SHIFT_PROTOCOLDATA)
   (((_dwOptions) &= ~MDM_MASK_PROTOCOLDATA), \
   ((_dwOptions) |= (((_pd)<<MDM_SHIFT_PROTOCOLDATA)&MDM_MASK_PROTOCOLDATA)))
               ((_dwOptions)&MDM_MASK_PROTOCOLINFO)
  (((_dwOptions) &= ~MDM_MASK_PROTOCOLINFO), \
  ((_dwOptions) |= ((_pinfo)&MDM_MASK_PROTOCOLINFO)))
        ((((_pid )<<MDM_SHIFT_PROTOCOLID )&MDM_MASK_PROTOCOLID ) \
        |(((_pdata)<<MDM_SHIFT_PROTOCOLDATA)&MDM_MASK_PROTOCOLDATA))
               ((_dwOptions)&MDM_MASK_EXTENDEDINFO)
  (((_dwOptions) &= ~MDM_MASK_EXTENDEDINFO), \
  ((_dwOptions) |= ((_extinfo) & MDM_MASK_EXTENDEDINFO)))
        (((_pinfo)&MDM_MASK_PROTOCOLINFO ) \
         |(((_bearermode)<<MDM_SHIFT_BEARERMODE)&MDM_MASK_BEARERMODE))
    ((((_speed)<<MDM_SHIFT_HDLCPPP_SPEED)&MDM_MASK_HDLCPPP_SPEED) \
    |(((_auth )<<MDM_SHIFT_HDLCPPP_AUTH )&MDM_MASK_HDLCPPP_AUTH ) \
    |(((_ml )<<MDM_SHIFT_HDLCPPP_ML )&MDM_MASK_HDLCPPP_ML ))
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_HDLCPPP, \
        MDM_GEN_HDLCPPP_PROTOCOL_DATA ( \
            MDM_HDLCPPP_SPEED_64K, \
            MDM_HDLCPPP_AUTH_DEFAULT, \
            MDM_HDLCPPP_ML_DEFAULT \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_HDLCPPP, \
        MDM_GEN_HDLCPPP_PROTOCOL_DATA ( \
            MDM_HDLCPPP_SPEED_56K, \
            MDM_HDLCPPP_AUTH_DEFAULT, \
            MDM_HDLCPPP_ML_DEFAULT \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_HDLCPPP, \
        MDM_GEN_HDLCPPP_PROTOCOL_DATA ( \
            MDM_HDLCPPP_SPEED_56K, \
            MDM_HDLCPPP_AUTH_DEFAULT, \
            MDM_HDLCPPP_ML_2 \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_HDLCPPP, \
        MDM_GEN_HDLCPPP_PROTOCOL_DATA ( \
            MDM_HDLCPPP_SPEED_56K, \
            MDM_HDLCPPP_AUTH_PAP, \
            MDM_HDLCPPP_ML_2 \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_HDLCPPP, \
        MDM_GEN_HDLCPPP_PROTOCOL_DATA ( \
            MDM_HDLCPPP_SPEED_56K, \
            MDM_HDLCPPP_AUTH_CHAP, \
            MDM_HDLCPPP_ML_2 \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_HDLCPPP, \
        MDM_GEN_HDLCPPP_PROTOCOL_DATA ( \
            MDM_HDLCPPP_SPEED_56K, \
            MDM_HDLCPPP_AUTH_MSCHAP, \
            MDM_HDLCPPP_ML_2 \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_HDLCPPP, \
        MDM_GEN_HDLCPPP_PROTOCOL_DATA ( \
            MDM_HDLCPPP_SPEED_64K, \
            MDM_HDLCPPP_AUTH_DEFAULT, \
            MDM_HDLCPPP_ML_2 \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_HDLCPPP, \
        MDM_GEN_HDLCPPP_PROTOCOL_DATA ( \
            MDM_HDLCPPP_SPEED_64K, \
            MDM_HDLCPPP_AUTH_PAP, \
            MDM_HDLCPPP_ML_2 \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_HDLCPPP, \
        MDM_GEN_HDLCPPP_PROTOCOL_DATA ( \
            MDM_HDLCPPP_SPEED_64K, \
            MDM_HDLCPPP_AUTH_CHAP, \
            MDM_HDLCPPP_ML_2 \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_HDLCPPP, \
        MDM_GEN_HDLCPPP_PROTOCOL_DATA ( \
            MDM_HDLCPPP_SPEED_64K, \
            MDM_HDLCPPP_AUTH_MSCHAP, \
            MDM_HDLCPPP_ML_2 \
            ) \
        )
    ((((_speed)<<MDM_SHIFT_V120_SPEED)&MDM_MASK_V120_SPEED) \
    |(((_ml )<<MDM_SHIFT_V120_ML )&MDM_MASK_V120_ML ))
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V120, \
        MDM_GEN_V120_PROTOCOL_DATA (\
            MDM_V120_SPEED_64K, \
            MDM_V120_ML_NONE \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V120, \
        MDM_GEN_V120_PROTOCOL_DATA (\
            MDM_V120_SPEED_56K, \
            MDM_V120_ML_NONE \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V120, \
        MDM_GEN_V120_PROTOCOL_DATA (\
            MDM_V120_SPEED_56K, \
            MDM_V120_ML_2 \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V120, \
        MDM_GEN_V120_PROTOCOL_DATA (\
            MDM_V120_SPEED_64K, \
            MDM_V120_ML_2 \
            ) \
        )
    (((_data)<<MDM_SHIFT_X75_DATA)&MDM_MASK_X75_DATA)
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_X75, \
        MDM_GEN_X75_PROTOCOL_DATA ( \
            MDM_X75_DATA_64K \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_X75, \
        MDM_GEN_X75_PROTOCOL_DATA ( \
            MDM_X75_DATA_128K \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_X75, \
        MDM_GEN_X75_PROTOCOL_DATA ( \
            MDM_X75_DATA_T_70 \
            ) \
        ) \
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_X75, \
        MDM_GEN_X75_PROTOCOL_DATA ( \
            MDM_X75_DATA_BTX \
            ) \
        )
    (((_data)<<MDM_SHIFT_V110_SPEED)&MDM_MASK_V110_SPEED)
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V110, \
        MDM_GEN_V110_PROTOCOL_DATA (\
            MDM_V110_SPEED_1DOT2K \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V110, \
        MDM_GEN_V110_PROTOCOL_DATA (\
            MDM_V110_SPEED_2DOT4K \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V110, \
        MDM_GEN_V110_PROTOCOL_DATA (\
            MDM_V110_SPEED_4DOT8K \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V110, \
        MDM_GEN_V110_PROTOCOL_DATA (\
            MDM_V110_SPEED_9DOT6K \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V110, \
        MDM_GEN_V110_PROTOCOL_DATA (\
            MDM_V110_SPEED_12DOT0K \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V110, \
        MDM_GEN_V110_PROTOCOL_DATA (\
            MDM_V110_SPEED_14DOT4K \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V110, \
        MDM_GEN_V110_PROTOCOL_DATA (\
            MDM_V110_SPEED_19DOT2K \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V110, \
        MDM_GEN_V110_PROTOCOL_DATA (\
            MDM_V110_SPEED_28DOT8K \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V110, \
        MDM_GEN_V110_PROTOCOL_DATA (\
            MDM_V110_SPEED_38DOT4K \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_V110, \
        MDM_GEN_V110_PROTOCOL_DATA (\
            MDM_V110_SPEED_57DOT6K \
            ) \
        )
    ((((_speed)<<MDM_SHIFT_AUTO_SPEED)&MDM_MASK_AUTO_SPEED) \
    |(((_ml )<<MDM_SHIFT_AUTO_ML )&MDM_MASK_AUTO_ML))
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_AUTO, \
        MDM_GEN_AUTO_PROTOCOL_DATA (\
            MDM_AUTO_SPEED_DEFAULT, \
            MDM_AUTO_ML_NONE \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_AUTO, \
        MDM_GEN_AUTO_PROTOCOL_DATA (\
            MDM_AUTO_SPEED_DEFAULT, \
            MDM_AUTO_ML_2 \
            ) \
        )
    (_rlp)
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_ANALOG, \
        MDM_GEN_ANALOG_PROTOCOL_DATA ( \
            MDM_ANALOG_RLP_ON \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_ANALOG, \
        MDM_GEN_ANALOG_PROTOCOL_DATA ( \
            MDM_ANALOG_RLP_OFF \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_ANALOG, \
        MDM_GEN_ANALOG_PROTOCOL_DATA ( \
            MDM_ANALOG_V34 \
            ) \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_GPRS, \
        0 \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_PIAFS, \
        MDM_PIAFS_INCOMING \
        )
    MDM_GEN_PROTOCOLINFO( \
        MDM_PROTOCOLID_PIAFS, \
        MDM_PIAFS_OUTGOING \
        )
