  #define _SAL_VERSION_SAL2(_A)
  #define _SAL2_STRICT
  #define _SAL_VERSION_CHECK(_A) _SAL_VERSION_SAL2(_A)
  #define SAL_VERSION_CHECK(_A) _SAL_VERSION_CHECK(_A)
  #define SAL_VERSION_SAL2(_A) _SAL_VERSION_SAL2(_A)
#include <sal.h>
extern "C" {
                                       _When_(_String_length_(_Curr_) >= (c), __in_ecount(c)))
         __byte_writableTo((expr) ? (size) : (size) * 2) \
                                            _Post_ __valid __refparam)
                                            _Pre_ _Notref_ __deref __readonly \
                __byte_readableTo((expr) ? (size) : (size) * 2))
__inner_assume_validated_dec
__inner_assume_bound_dec
       _Success_((after) != NULL || (size) == 0) \
       _At_((after), _Post_maybenull_ _Post_writable_byte_size_(size) \
            _When_(((before) == NULL || (size) > 0), _Must_inspect_result_)) \
       _At_((before), _Post_ptr_invalid_ __drv_freesMem(Mem))
       _Reallocation_function_(_Curr_, before, size)
                                  _When_((size) >= 0, _In_reads_(size)))
           _SAL_L_Source_(_Flt_CompletionContext_Outptr_, (), _Outptr_result_maybenull_ _Pre_valid_ \
           _At_(*_Curr_, _Pre_null_ \
               _When_(return != FLT_PREOP_SUCCESS_WITH_CALLBACK && return != FLT_PREOP_SYNCHRONIZE, _Post_null_)))
     _SAL_L_Source_(_Flt_ConnectionCookie_Outptr_, (), _Outptr_result_maybenull_ _Pre_valid_ \
     _At_(*_Curr_, _Pre_null_ _On_failure_(_Post_null_)))
                                _SAL2_Source_(_Writes_and_advances_ptr_, (size), _At_((void*)_Curr_, _Inout_) \
                                _At_(_Curr_, \
                                    _Pre_writable_size_(size) \
                                    _Post_writable_size_(size) \
                                    _Post_satisfies_(_Curr_ - _Old_(_Curr_) == _Old_(size) - size)) \
                                _At_(_Old_(_Curr_), \
                                    _Post_readable_size_(_Old_(size) - size)))
                                _SAL2_Source_(_Writes_bytes_and_advances_ptr, (size), _At_((void*)_Curr_, _Inout_) \
                                _At_(_Curr_, \
                                    _Pre_writable_byte_size_(size) \
                                    _Post_writable_byte_size_(size) \
                                    _Post_satisfies_(((char*)_Curr_) - ((char*)_Old_(_Curr_)) == _Old_(size) - size)) \
                                _At_(_Old_(_Curr_), \
                                    _Post_readable_byte_size_(_Old_(size) - size)))
                                        _SAL2_Source_(_Translates_Win32_to_HRESULT_, (errorCode), \
                                        _Always_( \
                                        _When_((HRESULT)errorCode <= 0, \
                                          _At_(_Curr_, _Post_equal_to_((HRESULT)errorCode))) \
                                        _When_((HRESULT)errorCode > 0, \
                                          _At_(_Curr_, _Post_equal_to_((HRESULT)((errorCode & 0x0000FFFF) | (FACILITY_WIN32 << 16) | 0x80000000))))))
                                        _SAL2_Source_(_Translates_NTSTATUS_to_HRESULT_, (status), \
                                        _Always_( \
                                        _Post_equal_to_((HRESULT)(status | FACILITY_NT_BIT))))
                                        _SAL2_Source_(_Translates_last_error_to_HRESULT_, (), \
                                        _Always_( \
                                        _Post_satisfies_(_Curr_ < 0)))
}
void __pfx_assert(int, const char *);
void __pfx_assume(int, const char *);
#include <specstrings_strict.h>
#include <driverspecs.h>
#include <no_sal2.h>
