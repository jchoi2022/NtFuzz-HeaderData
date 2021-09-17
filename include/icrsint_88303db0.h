#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <olectl.h>
#include <stddef.h>
class CADORecordBinding;
enum ADOFieldStatusEnum
{
 adFldOK = 0,
 adFldBadAccessor = 1,
 adFldCantConvertValue = 2,
 adFldNull = 3,
 adFldTruncated = 4,
 adFldSignMismatch = 5,
 adFldDataOverFlow = 6,
 adFldCantCreate = 7,
 adFldUnavailable = 8,
 adFldPermissionDenied = 9,
 adFldIntegrityViolation = 10,
 adFldSchemaViolation = 11,
 adFldBadStatus = 12,
 adFldDefault = 13
};
typedef struct stADO_BINDING_ENTRY
{
 ULONG_PTR ulOrdinal;
    WORD wDataType;
 BYTE bPrecision;
 BYTE bScale;
 ULONG_PTR ulSize;
 ULONG_PTR ulBufferOffset;
 ULONG_PTR ulStatusOffset;
 ULONG_PTR ulLengthOffset;
 ULONG_PTR ulADORecordBindingOffSet;
 BOOL fModify;
} ADO_BINDING_ENTRY;
 typedef cls ADORowClass; \
 const ADO_BINDING_ENTRY* STDMETHODCALLTYPE GetADOBindingEntries() { \
 static const ADO_BINDING_ENTRY rgADOBindingEntries[] = {
 {Ordinal, \
 DataType, \
 0, \
 0, \
 0, \
 offsetof(ADORowClass, Buffer), \
 offsetof(ADORowClass, Status), \
 0, \
 classoffset(CADORecordBinding, ADORowClass), \
 Modify},
 {Ordinal, \
 DataType, \
 0, \
 0, \
 0, \
 offsetof(ADORowClass, Buffer), \
 0, \
 0, \
 classoffset(CADORecordBinding, ADORowClass), \
 Modify},
 {Ordinal, \
 DataType, \
 Precision, \
 Scale, \
 0, \
 offsetof(ADORowClass, Buffer), \
 offsetof(ADORowClass, Status), \
 0, \
 classoffset(CADORecordBinding, ADORowClass), \
 Modify},
 {Ordinal, \
 DataType, \
 Precision, \
 Scale, \
 0, \
 offsetof(ADORowClass, Buffer), \
 0, \
 0, \
 classoffset(CADORecordBinding, ADORowClass), \
 Modify},
 {Ordinal, \
 DataType, \
 0, \
 0, \
 Size, \
 offsetof(ADORowClass, Buffer), \
 offsetof(ADORowClass, Status), \
 offsetof(ADORowClass, Length), \
 classoffset(CADORecordBinding, ADORowClass), \
 Modify},
 {Ordinal, \
 DataType, \
 0, \
 0, \
 Size, \
 offsetof(ADORowClass, Buffer), \
 offsetof(ADORowClass, Status), \
 0, \
 classoffset(CADORecordBinding, ADORowClass), \
 Modify},
 {Ordinal, \
 DataType, \
 0, \
 0, \
 Size, \
 offsetof(ADORowClass, Buffer), \
 0, \
 offsetof(ADORowClass, Length), \
 classoffset(CADORecordBinding, ADORowClass), \
 Modify},
 {Ordinal, \
 DataType, \
 0, \
 0, \
 Size, \
 offsetof(ADORowClass, Buffer), \
 0, \
 0, \
 classoffset(CADORecordBinding, ADORowClass), \
 Modify},
 return rgADOBindingEntries;}
class CADORecordBinding
{
public:
 STDMETHOD_(const ADO_BINDING_ENTRY*, GetADOBindingEntries) (VOID) PURE;
};
struct __declspec(uuid("00000544-0000-0010-8000-00aa006d2ea4")) IADORecordBinding;
DECLARE_INTERFACE_(IADORecordBinding, IUnknown)
{
public:
 STDMETHOD(BindToRecordset) (CADORecordBinding *pAdoRecordBinding) PURE;
 STDMETHOD(AddNew) (CADORecordBinding *pAdoRecordBinding) PURE;
 STDMETHOD(Update) (CADORecordBinding *pAdoRecordBinding) PURE;
};
#endif
#pragma endregion
