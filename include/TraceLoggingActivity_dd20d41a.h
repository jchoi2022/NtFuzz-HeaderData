       
#include "TraceLoggingProvider.h"
#pragma region Public Interface
template<
    TraceLoggingHProvider const& provider,
    UINT64 keyword = 0,
    UINT8 level = 5,
    typename TlgReflectorTag = _TlgReflectorTag_Param0IsHProvider>
class TraceLoggingActivity;
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
template<
    TraceLoggingHProvider const& provider,
    UINT64 keyword = 0,
    UINT8 level = 5,
    typename TlgReflectorTag = _TlgReflectorTag_Param0IsHProvider>
class TraceLoggingThreadActivity;
class TraceLoggingThreadActivityIdSetter;
#endif
    __pragma(warning(push)) __pragma(warning(disable:4127)) \
    do { \
        _TlgActivityDecl(activity) \
        static const UINT64 _TlgActivity_Keyword = _TlgActivityRef(activity).Keyword;\
        static const UINT8 _TlgActivity_Level = _TlgActivityRef(activity).Level;\
        _TLG_CASSERT( \
            _TlgActivity_Keyword == (_TlgActivity_Keyword _TLG_FOREACH(_TlgKeywordVal, __VA_ARGS__)), \
            "Do not use TraceLoggingKeyword in TraceLoggingWriteStart. Keywords for START events are " \
            "specified in the activity type, e.g. TraceLoggingActivity<Provider,Keyword,Level>."); \
        _TLG_CASSERT( \
            _TlgActivity_Level == (_TlgActivity_Level _TLG_FOREACH(_TlgLevelVal, __VA_ARGS__)), \
            "Do not use TraceLoggingLevel in TraceLoggingWriteStart. The Level for START events is " \
            "specified in the activity type, e.g. TraceLoggingActivity<Provider,Keyword,Level>."); \
        _TlgActivityRef(activity).zInternalStart(); \
        TraceLoggingWriteActivity( \
            _TlgActivityRef(activity).Provider(), \
            (name), \
            _TlgActivityRef(activity).Id(), \
            _TlgActivityRef(activity).zInternalRelatedId(), \
            TraceLoggingOpcode(1 ), \
            TraceLoggingKeyword(_TlgActivity_Keyword), \
            TraceLoggingLevel(_TlgActivity_Level), \
            TraceLoggingDescription("~^" _TLG_PASTE(L, _TLG_STRINGIZE(activity)) L"^~"), \
            __VA_ARGS__); \
    } while(0) \
    __pragma(warning(pop)) \
    __pragma(warning(push)) __pragma(warning(disable:4127)) \
    do { \
        _TlgActivityDecl(activity) \
        static const UINT64 _TlgActivity_Keyword = _TlgActivityRef(activity).Keyword;\
        static const UINT8 _TlgActivity_Level = _TlgActivityRef(activity).Level;\
        _TLG_CASSERT( \
            _TlgActivity_Keyword == (_TlgActivity_Keyword _TLG_FOREACH(_TlgKeywordVal, __VA_ARGS__)), \
            "Do not use TraceLoggingKeyword in TraceLoggingWriteStop. Keywords for STOP events are " \
            "specified in the activity type, e.g. TraceLoggingActivity<Provider,Keyword,Level>."); \
        _TLG_CASSERT( \
            _TlgActivity_Level == (_TlgActivity_Level _TLG_FOREACH(_TlgLevelVal, __VA_ARGS__)), \
            "Do not use TraceLoggingLevel in TraceLoggingWriteStop. The Level for STOP events is " \
            "specified in the activity type, e.g. TraceLoggingActivity<Provider,Keyword,Level>."); \
        _TlgActivityRef(activity).zInternalStop(); \
        TraceLoggingWriteActivity( \
            _TlgActivityRef(activity).Provider(), \
            (name), \
            _TlgActivityRef(activity).Id(), \
            NULL, \
            TraceLoggingOpcode(2 ),\
            TraceLoggingKeyword(_TlgActivity_Keyword),\
            TraceLoggingLevel(_TlgActivity_Level),\
            TraceLoggingDescription("~^" _TLG_PASTE(L, _TLG_STRINGIZE(activity)) L"^~"),\
            __VA_ARGS__); \
    } while(0) \
    __pragma(warning(pop)) \
    __pragma(warning(push)) __pragma(warning(disable:4127)) \
    do { \
        _TlgActivityDecl(activity) \
        TraceLoggingWriteActivity( \
            _TlgActivityRef(activity).Provider(), \
            (name), \
            _TlgActivityRef(activity).Id(), \
            NULL, \
            __VA_ARGS__); \
    } while(0) \
    __pragma(warning(pop)) \
    __pragma(warning(push)) __pragma(warning(disable:4127)) \
    do { \
        _TlgActivityDecl(activity) \
        if (_TlgActivityRef(activity).IsStarted()) { \
        TraceLoggingWriteActivity( \
            _TlgActivityRef(activity).Provider(), \
            (name), \
            _TlgActivityRef(activity).Id(), \
            NULL, \
            __VA_ARGS__); \
        } \
    } while(0) \
    __pragma(warning(pop)) \
    TraceLoggingThreadActivity< \
        providerHandle, \
        0 _TLG_FOREACH(_TlgKeywordVal, __VA_ARGS__), \
        5 _TLG_FOREACH(_TlgLevelVal, __VA_ARGS__)> \
        _TlgFnActivity; \
    TraceLoggingWriteStart(_TlgFnActivity, _TlgThisFunctionName, __VA_ARGS__)
