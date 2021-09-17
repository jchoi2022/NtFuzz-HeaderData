#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <mdmsg.h>
#include <mdcommsg.h>
enum METADATATYPES
    {
        ALL_METADATA = 0,
        DWORD_METADATA = ( ALL_METADATA + 1 ) ,
        STRING_METADATA = ( DWORD_METADATA + 1 ) ,
        BINARY_METADATA = ( STRING_METADATA + 1 ) ,
        EXPANDSZ_METADATA = ( BINARY_METADATA + 1 ) ,
        MULTISZ_METADATA = ( EXPANDSZ_METADATA + 1 ) ,
        INVALID_END_METADATA = ( MULTISZ_METADATA + 1 )
    } ;
typedef struct _METADATA_RECORD
    {
    DWORD dwMDIdentifier;
    DWORD dwMDAttributes;
    DWORD dwMDUserType;
    DWORD dwMDDataType;
    DWORD dwMDDataLen;
                            unsigned char *pbMDData;
    DWORD dwMDDataTag;
    } METADATA_RECORD;
typedef struct _METADATA_RECORD *PMETADATA_RECORD;
typedef struct _METADATA_GETALL_RECORD
    {
    DWORD dwMDIdentifier;
    DWORD dwMDAttributes;
    DWORD dwMDUserType;
    DWORD dwMDDataType;
    DWORD dwMDDataLen;
    DWORD dwMDDataOffset;
    DWORD dwMDDataTag;
    } METADATA_GETALL_RECORD;
typedef struct _METADATA_GETALL_RECORD *PMETADATA_GETALL_RECORD;
typedef struct _METADATA_GETALL_INTERNAL_RECORD
    {
    DWORD dwMDIdentifier;
    DWORD dwMDAttributes;
    DWORD dwMDUserType;
    DWORD dwMDDataType;
    DWORD dwMDDataLen;
    union
        {
        DWORD_PTR dwMDDataOffset;
        unsigned char *pbMDData;
        } ;
    DWORD dwMDDataTag;
    } METADATA_GETALL_INTERNAL_RECORD;
typedef struct _METADATA_GETALL_INTERNAL_RECORD *PMETADATA_GETALL_INTERNAL_RECORD;
typedef DWORD METADATA_HANDLE;
typedef DWORD *PMETADATA_HANDLE;
typedef struct _METADATA_HANDLE_INFO
    {
    DWORD dwMDPermissions;
    DWORD dwMDSystemChangeNumber;
    } METADATA_HANDLE_INFO;
typedef struct _METADATA_HANDLE_INFO *PMETADATA_HANDLE_INFO;
typedef struct _MD_CHANGE_OBJECT_W
    {
                   LPWSTR pszMDPath;
    DWORD dwMDChangeType;
    DWORD dwMDNumDataIDs;
                            DWORD *pdwMDDataIDs;
    } MD_CHANGE_OBJECT_W;
typedef struct _MD_CHANGE_OBJECT_W *PMD_CHANGE_OBJECT_W;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mddefw_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mddefw_0000_0000_v0_0_s_ifspec;
}
