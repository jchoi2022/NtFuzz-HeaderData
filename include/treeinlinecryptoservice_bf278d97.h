       
DEFINE_GUID(GUID_TREE_INLINE_CRYPTO_SERVICE,
    0xc28f7046, 0xf72e, 0x4f23, 0xb0, 0x61, 0xe5, 0x4, 0x21, 0xc5, 0x40, 0x4c);
typedef enum _INLINE_CRYPTO_DATA_UNIT_SIZE {
    InlineCryptoDataUnitSizeInvalid = 0x00,
    InlineCryptoDataUnitSize512 = 0x01,
    InlineCryptoDataUnitSize1024 = 0x02,
    InlineCryptoDataUnitSize2048 = 0x04,
    InlineCryptoDataUnitSize4096 = 0x08,
    InlineCryptoDataUnitSize8192 = 0x10,
    InlineCryptoDataUnitSize16384 = 0x20,
    InlineCryptoDataUnitSize32768 = 0x40,
    InlineCryptoDataUnitSize65536 = 0x80,
} INLINE_CRYPTO_DATA_UNIT_SIZE, *PINLINE_CRYPTO_DATA_UNIT_SIZE;
typedef struct _INLINE_CRYPTO_PROGRAM_KEY_IN {
    ULONG KeyIndex;
    ULONG CryptoCapabilityIndex;
    INLINE_CRYPTO_DATA_UNIT_SIZE DataUnitSize;
    ULONG KeySize;
    PVOID KeyVirtualAddress;
    PHYSICAL_ADDRESS KeyPhysicalAddress;
} INLINE_CRYPTO_PROGRAM_KEY_IN, *PINLINE_CRYPTO_PROGRAM_KEY_IN;
typedef struct _INLINE_CRYPTO_PROGRAM_KEY_OUT {
    NTSTATUS Status;
} INLINE_CRYPTO_PROGRAM_KEY_OUT, *PINLINE_CRYPTO_PROGRAM_KEY_OUT;
