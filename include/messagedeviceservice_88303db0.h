#include <DeviceServices.h>
DEFINE_DEVSVCGUID(SERVICE_Message,
     0x29b43bd0, 0x6b16, 0x49af, 0xb7, 0x2e, 0x85, 0x77, 0x0a, 0xdf, 0xeb, 0xdd );
DEFINE_DEVSVCGUID(FORMAT_AbstractMessage,
     0xBB010000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7 );
DEFINE_DEVSVCGUID(FORMAT_AbstractMessageFolder,
     0xBA070000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7 );
DEFINE_DEVSVCGUID(NAMESPACE_MessageObj,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_Subject,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     2 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_Body,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     3 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_Priority,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     4 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_Category,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     10 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_Sender,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     18 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_To,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     20 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_CC,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     21 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_BCC,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     22 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_Read,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     23 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_ReceivedTime,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     24 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_PatternOriginalDateTime,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     26 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_PatternType,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     27 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_PatternValidStartDate,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     28 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_PatternValidEndDate,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     29 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_PatternPeriod,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     31 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_PatternDayOfWeek,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     32 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_PatternDayOfMonth,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     33 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_PatternMonthOfYear,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     34 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_PatternInstance,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     35 );
DEFINE_DEVSVCPROPKEY(PKEY_MessageObj_PatternDeleteDates,
     0xB28AE94B, 0x05A4, 0x4E8E, 0xBE, 0x01, 0x72, 0xCC, 0x7E, 0x09, 0x9D, 0x8F ,
     36 );
