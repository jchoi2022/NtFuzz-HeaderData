#include <alljoyn_c/AjAPI.h>
extern "C" {
extern AJ_API const char* AJ_CALL alljoyn_getversion();
extern AJ_API const char* AJ_CALL alljoyn_getbuildinfo();
extern AJ_API uint32_t AJ_CALL alljoyn_getnumericversion();
}
