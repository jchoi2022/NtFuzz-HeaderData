       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DECLARE_INTERFACE_IID_(INotifyReplica, IUnknown, "99180163-DA16-101A-935C-444553540000")
{
   IFACEMETHODIMP QueryInterface(THIS_
                                 _In_ REFIID riid,
                                 _Outptr_ void **ppvObject) PURE;
   IFACEMETHODIMP_(ULONG) AddRef(THIS) PURE;
   IFACEMETHODIMP_(ULONG) Release(THIS) PURE;
   STDMETHOD(YouAreAReplica)(THIS_
                             ULONG ulcOtherReplicas,
                             _Inout_updates_(ulcOtherReplicas) IMoniker **rgpmkOtherReplicas) PURE;
};
DECLARE_INTERFACE_IID_(IReconcileInitiator, IUnknown, "99180161-DA16-101A-935C-444553540000")
{
   IFACEMETHODIMP QueryInterface(THIS_
                                 _In_ REFIID riid,
                                 _Outptr_ void **ppvObject) PURE;
   IFACEMETHODIMP_(ULONG) AddRef(THIS) PURE;
   IFACEMETHODIMP_(ULONG) Release(THIS) PURE;
   STDMETHOD(SetAbortCallback)(THIS_
                               _Inout_opt_ IUnknown *punkForAbort) PURE;
   STDMETHOD(SetProgressFeedback)(THIS_
                                  ULONG ulProgress,
                                  ULONG ulProgressMax) PURE;
};
typedef enum _reconcilef
{
   RECONCILEF_MAYBOTHERUSER = 0x0001,
   RECONCILEF_FEEDBACKWINDOWVALID = 0x0002,
   RECONCILEF_NORESIDUESOK = 0x0004,
   RECONCILEF_OMITSELFRESIDUE = 0x0008,
   RECONCILEF_RESUMERECONCILIATION = 0x0010,
   RECONCILEF_YOUMAYDOTHEUPDATES = 0x0020,
   RECONCILEF_ONLYYOUWERECHANGED = 0x0040,
   ALL_RECONCILE_FLAGS = (RECONCILEF_MAYBOTHERUSER |
                                       RECONCILEF_FEEDBACKWINDOWVALID |
                                       RECONCILEF_NORESIDUESOK |
                                       RECONCILEF_OMITSELFRESIDUE |
                                       RECONCILEF_RESUMERECONCILIATION |
                                       RECONCILEF_YOUMAYDOTHEUPDATES |
                                       RECONCILEF_ONLYYOUWERECHANGED)
}
RECONCILEF;
DECLARE_INTERFACE_IID_(IReconcilableObject, IUnknown, "99180162-DA16-101A-935C-444553540000")
{
   IFACEMETHODIMP QueryInterface(THIS_
                                 _In_ REFIID riid,
                                 _Outptr_ void **ppvObject) PURE;
   IFACEMETHODIMP_(ULONG) AddRef(THIS) PURE;
   IFACEMETHODIMP_(ULONG) Release(THIS) PURE;
   STDMETHOD(Reconcile)(THIS_
                        _Inout_ IReconcileInitiator *pInitiator,
                        DWORD dwFlags,
                        HWND hwndOwner,
                        HWND hwndProgressFeedback,
                        ULONG ulcInput,
                        _Inout_updates_(ulcInput) IMoniker **rgpmkOtherInput,
                        _Out_ PLONG plOutIndex,
                        _Inout_ IStorage *pstgNewResidues,
                        _Reserved_ PVOID pvReserved) PURE;
   STDMETHOD(GetProgressFeedbackMaxEstimate)(THIS_
                                             _Out_ PULONG pulProgressMax) PURE;
};
DECLARE_INTERFACE_IID_(IBriefcaseInitiator, IUnknown, "99180164-DA16-101A-935C-444553540000")
{
   IFACEMETHODIMP QueryInterface(THIS_
                                 _In_ REFIID riid,
                                 _Outptr_ void **ppvObject) PURE;
   IFACEMETHODIMP_(ULONG) AddRef(THIS) PURE;
   IFACEMETHODIMP_(ULONG) Release(THIS) PURE;
   STDMETHOD(IsMonikerInBriefcase)(THIS_
                                   _Inout_ IMoniker *pmk) PURE;
};
#endif
#pragma endregion
