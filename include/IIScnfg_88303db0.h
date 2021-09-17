#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
                                         MD_EXTLOG_TIME | \
                                         MD_EXTLOG_METHOD | \
                                         MD_EXTLOG_URI_STEM | \
                                         MD_EXTLOG_HTTP_STATUS | \
                                         MD_EXTLOG_HTTP_SUB_STATUS )
                                         MD_NOTIFY_ORDER_MEDIUM | \
                                         MD_NOTIFY_ORDER_LOW)
                                         MD_ACCESS_WRITE| \
                                         MD_ACCESS_EXECUTE| \
                                         MD_ACCESS_SOURCE| \
                                         MD_ACCESS_SCRIPT| \
                                         MD_ACCESS_NO_REMOTE_READ| \
                                         MD_ACCESS_NO_REMOTE_WRITE| \
                                         MD_ACCESS_NO_REMOTE_EXECUTE| \
                                         MD_ACCESS_NO_REMOTE_SCRIPT| \
                                         MD_ACCESS_NO_PHYSICAL_DIR \
                                         )
                                         MD_ACCESS_NEGO_CERT|\
                                         MD_ACCESS_REQUIRE_CERT|\
                                         MD_ACCESS_MAP_CERT|\
                                         MD_ACCESS_SSL128)
                                         MD_DIRBROW_SHOW_TIME | \
                                         MD_DIRBROW_SHOW_SIZE | \
                                         MD_DIRBROW_SHOW_EXTENSION | \
                                         MD_DIRBROW_LONG_DATE | \
                                         MD_DIRBROW_LOADDEFAULT | \
                                         MD_DIRBROW_ENABLED)
                                        MD_SERVER_CONFIG_SSL_128 | \
                                        MD_SERVER_CONFIG_ENCRYPT | \
                                        MD_SERVER_CONFIG_AUTO_PW_SYNC)
            { \
            (_pMDR)->dwMDIdentifier=(_id); \
            (_pMDR)->dwMDAttributes=(_attr); \
            (_pMDR)->dwMDUserType=(_utype); \
            (_pMDR)->dwMDDataType=(_dtype); \
            (_pMDR)->dwMDDataLen=(_dlen); \
            (_pMDR)->pbMDData=(LPBYTE)(_pData); \
            }
#endif
#pragma endregion
