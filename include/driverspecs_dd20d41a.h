#include <specstrings.h>
#include "sdv_driverspecs.h"
#include <concurrencysal.h>
extern "C" {
    #define __internal_kernel_driver
    #define __kernel_code
    #define __kernel_driver
    #define __user_driver
    #define __user_code
    #define __drv_Mode_impl(x)
    #define __drv_WDM
    #define __drv_KMDF
    #define __drv_NDIS
    #define __prefast_operator_new_throws
    #define __prefast_operator_new_null
    #define _Analysis_assume_section_locked_(name)
    #define _Analysis_assume_section_unlocked_(name)
    #define _IRQL_limited_to_(level) \
        ASSERT(KeGetCurrentIrql() <= level); \
        _Analysis_assume_(KeGetCurrentIrql() <= level);
    #define __drv_deref(annotes) __deref _Group_(annotes _SAL_nop_impl_)
    #define __drv_in(annotes) _Pre_ _Group_(annotes _SAL_nop_impl_)
    #define __drv_in_deref(annotes) _Pre_ __deref _Group_(annotes _SAL_nop_impl_)
    #define __drv_out(annotes) _Post_ _Group_(annotes _SAL_nop_impl_)
    #define __drv_out_deref(annotes) _Post_ __deref _Group_(annotes _SAL_nop_impl_)
    #define __drv_when(cond, annotes) _When_(cond, annotes _SAL_nop_impl_)
    #define __drv_at(expr,annotes) _At_(expr, annotes _SAL_nop_impl_)
    #define __drv_fun(annotes) _At_(return,annotes _SAL_nop_impl_)
    #define __drv_ret(annotes) _At_(return,annotes _SAL_nop_impl_)
    #define __drv_arg(expr,annotes) _At_(expr,annotes)
    #define __drv_unit(p) \
      typedef int ___drv_unit_##p \
                __GENSYM(__prefast_flag_kernel_driver_mode);
    #define ___drv_unit_internal_kernel_driver \
         _SAL_L_Source_(__drv_unit_internal_kernel_driver, (), _SA_annotes0(SAL_internal_kernel_driver))
    #define ___drv_unit_kernel_code \
            _SAL_L_Source_(___drv_unit_kernel_code, (), _SA_annotes0(SAL_kernel) _SA_annotes0(SAL_nodriver))
    #define ___drv_unit_kernel_driver \
            _SAL_L_Source_(___drv_unit_kernel_driver, (), _SA_annotes0(SAL_kernel) _SA_annotes0(SAL_driver))
    #define ___drv_unit_user_driver \
            _SAL_L_Source_(___drv_unit_user_driver, (), _SA_annotes0(SAL_nokernel) _SA_annotes0(SAL_driver))
    #define ___drv_unit_user_code \
            _SAL_L_Source_(___drv_unit_user_code, (), _SA_annotes0(SAL_nokernel) _SA_annotes0(SAL_nodriver))
    #define __drv_defined(x) _Macro_defined_( #x )
    #define __drv_functionClass(x) _SAL1_Source_(__drv_functionClass, (x), _Function_class_(x))
    __ANNOTATION(SAL_acquire(__In_impl_ char *);)
    #define _Kernel_acquires_resource_(kind) \
        _SAL2_Source_(_Kernel_acquires_resource_, (#kind), _Post_ _SA_annotes1(SAL_acquire, #kind))
    #define __drv_acquiresResource(kind) \
        _SAL1_1_Source_(__drv_acquiresResource, (kind), _Acquires_lock_(_Curr_))
    __ANNOTATION(SAL_release(__In_impl_ char *);)
    #define _Kernel_releases_resource_(kind) \
        _SAL2_Source_(_Kernel_releases_resource_, (#kind), _Post_ _SA_annotes1(SAL_release, #kind))
    #define __drv_releasesResource(kind) \
        _SAL1_1_Source_(__drv_releasesResource, (kind), _Releases_lock_(_Curr_))
    __ANNOTATION(SAL_acquireGlobal(__In_impl_ char *, ...);)
    #define __drv_innerAcquiresGlobal(kind, param) \
        _SAL1_1_Source_(_drv_innerAcquiresGlobal, (#kind, param\t), _Post_ _SA_annotes2(SAL_acquireGlobal, #kind, param\t))
    #define __drv_acquiresResourceGlobal(kind,param) \
        _SAL1_1_Source_(__drv_acquiresResourceGlobal, (kind, param), _Acquires_lock_(param))
    __ANNOTATION(SAL_releaseGlobal(__In_impl_ char *, ...);)
    #define __drv_innerReleasesGlobal(kind, param) \
        _SAL1_1_Source_(__drv_InnerReleasesGlobal, (#kind, param\t), _Post_ _SA_annotes2(SAL_releaseGlobal,#kind, param\t))
    #define __drv_releasesResourceGlobal(kind, param) \
        _SAL1_1_Source_(__drv_releasesResourceGlobal, (kind, param), _Releases_lock_(param))
    __ANNOTATION(SAL_mustHold(__In_impl_ char *);)
    #define _Kernel_requires_resource_held_(kind) \
        _SAL2_Source_(_Kernel_requires_resource_held_, (#kind), _Pre_ _SA_annotes1(SAL_mustHold, #kind))
    #define __drv_mustHold(kind) \
        _SAL_L_Source_(_drv_mustHold, (kind), \
        _When_(!_Arg_comp_(#kind,"Memory"), _Requires_lock_held_(_Curr_)) \
        _When_(_Arg_comp_(#kind,"Memory"), _Kernel_requires_resource_held_(kind)))
    __ANNOTATION(SAL_mustHoldGlobal(__In_impl_ char *, ...);)
    #define __drv_innerMustHoldGlobal(kind, param) \
        _SAL_L_Source_(__drv_innerMustHoldGlobal, (#kind, param\t), _Pre_ _SA_annotes2(SAL_mustHoldGlobal, #kind, param\t))
    #define __drv_mustHoldGlobal(kind,param) \
        _SAL1_1_Source_(__drv_mustHoldGlobal, (kind, param), _Requires_lock_held_(param))
    __ANNOTATION(SAL_neverHold(__In_impl_ char *);)
    #define _Kernel_requires_resource_not_held_(kind) \
        _SAL2_Source_(_Kernel_requires_resource_not_held_, (#kind), _Pre_ _SA_annotes1(SAL_neverHold, #kind))
    #define __drv_neverHold(kind) \
        _SAL1_1_Source_(__drv_neverHold, (kind), _Requires_lock_not_held_(_Curr_))
    __ANNOTATION(SAL_neverHoldGlobal(__In_impl_ char *, ...);)
    #define __drv_innerNeverHoldGlobal(kind, param) \
        _SAL_L_Source_(__drv_innterNeverHoldGlobal, (#kind, param\t), _Pre_ _SA_annotes2(SAL_neverHoldGlobal, #kind, param\t))
    #define __drv_neverHoldGlobal(kind,param) \
        _SAL1_1_Source_(__drv_neverHoldGlobal, (kind, param), _Requires_lock_not_held_(param))
    __PRIMOP(int, _Holds_resource_(__In_impl_ __deferTypecheck char *,__In_impl_ char *);)
    __PRIMOP(int, _Holds_resource_global_(__In_impl_ char *, ...);)
    #define __drv_setsIRQL(irql)
    #define _IRQL_raises_(irql)
    #define __drv_raisesIRQL _SAL1_1_Source_(__drv_raisesIRQL, (), _IRQL_raises_)
    #define _IRQL_requires_(irql)
    #define __drv_requiresIRQL(irql) _SAL1_1_Source_(__drv_requiresIRQL, (irql), _IRQL_requires_(irql))
    #define _IRQL_requires_max_(irql)
    #define __drv_maxIRQL(irql) _SAL1_1_Source_(__drv_maxIRQL, (irql), _IRQL_requires_max_(irql))
    #define _IRQL_requires_min_(irql)
    #define __drv_minIRQL(irql) _SAL1_1_Source_(__drv_minIRQL, (irql), _IRQL_requires_min_(irql))
    #define _IRQL_saves_
    #define __drv_savesIRQL _SAL1_1_Source_(__drv_savesIRQL, (), _IRQL_saves_)
    #define _IRQL_saves_global_(kind,param)
    #define __drv_savesIRQLGlobal(kind,param) _SAL1_1_Source_(__drv_savesIRQLGlobal, (kind,param), _IRQL_saves_global_(kind,param))
    #define _IRQL_restores_
    #define __drv_restoresIRQL _SAL1_1_Source_(__drv_restoresIRQL, (), _IRQL_restores_)
    #define _IRQL_restores_global_(kind,param)
    #define __drv_restoresIRQLGlobal(kind,param) _SAL1_1_Source_(__drv_restoresIRQLGlobal, (kind,param), _IRQL_restores_global_(kind,param))
    #define _IRQL_always_function_min_(irql)
    #define __drv_minFunctionIRQL(irql) _SAL1_1_Source_(__drv_minFunctionIRQL, (irql), _IRQL_always_function_min_(irql))
    #define _IRQL_always_function_max_(irql)
    #define __drv_maxFunctionIRQL(irql) _SAL1_1_Source_(__drv_maxFunctionIRQL, (irql), _IRQL_always_function_max_(irql))
    #define _IRQL_requires_same_
    #define __drv_sameIRQL _SAL1_1_Source_(__drv_sameIRQL, (), _IRQL_requires_same_)
    #define _IRQL_uses_cancel_
    #define __drv_useCancelIRQL _SAL1_1_Source_(__drv_usesCancelIRQL, (), _IRQL_uses_cancel_)
    #undef _IRQL_inout_
    #define _IRQL_inout_ \
        _IRQL_saves_ _IRQL_restores_
    __ANNOTATION(SAL_clearDoInit(enum __SAL_YesNo);)
    #define _Kernel_clear_do_init_(yesNo) \
        _SAL2_Source_(_Kernel_clear_do_init_, (yesNo), _Post_ _SA_annotes1(SAL_clearDoInit,yesNo))
    #define __drv_clearDoInit(yesNo) _SAL1_1_Source_(__drv_clearDoInit, (yesNo), _Kernel_clear_do_init_(yesNo))
    __ANNOTATION(SAL_IoGetDmaAdapter(void);)
    #define _Kernel_IoGetDmaAdapter_ \
        _SAL2_Source_(_Kernel_IoGetDmaAdapter_, (), _Post_ _SA_annotes0(SAL_IoGetDmaAdapter))
    #define __drv_IoGetDmaAdapter _SAL1_1_Source_(__drv_IoGetDmaAdapter, (), _Kernel_IoGetDmaAdapter_)
    __ANNOTATION(SAL_return(__In_impl_ __AuToQuOtE char *);)
    #define __drv_valueIs(arglist) \
            _SAL1_1_Source_(__drv_valueIs, (arglist), _Post_ _SA_annotes1(SAL_return,arglist))
    #define __drv_constant _SAL1_1_Source_(__drv_constant, (), _Literal_)
    #define __drv_nonConstant _SAL1_1_Source_(__drv_nonConstant, (), _Notliteral_)
    __ANNOTATION(SAL_strictTypeMatch(__int64);)
    #define __drv_strictTypeMatch(mode) \
        _SAL1_1_Source_(__drv_strictTypeMatch, (mode), _Pre_ _SA_annotes1(SAL_strictTypeMatch,mode))
    __ANNOTATION(SAL_strictType(__In_impl_ __AuToQuOtE char *);)
    #define __drv_strictType(typename,mode) \
        _SAL1_1_Source_(__drv_strictType, (typename,mode), _Pre_ _SA_annotes2(SAL_strictType, typename, mode))
        #define __drv_typeConst 0
        #define __drv_typeCond 1
        #define __drv_typeBitset 2
        #define __drv_typeExpr 3
    #define __drv_notPointer _SAL1_1_Source_(__drv_notPointer, (), _Pre_ _SA_annotes1(SAL_mayBePointer,__no))
    #define __drv_isObjectPointer _SAL1_1_Source_(__drv_isObjectPointer, (), _Points_to_data_)
    __ANNOTATION(SAL_IsAliased(void);)
    #define __drv_aliasesMem _SAL_L_Source_(__drv_aliasesMem, (), _Post_ _SA_annotes0(SAL_IsAliased))
    __ANNOTATION(SAL_NeedsRelease(enum __SAL_YesNo);)
    #define __drv_allocatesMem(kind) _SAL_L_Source_(__drv_allocatesMem, (kind), _Post_ _SA_annotes1(SAL_NeedsRelease,__yes))
    #define __drv_freesMem(kind) _SAL_L_Source_(__drv_freesMem, (kind), _Post_ _SA_annotes1(SAL_NeedsRelease,__no))
    __ANNOTATION(SAL_preferredFunction(__In_impl_ __AuToQuOtE char *,
        __In_impl_ __AuToQuOtE char *);)
    __ANNOTATION(SAL_preferredFunction3(__In_impl_ __AuToQuOtE char *,
        __In_impl_ __AuToQuOtE char *, __In_impl_ __int64);)
    #define __drv_preferredFunction(func,why) \
        _SAL_L_Source_(__drv_preferredFunction, (func,why), _Pre_ _SA_annotes2(SAL_preferredFunction, func, why))
    __ANNOTATION(SAL_error(__In_impl_ __AuToQuOtE char *);)
    __ANNOTATION(SAL_error2(__In_impl_ __AuToQuOtE char *, __In_impl_ __int64);)
    #define __drv_reportError(why) \
        _SAL_L_Source_(__drv_reportError, (why), _Pre_ _SA_annotes1(SAL_error,why))
    __ANNOTATION(SAL_floatSaved(void);)
    #define _Kernel_float_saved_ _SAL2_Source_(_Kernel_float_saved_, (), _Post_ _SA_annotes0(SAL_floatSaved))
    #define __drv_floatSaved _SAL1_1_Source_(__drv_floatSaved, (), _Kernel_float_saved_)
    __ANNOTATION(SAL_floatRestored(void);)
    #define _Kernel_float_restored_ _SAL2_Source_(_Kernel_float_restored_, (), _Post_ _SA_annotes0(SAL_floatRestored))
    #define __drv_floatRestored _SAL1_1_Source_(__drv_floatRestored, (), _Kernel_float_restored_)
    __ANNOTATION(SAL_floatUsed(void);)
    #define _Kernel_float_used_ _SAL2_Source_(_Kernel_float_used_, (), _Post_ _SA_annotes0(SAL_floatUsed))
    #define __drv_floatUsed _SAL1_1_Source_(__drv_floatUsed, (), _Kernel_float_used_)
    #define __drv_interlocked _SAL1_1_Source_(__drv_interlocked, (), _Interlocked_operand_)
    #define __drv_inTry _SAL_L_Source_(__drv_inTry, (), _Pre_ _SA_annotes1(SAL_inTry,__yes))
    #define __drv_notInTry _SAL_L_Source_(__drv_notInTry, (), _Pre_ _SA_annotes1(SAL_inTry,__no))
    __ANNOTATION(SAL_IsFormatString(__In_impl_ char *);)
    #define __drv_formatString(kind)\
        _SAL1_1_Source_(__drv_formatString, (kind), _SA_annotes1(SAL_IsFormatString, #kind))
 #define _Dispatch_type_(x) _SAL2_Source_(Dispatch_type_, (x), _SA_annotes1(SAL_functionClassNew, #x))
    #define __drv_dispatchType(x) \
     _SAL1_1_Source_(__drv_displatchType, (x), _SA_annotes1(SAL_functionClassNew, #x))
    #define __drv_dispatchType_other\
        _SAL1_1_Source_(__drv_dispatchType_other, (), __drv_dispatchType(IRP_MJ_OTHER))
    __ANNOTATION(SAL_completionType(__In_impl_ __AuToQuOtE char *);)
    #define __drv_completionType(kindlist)\
        _SAL1_1_Source_(__drv_completionType, (kindlist), _SA_annotes1(SAL_completionType, #kindlist))
    __ANNOTATION(SAL_callbackType(__In_impl_ __AuToQuOtE char *);)
    #define __drv_callbackType(kind)\
        _SAL1_1_Source_(__drv_callbackType, (kind), _SA_annotes1(SAL_callbackType, #kind))
    #define __drv_acquiresExclusiveResource(kind) \
        _SAL1_1_Source_(__drv_acquiresExclusiveResource, (kind), _Acquires_nonreentrant_lock_(_Curr_))
    #define __drv_releasesExclusiveResource(kind) \
        _SAL1_Source_(__drv_releasesExclusiveResource, (kind), _Releases_nonreentrant_lock_(_Curr_))
    #define __drv_acquiresExclusiveResourceGlobal(kind, param) \
        _SAL1_Source_(__drv_acquiresExclusiveResourceGlobal, (kind), _Acquires_nonreentrant_lock_(param))
    #define __drv_releasesExclusiveResourceGlobal(kind, param) \
        _SAL1_Source_(__drv_releasesExclusiveResourceGlobal, (kind), _Releases_nonreentrant_lock_(param))
    #define __drv_acquiresCancelSpinLock \
        _SAL1_Source_(__drv_acquiresCancelSpinLock, (kind), _Acquires_nonreentrant_lock_(_Global_cancel_spin_lock_))
    #define __drv_releasesCancelSpinLock \
        _SAL1_Source_(__drv_releasesCancelSpinLock, (kind), _Releases_nonreentrant_lock_(_Global_cancel_spin_lock_))
    #define __drv_mustHoldCancelSpinLock \
        _SAL1_Source_(__drv_mustHoldCancelSpinLock, (kind), _Requires_lock_held_(_Global_cancel_spin_lock_))
    #define __drv_neverHoldCancelSpinLock \
        _SAL1_Source_(__drv_neverHoldCancelSpinLock, (kind), _Requires_lock_not_held_(_Global_cancel_spin_lock_))
    #define __drv_holdsCancelSpinLock() \
        _SAL1_Source_(__drv_holdsCanselSpinLock, (kind), _Holds_resource_global_("CancelSpinLock",))
    #define __drv_acquiresCriticalRegion \
        _SAL1_Source_(__drv_acquiresCriticalRegion, (kind), _Acquires_lock_(_Global_critical_region_))
    #define __drv_releasesCriticalRegion \
        _SAL1_Source_(__drv_releasesCriticalRegion, (kind), _Releases_lock_(_Global_critical_region_))
    #define __drv_mustHoldCriticalRegion \
        _SAL1_Source_(__drv_mustHoldCriticalRegion, (kind), _Requires_lock_held_(_Global_critical_region_))
    #define __drv_neverHoldCriticalRegion \
        _SAL1_Source_(__drv_neverHoldCriticalRegion, (kind), _Requires_lock_not_held_(_Global_critical_region_))
    #define __drv_holdsCriticalRegion() \
        _SAL1_Source_(__drv_holdsCriticalRegion, (kind), _Holds_resource_global_("CriticalRegion",))
extern int _Global_priority_region_;
    #define __drv_acquiresPriorityRegion \
        _SAL1_Source_(__drv_acquiresPrioorityRegion, (kind), _Acquires_lock_(_Global_priority_region_))
    #define __drv_releasesPriorityRegion \
        _SAL1_Source_(__drv_releasesPriorityRegion, (kind), _Releases_lock_(_Global_priority_region_))
    #define __drv_mustHoldPriorityRegion \
        _SAL1_Source_(__drv_mustHoldPriorityRegion, (kind), _Requires_lock_held_(_Global_priority_region_))
    #define __drv_neverHoldPriorityRegion \
        _SAL1_Source_(__drv_neverHoldPriorityRegion, (kind), _Requires_lock_not_held_(_Global_priority_region_))
    #define __drv_holdsPriorityRegion() \
        _SAL1_Source_(__drv_holdsPriorityRegion, (kind), _Holds_resource_global_("PriorityRegion",))
    #define _IRQL_is_cancel_
    #define __drv_isCancelIRQL _IRQL_is_cancel_
    __PRIMOP(int, _Is_kernel_(void);)
    __PRIMOP(int, _Is_driver_(void);)
}