#pragma endregion
#pragma region Implementation
template<UINT64 keyword, UINT8 level>
void _TlgWriteActivityAutoStop(
    TraceLoggingHProvider provider,
    _In_ GUID const* pActivityId)
{
    TraceLoggingWriteActivity(
        provider,
        "ActivityStoppedAutomatically",
        pActivityId,
        NULL,
        TraceLoggingOpcode(2 ),
        TraceLoggingKeyword(keyword),
        TraceLoggingLevel(level));
}
inline bool _TlgGuidIsZero(GUID const& g)
{
    INT32 const* p = reinterpret_cast<INT32 const*>(&g);
    return
        p[0] == 0 &&
        p[1] == 0 &&
        p[2] == 0 &&
        p[3] == 0;
}
inline bool _TlgGuidEqual(GUID const& g1, GUID const& g2)
{
    INT32 const* p1 = reinterpret_cast<INT32 const*>(&g1);
    INT32 const* p2 = reinterpret_cast<INT32 const*>(&g2);
    return
        p1[0] == p2[0] &&
        p1[1] == p2[1] &&
        p1[2] == p2[2] &&
        p1[3] == p2[3];
}
template<
    typename DerivedTy,
    UINT64 keyword,
    UINT8 level>
class _TlgActivityBase
{
    _TlgActivityBase(const _TlgActivityBase&);
    _TlgActivityBase& operator=(const _TlgActivityBase&);
    void Reset()
    {
        m_State = Created;
        m_HasRelatedId = false;
    }
    enum State
    {
        Created,
        Started,
        Stopped,
        Destroyed
    };
    State m_State;
    bool m_HasRelatedId;
    GUID m_Id;
    GUID m_CapturedRelatedId;
protected:
    ~_TlgActivityBase()
    {
        if (m_State == Started)
        {
            zInternalStop();
            _TlgWriteActivityAutoStop<keyword, level>(
                static_cast<DerivedTy*>(this)->Provider(),
                &m_Id);
        }
        m_State = Destroyed;
    }
    _TlgActivityBase()
    {
        Reset();
    }
    void SetRelatedId(const GUID& relatedActivityId)
    {
        _TLG_ASSERT(m_State == Created, "_TlgActivityBase::SetRelatedId called from invalid state.");
        _TLG_ASSERT(!m_HasRelatedId, "_TlgActivityBase::RelatedActivity was already set.");
        m_CapturedRelatedId = relatedActivityId;
        m_HasRelatedId = true;
    }
    _Ret_opt_ const GUID* GetRelatedId() const
    {
        return m_HasRelatedId && !_TlgGuidIsZero(m_CapturedRelatedId) ? &m_CapturedRelatedId : NULL;
    }
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    void PushThreadActivityId()
    {
        _TLG_ASSERT(m_State == Created, "_TlgActivityBase::PushThreadActivityId called from invalid state.");
        _TLG_ASSERT(!m_HasRelatedId, "_TlgActivityBase::RelatedActivity was already set.");
        m_CapturedRelatedId = m_Id;
        ::EventActivityIdControl(EVENT_ACTIVITY_CTRL_GET_SET_ID, &m_CapturedRelatedId);
        m_HasRelatedId = true;
    }
    void PopThreadActivityId()
    {
        _TLG_ASSERT(m_State == Started, "_TlgActivityBase::PopThreadActivityId called from invalid state.");
        if (m_HasRelatedId)
        {
            ::EventActivityIdControl(EVENT_ACTIVITY_CTRL_GET_SET_ID, &m_CapturedRelatedId);
            _TLG_ASSERT(_TlgGuidEqual(m_Id, m_CapturedRelatedId), "_TlgActivityBase: current id does not match set id!");
        }
    }
#endif
public:
    static const UINT64 Keyword = keyword;
    static const UINT8 Level = level;
    _Ret_ const GUID* Id() const
    {
        _TLG_ASSERT(m_State >= Started, "TraceLoggingActivity::Id() called from invalid state");
        _TLG_ASSERT(m_State != Destroyed, "TraceLoggingActivity::Id() called after destruction");
        return &m_Id;
    }
    bool IsStarted() const
    {
        return m_State == Started;
    }
    _Ret_opt_ const GUID* zInternalRelatedId() const
    {
        _TLG_ASSERT(m_State == Started, "TraceLoggingWriteStart race condition");
        return GetRelatedId();
    }
    void zInternalStart()
    {
        _TLG_ASSERT(m_State == Created, "TraceLoggingWriteStart called from invalid state.");
        DerivedTy* pDerived = static_cast<DerivedTy*>(this);
        if (TraceLoggingProviderEnabled(pDerived->Provider(), level, keyword))
        {
            CreateActivityId(0, pDerived, m_Id);
            pDerived->OnStarted();
        }
        else
        {
            ZeroMemory(&m_Id, sizeof(m_Id));
        }
        m_State = Started;
    }
    void zInternalStop()
    {
        _TLG_ASSERT(m_State == Started, "TraceLoggingWriteStop called from invalid state");
        DerivedTy* pDerived = static_cast<DerivedTy*>(this);
        pDerived->OnStopped();
        m_State = Stopped;
    }
private:
    template<typename _DerivedTy>
    static auto CreateActivityId(int, _In_ _DerivedTy* Derived, _Out_ GUID& ChildActivityId) ->
        decltype(Derived->CreateActivityId(ChildActivityId), void(0))
    {
        Derived->CreateActivityId(ChildActivityId);
    }
    template<typename _DerivedTy>
    static auto CreateActivityId(long, _In_ _DerivedTy* Derived, _Out_ GUID& ChildActivityId) ->
        void
    {
        (void)Derived;
        ::EventActivityIdControl(EVENT_ACTIVITY_CTRL_CREATE_ID, &ChildActivityId);
    }
};
template<
    TraceLoggingHProvider const& provider,
    UINT64 keyword,
    UINT8 level,
    typename TlgReflectorTag>
