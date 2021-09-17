#include <alljoyn_c/AjAPI.h>
#include <stdarg.h>
#include <alljoyn_c/Status.h>
extern "C" {
typedef struct _alljoyn_msgarg_handle* alljoyn_msgarg;
typedef enum {
    ALLJOYN_INVALID = 0,
    ALLJOYN_ARRAY = 'a',
    ALLJOYN_BOOLEAN = 'b',
    ALLJOYN_DOUBLE = 'd',
    ALLJOYN_DICT_ENTRY = 'e',
    ALLJOYN_SIGNATURE = 'g',
    ALLJOYN_HANDLE = 'h',
    ALLJOYN_INT32 = 'i',
    ALLJOYN_INT16 = 'n',
    ALLJOYN_OBJECT_PATH = 'o',
    ALLJOYN_UINT16 = 'q',
    ALLJOYN_STRUCT = 'r',
    ALLJOYN_STRING = 's',
    ALLJOYN_UINT64 = 't',
    ALLJOYN_UINT32 = 'u',
    ALLJOYN_VARIANT = 'v',
    ALLJOYN_INT64 = 'x',
    ALLJOYN_BYTE = 'y',
    ALLJOYN_STRUCT_OPEN = '(',
    ALLJOYN_STRUCT_CLOSE = ')',
    ALLJOYN_DICT_ENTRY_OPEN = '{',
    ALLJOYN_DICT_ENTRY_CLOSE = '}',
    ALLJOYN_BOOLEAN_ARRAY = ('b' << 8) | 'a',
    ALLJOYN_DOUBLE_ARRAY = ('d' << 8) | 'a',
    ALLJOYN_INT32_ARRAY = ('i' << 8) | 'a',
    ALLJOYN_INT16_ARRAY = ('n' << 8) | 'a',
    ALLJOYN_UINT16_ARRAY = ('q' << 8) | 'a',
    ALLJOYN_UINT64_ARRAY = ('t' << 8) | 'a',
    ALLJOYN_UINT32_ARRAY = ('u' << 8) | 'a',
    ALLJOYN_INT64_ARRAY = ('x' << 8) | 'a',
    ALLJOYN_BYTE_ARRAY = ('y' << 8) | 'a',
    ALLJOYN_WILDCARD = '*'
} alljoyn_typeid;
extern AJ_API alljoyn_msgarg AJ_CALL alljoyn_msgarg_create();
extern AJ_API alljoyn_msgarg CDECL_CALL alljoyn_msgarg_create_and_set(const char* signature, ...);
extern AJ_API void AJ_CALL alljoyn_msgarg_destroy(alljoyn_msgarg arg);
extern AJ_API alljoyn_msgarg AJ_CALL alljoyn_msgarg_array_create(size_t size);
extern AJ_API alljoyn_msgarg AJ_CALL alljoyn_msgarg_array_element(alljoyn_msgarg arg, size_t index);
extern AJ_API QStatus CDECL_CALL alljoyn_msgarg_set(alljoyn_msgarg arg, const char* signature, ...);
extern AJ_API QStatus CDECL_CALL alljoyn_msgarg_get(alljoyn_msgarg arg, const char* signature, ...);
extern AJ_API alljoyn_msgarg AJ_CALL alljoyn_msgarg_copy(const alljoyn_msgarg source);
extern AJ_API void AJ_CALL alljoyn_msgarg_clone(alljoyn_msgarg destination, const alljoyn_msgarg source);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_msgarg_equal(alljoyn_msgarg lhv, alljoyn_msgarg rhv);
extern AJ_API QStatus CDECL_CALL alljoyn_msgarg_array_set(alljoyn_msgarg args, size_t* numArgs, const char* signature, ...);
extern AJ_API QStatus CDECL_CALL alljoyn_msgarg_array_get(const alljoyn_msgarg args, size_t numArgs, const char* signature, ...);
extern AJ_API size_t AJ_CALL alljoyn_msgarg_tostring(alljoyn_msgarg arg, char* str, size_t buf, size_t indent);
extern AJ_API size_t AJ_CALL alljoyn_msgarg_array_tostring(const alljoyn_msgarg args, size_t numArgs, char* str, size_t buf, size_t indent);
extern AJ_API size_t AJ_CALL alljoyn_msgarg_signature(alljoyn_msgarg arg, char* str, size_t buf);
extern AJ_API size_t AJ_CALL alljoyn_msgarg_array_signature(alljoyn_msgarg values, size_t numValues, char* str, size_t buf);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_msgarg_hassignature(alljoyn_msgarg arg, const char* signature);
extern AJ_API QStatus CDECL_CALL alljoyn_msgarg_getdictelement(alljoyn_msgarg arg, const char* elemSig, ...);
extern AJ_API alljoyn_typeid AJ_CALL alljoyn_msgarg_gettype(alljoyn_msgarg arg);
extern AJ_API void AJ_CALL alljoyn_msgarg_clear(alljoyn_msgarg arg);
extern AJ_API void AJ_CALL alljoyn_msgarg_stabilize(alljoyn_msgarg arg);
extern AJ_API QStatus CDECL_CALL alljoyn_msgarg_array_set_offset(alljoyn_msgarg args, size_t argOffset, size_t* numArgs, const char* signature, ...);
extern AJ_API QStatus CDECL_CALL alljoyn_msgarg_set_and_stabilize(alljoyn_msgarg arg, const char* signature, ...);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_uint8(alljoyn_msgarg arg, uint8_t y);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_bool(alljoyn_msgarg arg, QCC_BOOL b);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_int16(alljoyn_msgarg arg, int16_t n);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_uint16(alljoyn_msgarg arg, uint16_t q);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_int32(alljoyn_msgarg arg, int32_t i);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_uint32(alljoyn_msgarg arg, uint32_t u);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_int64(alljoyn_msgarg arg, int64_t x);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_uint64(alljoyn_msgarg arg, uint64_t t);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_double(alljoyn_msgarg arg, double d);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_string(alljoyn_msgarg arg, const char* s);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_objectpath(alljoyn_msgarg arg, const char* o);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_signature(alljoyn_msgarg arg, const char* g);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_uint8(const alljoyn_msgarg arg, uint8_t* y);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_bool(const alljoyn_msgarg arg, QCC_BOOL* b);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_int16(const alljoyn_msgarg arg, int16_t* n);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_uint16(const alljoyn_msgarg arg, uint16_t* q);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_int32(const alljoyn_msgarg arg, int32_t* i);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_uint32(const alljoyn_msgarg arg, uint32_t* u);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_int64(const alljoyn_msgarg arg, int64_t* x);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_uint64(const alljoyn_msgarg arg, uint64_t* t);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_double(const alljoyn_msgarg arg, double* d);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_string(const alljoyn_msgarg arg, char** s);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_objectpath(const alljoyn_msgarg arg, char** o);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_signature(const alljoyn_msgarg arg, char** g);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_variant(const alljoyn_msgarg arg, alljoyn_msgarg v);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_uint8_array(alljoyn_msgarg arg, size_t length, uint8_t* ay);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_bool_array(alljoyn_msgarg arg, size_t length, QCC_BOOL* ab);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_int16_array(alljoyn_msgarg arg, size_t length, int16_t* an);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_uint16_array(alljoyn_msgarg arg, size_t length, uint16_t* aq);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_int32_array(alljoyn_msgarg arg, size_t length, int32_t* ai);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_uint32_array(alljoyn_msgarg arg, size_t length, uint32_t* au);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_int64_array(alljoyn_msgarg arg, size_t length, int64_t* ax);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_uint64_array(alljoyn_msgarg arg, size_t length, uint64_t* at);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_double_array(alljoyn_msgarg arg, size_t length, double* ad);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_string_array(alljoyn_msgarg arg, size_t length, const char** as);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_objectpath_array(alljoyn_msgarg arg, size_t length, const char** ao);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_set_signature_array(alljoyn_msgarg arg, size_t length, const char** ag);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_uint8_array(const alljoyn_msgarg arg, size_t* length, uint8_t* ay);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_bool_array(const alljoyn_msgarg arg, size_t* length, QCC_BOOL* ab);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_int16_array(const alljoyn_msgarg arg, size_t* length, int16_t* an);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_uint16_array(const alljoyn_msgarg arg, size_t* length, uint16_t* aq);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_int32_array(const alljoyn_msgarg arg, size_t* length, int32_t* ai);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_uint32_array(const alljoyn_msgarg arg, size_t* length, uint32_t* au);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_int64_array(const alljoyn_msgarg arg, size_t* length, int64_t* ax);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_uint64_array(const alljoyn_msgarg arg, size_t* length, uint64_t* at);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_double_array(const alljoyn_msgarg arg, size_t* length, double* ad);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_get_variant_array(const alljoyn_msgarg arg, const char* signature, size_t* length, alljoyn_msgarg* av);
extern AJ_API size_t AJ_CALL alljoyn_msgarg_get_array_numberofelements(const alljoyn_msgarg arg);
extern AJ_API void AJ_CALL alljoyn_msgarg_get_array_element(const alljoyn_msgarg arg, size_t index, alljoyn_msgarg* element);
extern AJ_API const char* AJ_CALL alljoyn_msgarg_get_array_elementsignature(const alljoyn_msgarg arg, size_t index);
extern AJ_API alljoyn_msgarg AJ_CALL alljoyn_msgarg_getkey(alljoyn_msgarg arg);
extern AJ_API alljoyn_msgarg AJ_CALL alljoyn_msgarg_getvalue(alljoyn_msgarg arg);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_setdictentry(alljoyn_msgarg arg, alljoyn_msgarg key, alljoyn_msgarg value);
extern AJ_API QStatus AJ_CALL alljoyn_msgarg_setstruct(alljoyn_msgarg arg, alljoyn_msgarg struct_members, size_t num_members);
extern AJ_API size_t AJ_CALL alljoyn_msgarg_getnummembers(alljoyn_msgarg arg);
extern AJ_API alljoyn_msgarg AJ_CALL alljoyn_msgarg_getmember(alljoyn_msgarg arg, size_t index);
}
