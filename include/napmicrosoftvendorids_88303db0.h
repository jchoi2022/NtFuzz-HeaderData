       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C"
{
   static UINT32 MicrosoftVendorId = 0x137;
   static UINT32 NapSystemId = 0x00013700;
   static UINT32 NapDhcpEnforcementId = 0x00013701;
   static UINT32 NapRasEnforcementId = 0x00013702;
   static UINT32 NapIpsecEnforcementId = 0x00013703;
   static UINT32 Nap8021xEnforcementId = 0x00013704;
   static UINT32 NapAnywhereAccessEnforcementId = 0x00013705;
   static UINT32 NapIsaEnforcementId = 0x00013706;
   static UINT32 NapEapEnforcementId = 0x00013707;
   static UINT32 NapOutOfBoxSystemHealthId = 0x00013780;
   static UINT32 NapSmsSystemHealthId = 0x00013781;
   static UINT32 NapFCSv1SystemHealthId = 0x00013782;
   static UINT32 NapFCSv2SystemHealthId = 0x00013783;
   static UINT32 NapTpmSystemHealthId = 0x00013784;
}
#endif
#pragma endregion