class TraceLoggingActivity
    : public _TlgActivityBase<TraceLoggingActivity<provider, keyword, level, TlgReflectorTag>, keyword, level>
{
    typedef
        _TlgActivityBase<TraceLoggingActivity<provider, keyword, level, TlgReflectorTag>, keyword, level>
        BaseTy;
    friend BaseTy;
    void OnStarted()
    {
    }
    void OnStopped()
    {
    }
public:
    TraceLoggingActivity()
    {
    }
    TraceLoggingHProvider Provider() const
    {
        return provider;
    }
    template<typename ActivityTy>
    void SetRelatedActivity(_In_ const ActivityTy& relatedActivity)
    {
        BaseTy::SetRelatedId(*relatedActivity.Id());
    }
    void SetRelatedActivityId(_In_ const GUID& relatedActivityId)
    {
        BaseTy::SetRelatedId(relatedActivityId);
    }
    void SetRelatedActivityId(_In_ const GUID* relatedActivityId)
    {
        _TLG_ASSERT(relatedActivityId != NULL, "TraceLoggingActivity SetRelatedActivity called with NULL id.");
        BaseTy::SetRelatedId(*relatedActivityId);
    }
};
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
template<
    TraceLoggingHProvider const& provider,
    UINT64 keyword,
    UINT8 level,
    typename TlgReflectorTag>
class TraceLoggingThreadActivity
    : public _TlgActivityBase<TraceLoggingThreadActivity<provider, keyword, level, TlgReflectorTag>, keyword, level>
{
    typedef
        _TlgActivityBase<TraceLoggingThreadActivity<provider, keyword, level, TlgReflectorTag>, keyword, level>
        BaseTy;
    friend BaseTy;
    void OnStarted()
    {
        BaseTy::PushThreadActivityId();
    }
    void OnStopped()
    {
        BaseTy::PopThreadActivityId();
    }
public:
    TraceLoggingThreadActivity()
    {
    }
    TraceLoggingHProvider Provider() const
    {
        return provider;
    }
};
class TraceLoggingThreadActivityIdSetter
{
    GUID m_ActivityId;
    GUID m_SavedActivityId;
    TraceLoggingThreadActivityIdSetter(const TraceLoggingThreadActivityIdSetter&);
    const TraceLoggingThreadActivityIdSetter& operator=(const TraceLoggingThreadActivityIdSetter&);
public:
    explicit TraceLoggingThreadActivityIdSetter(_In_ const GUID& activityId)
        : m_ActivityId(activityId)
        , m_SavedActivityId(activityId)
    {
        ::EventActivityIdControl(EVENT_ACTIVITY_CTRL_GET_SET_ID, &m_SavedActivityId);
    }
    explicit TraceLoggingThreadActivityIdSetter(_In_ const GUID* activityId)
        : m_ActivityId(*activityId)
        , m_SavedActivityId(*activityId)
    {
        ::EventActivityIdControl(EVENT_ACTIVITY_CTRL_GET_SET_ID, &m_SavedActivityId);
    }
    ~TraceLoggingThreadActivityIdSetter()
    {
        ::EventActivityIdControl(EVENT_ACTIVITY_CTRL_GET_SET_ID, &m_SavedActivityId);
        _TLG_ASSERT(_TlgGuidEqual(m_ActivityId, m_SavedActivityId), "TraceLoggingThreadActivityIdSetter current id does not match set id!");
    }
};
#endif
#pragma endregion
