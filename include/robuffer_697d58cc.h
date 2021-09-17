#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <apiset.h>
#include <apisetcconv.h>
#include <objidl.h>
STDAPI
RoGetBufferMarshaler(
    _Outptr_ IMarshal** bufferMarshaler
    );
namespace Windows { namespace Storage { namespace Streams {
struct __declspec(uuid("905a0fef-bc53-11df-8c49-001e4fc686da")) IBufferByteAccess : public IUnknown
{
    STDMETHOD(Buffer)(_Outptr_result_buffer_(_Inexpressible_("size given by different API")) byte **value) = 0;
};
} } }
