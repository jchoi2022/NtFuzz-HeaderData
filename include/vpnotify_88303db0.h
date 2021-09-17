#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
DECLARE_INTERFACE_(IVPBaseNotify, IUnknown)
{
public:
 STDMETHOD (RenegotiateVPParameters)(THIS_
        ) PURE;
};
DECLARE_INTERFACE_(IVPNotify, IVPBaseNotify)
{
public:
    STDMETHOD (SetDeinterlaceMode)(THIS_
       IN AMVP_MODE mode
      ) PURE;
    STDMETHOD (GetDeinterlaceMode)(THIS_
       OUT AMVP_MODE *pMode
      ) PURE;
};
DECLARE_INTERFACE_(IVPNotify2, IVPNotify)
{
public:
    STDMETHOD (SetVPSyncMaster)(THIS_
       IN BOOL bVPSyncMaster
      ) PURE;
    STDMETHOD (GetVPSyncMaster)(THIS_
       OUT BOOL *pbVPSyncMaster
      ) PURE;
};
DECLARE_INTERFACE_(IVPVBINotify, IVPBaseNotify)
{
public:
};
}
#endif
#pragma endregion
