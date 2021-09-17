#include "DriverSpecs.h"
extern "C" {
    #define DISPATCH_LEVEL 2
    #define APC_LEVEL 1
    #define PASSIVE_LEVEL 0
    #define HIGH_LEVEL 15
    __ANNOTATION(SAL_IRQL(__int64);)
    #undef __drv_setsIRQL
    #define __drv_setsIRQL(irql) \
        _SAL1_Source_(__drv_setsIRQL, (), _Post_ _SA_annotes1(SAL_IRQL,irql))
    __ANNOTATION(SAL_raiseIRQL(__int64);)
    #undef _IRQL_raises_
    #define _IRQL_raises_(irql) \
        _SAL2_Source_(_IRQL_raises_, (), _Post_ _SA_annotes1(SAL_raiseIRQL,irql))
    #undef __drv_raisesIRQL
    #define __drv_raisesIRQL(irql) _SAL1_Source_(__drv_raisesIRQL, (), _IRQL_raises_(irql))
    __ANNOTATION(SAL_IRQL(__int64);)
    #undef _IRQL_requires_
    #define _IRQL_requires_(irql) \
        _SAL2_Source_(_IRQL_requires_, (irql), _Pre_ _SA_annotes1(SAL_IRQL,irql))
    #undef __drv_requiresIRQL
    #define __drv_requiresIRQL(irql) _SAL1_Source_(__drv_requiresIRQL, (), _IRQL_requires_(irql))
    __ANNOTATION(SAL_maxIRQL(__int64);)
    #undef _IRQL_requires_max_
    #define _IRQL_requires_max_(irql) \
        _SAL2_Source_(_IRQL_requires_max_, (irql), _Pre_ _SA_annotes1(SAL_maxIRQL,irql))
    #undef __drv_maxIRQL
    #define __drv_maxIRQL(irql) _SAL1_Source_(__drv_maxIRQL, (), _IRQL_requires_max_(irql))
    __ANNOTATION(SAL_minIRQL(__int64);)
    #undef _IRQL_requires_min_
    #define _IRQL_requires_min_(irql) \
        _SAL2_Source_(_IRQL_requires_min_, (irql), _Pre_ _SA_annotes1(SAL_minIRQL,irql))
    #undef __drv_minIRQL
    #define __drv_minIRQL(irql) _SAL1_Source_(__drv_minIRQL, (), _IRQL_requires_min_(irql))
    __ANNOTATION(SAL_saveIRQL(void);)
    #undef _IRQL_saves_
    #define _IRQL_saves_ \
        _SAL2_Source_(_IRQL_saves_, (), _Post_ _SA_annotes0(SAL_saveIRQL))
    #undef __drv_savesIRQL
    #define __drv_savesIRQL _SAL1_Source_(__drv_savesIRQL, (), _IRQL_saves_)
    __ANNOTATION(SAL_saveIRQLGlobal(__In_impl_ char *, ...);)
    #undef _IRQL_saves_global_
    #define _IRQL_saves_global_(kind,param) \
        _SAL2_Source_(_IRQL_saves_global_, (kind, param), _Post_ _SA_annotes2(SAL_saveIRQLGlobal,#kind, param\t))
    #undef __drv_savesIRQLGlobal
    #define __drv_savesIRQLGlobal(kind,param) _SAL1_Source_(__drv_savesIRQLGlobal, (), _IRQL_saves_global_(kind, param))
    __ANNOTATION(SAL_restoreIRQL(void);)
    #undef _IRQL_restores_
    #define _IRQL_restores_ \
        _SAL2_Source_(_IRQL_restores_, (), _Post_ _SA_annotes0(SAL_restoreIRQL))
    #undef __drv_restoresIRQL
    #define __drv_restoresIRQL _SAL1_Source_(__drv_restoresIRQL, (), _IRQL_restores_)
    __ANNOTATION(SAL_restoreIRQLGlobal(__In_impl_ char *, ...);)
    #undef _IRQL_restores_global_
    #define _IRQL_restores_global_(kind,param) \
        _SAL2_Source_(_IRQL_restores_global_, (kind, param), _Post_ _SA_annotes2(SAL_restoreIRQLGlobal, #kind, param\t))
    #undef __drv_restoresIRQLGlobal
    #define __drv_restoresIRQLGlobal(kind,param) _SAL1_Source_(__drv_restoresIRQLGlobal, (), _IRQL_restores_global_(kind, param))
    __ANNOTATION(SAL_minFunctionIrql(__int64);)
    #undef _IRQL_always_function_min_
    #define _IRQL_always_function_min_(irql) \
        _SAL2_Source_(_IRQL_always_function_min_, (irql), _Pre_ _SA_annotes1(SAL_minFunctionIrql,irql))
    #undef __drv_minFunctionIRQL
    #define __drv_minFunctionIRQL(irql) _SAL1_Source_(__drv_minFunctionIRQL, (), _IRQL_always_function_min_(irql))
    __ANNOTATION(SAL_maxFunctionIrql(__int64);)
    #undef _IRQL_always_function_max_
    #define _IRQL_always_function_max_(irql) \
        _SAL2_Source_(_IRQL_always_function_max_, (irql), _Pre_ _SA_annotes1(SAL_maxFunctionIrql,irql))
    #undef __drv_maxFunctionIRQL
    #define __drv_maxFunctionIRQL(irql) _SAL1_Source_(__drv_maxFunctionIRQL, (), _IRQL_always_function_max_(irql) )
    __ANNOTATION(SAL_sameIRQL(void);)
    #undef _IRQL_requires_same_
    #define _IRQL_requires_same_ \
        _SAL2_Source_(_IRQL_requires_same_, (), _Post_ _SA_annotes0(SAL_sameIRQL))
    #undef __drv_sameIRQL
    #define __drv_sameIRQL _SAL1_Source_(__drv_sameIRQL, (), _IRQL_requires_same_)
    __ANNOTATION(SAL_UseCancelIrql(void);)
    #undef _IRQL_uses_cancel_
    #define _IRQL_uses_cancel_ \
        _SAL2_Source_(_IRQL_uses_cancel_, (), _Post_ _SA_annotes0(SAL_UseCancelIrql))
    #undef __drv_useCancelIRQL
    #define __drv_useCancelIRQL _SAL1_Source_(__drv_useCancelIRQL, (), _IRQL_uses_cancel_)
    #undef _IRQL_inout_
    #define _IRQL_inout_ \
        _IRQL_saves_ _IRQL_restores_
    #undef _IRQL_is_cancel_
    #define _IRQL_is_cancel_ \
        _SAL2_Source_(_IRQL_is_cancel_, (), _IRQL_uses_cancel_ \
        _Releases_nonreentrant_lock_(_Global_cancel_spin_lock_) \
        _At_(return, _IRQL_always_function_min_(DISPATCH_LEVEL) \
                 _IRQL_requires_(DISPATCH_LEVEL))
    #undef __drv_isCancelIRQL
    #define __drv_isCancelIRQL _SAL1_Source_(__drv_isCancelIRQL, (), _IRQL_is_cancel_)
}
