#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/Status.h>
extern "C" {
extern AJ_API QStatus AJ_CALL alljoyn_init(void);
extern AJ_API QStatus AJ_CALL alljoyn_shutdown(void);
extern AJ_API QStatus AJ_CALL alljoyn_routerinit(void);
extern AJ_API QStatus AJ_CALL alljoyn_routerinitwithconfig(AJ_PCSTR configXml);
extern AJ_API QStatus AJ_CALL alljoyn_routershutdown(void);
}
