    0x3C0D501AL, 0x140B, 0x11D1, 0xB4, 0x0F, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("3C0D501A-140B-11D1-B40F-00A0C9223196", KSNAME_Server);
    0x3C0D501BL, 0x140B, 0x11D1, 0xB4, 0x0F, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("3C0D501B-140B-11D1-B40F-00A0C9223196", KSPROPSETID_Service);
typedef enum {
    KSPROPERTY_SERVICE_BUILDCACHE,
    KSPROPERTY_SERVICE_MERIT
} KSPROPERTY_SERVICE;
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_SERVICE_BUILDCACHE,\
        NULL,\
        sizeof(KSPROPERTY),\
        sizeof(L"\\\\?\\"),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
    DEFINE_KSPROPERTY_ITEM(\
        KSPROPERTY_SERVICE_MERIT,\
        NULL,\
        sizeof(KSPROPERTY),\
        sizeof(ULONG) + sizeof(L"\\\\?\\"),\
        (SetHandler),\
        NULL, 0, NULL, NULL, 0)
