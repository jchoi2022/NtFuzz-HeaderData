#include <DeviceServices.h>
#include <SyncDeviceService.h>
DEFINE_DEVSVCGUID(SERVICE_AnchorSync,
     0x056d8b9e, 0xad7a, 0x44fc, 0x94, 0x6f, 0x1d, 0x63, 0xa2, 0x5c, 0xda, 0x9a );
DEFINE_DEVSVCGUID(NAMESPACE_AnchorSyncSvc,
     0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa );
DEFINE_DEVSVCPROPKEY(PKEY_AnchorSyncSvc_VersionProps,
     0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa ,
     2 );
DEFINE_DEVSVCPROPKEY(PKEY_AnchorSyncSvc_ReplicaID,
     0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa ,
     3 );
DEFINE_DEVSVCPROPKEY(PKEY_AnchorSyncSvc_KnowledgeObjectID,
     0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa ,
     4 );
DEFINE_DEVSVCPROPKEY(PKEY_AnchorSyncSvc_LastSyncProxyID,
     0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa ,
     5 );
DEFINE_DEVSVCPROPKEY(PKEY_AnchorSyncSvc_CurrentAnchor,
     0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa ,
     6 );
DEFINE_DEVSVCPROPKEY(PKEY_AnchorSyncSvc_ProviderVersion,
     0xe65b8fb7, 0x8fc7, 0x4278, 0xb9, 0xa3, 0xba, 0x14, 0xc2, 0xdb, 0x40, 0xfa ,
     7 );
DEFINE_DEVSVCGUID(FORMAT_AnchorSyncKnowledge,
     0x37c550bc, 0xf231, 0x4727, 0xbb, 0xbc, 0x4c, 0xb3, 0x3a, 0x3f, 0x3e, 0xcd );
DEFINE_DEVSVCGUID(FORMAT_AnchorSyncSvc_AnchorResults,
     0xf35527c1, 0xce4a, 0x487a, 0x9d, 0x29, 0x93, 0x83, 0x35, 0x69, 0x32, 0x1e );
DEFINE_DEVSVCGUID(NAMESPACE_AnchorResults,
     0x516b5dce, 0x8d45, 0x430f, 0x80, 0x5c, 0x25, 0xe5, 0x10, 0x6d, 0x8b, 0x1f );
DEFINE_DEVSVCPROPKEY(PKEY_AnchorResults_AnchorState,
     0x516b5dce, 0x8d45, 0x430f, 0x80, 0x5c, 0x25, 0xe5, 0x10, 0x6d, 0x8b, 0x1f ,
     2 );
DEFINE_DEVSVCPROPKEY(PKEY_AnchorResults_Anchor,
     0x516b5dce, 0x8d45, 0x430f, 0x80, 0x5c, 0x25, 0xe5, 0x10, 0x6d, 0x8b, 0x1f ,
     3 );
DEFINE_DEVSVCPROPKEY(PKEY_AnchorResults_ResultObjectID,
     0x516b5dce, 0x8d45, 0x430f, 0x80, 0x5c, 0x25, 0xe5, 0x10, 0x6d, 0x8b, 0x1f ,
     4 );
DEFINE_DEVSVCGUID(METHOD_AnchorSyncSvc_GetChangesSinceAnchor,
     0x37c550bc, 0xf231, 0x4727, 0xbb, 0xbc, 0x4c, 0xb3, 0x3a, 0x3f, 0x3e, 0xcd );
