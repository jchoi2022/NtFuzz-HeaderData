#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/TransportMask.h>
extern "C" {
typedef struct _alljoyn_sessionopts_handle* alljoyn_sessionopts;
typedef uint16_t alljoyn_sessionport;
typedef uint32_t alljoyn_sessionid;
extern AJ_API alljoyn_sessionopts AJ_CALL alljoyn_sessionopts_create(uint8_t traffic, QCC_BOOL isMultipoint,
                                                                     uint8_t proximity, alljoyn_transportmask transports);
extern AJ_API void AJ_CALL alljoyn_sessionopts_destroy(alljoyn_sessionopts opts);
extern AJ_API uint8_t AJ_CALL alljoyn_sessionopts_get_traffic(const alljoyn_sessionopts opts);
extern AJ_API void AJ_CALL alljoyn_sessionopts_set_traffic(alljoyn_sessionopts opts, uint8_t traffic);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_sessionopts_get_multipoint(const alljoyn_sessionopts opts);
extern AJ_API void AJ_CALL alljoyn_sessionopts_set_multipoint(alljoyn_sessionopts opts, QCC_BOOL isMultipoint);
extern AJ_API uint8_t AJ_CALL alljoyn_sessionopts_get_proximity(const alljoyn_sessionopts opts);
extern AJ_API void AJ_CALL alljoyn_sessionopts_set_proximity(alljoyn_sessionopts opts, uint8_t proximity);
extern AJ_API alljoyn_transportmask AJ_CALL alljoyn_sessionopts_get_transports(const alljoyn_sessionopts opts);
extern AJ_API void AJ_CALL alljoyn_sessionopts_set_transports(alljoyn_sessionopts opts, alljoyn_transportmask transports);
extern AJ_API QCC_BOOL AJ_CALL alljoyn_sessionopts_iscompatible(const alljoyn_sessionopts one, const alljoyn_sessionopts other);
extern AJ_API int32_t AJ_CALL alljoyn_sessionopts_cmp(const alljoyn_sessionopts one, const alljoyn_sessionopts other);
}
