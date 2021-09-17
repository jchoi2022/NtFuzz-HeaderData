#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
struct xid_t
{
 long formatID;
 long gtrid_length;
 long bqual_length;
 char data[XIDDATASIZE];
};
typedef struct xid_t XID;
int __cdecl ax_reg(int, XID *, long);
int __cdecl ax_unreg(int, long);
struct xa_switch_t
{
  char name[RMNAMESZ];
  long flags;
  long version;
  int (__cdecl *xa_open_entry)(char *, int, long);
  int (__cdecl *xa_close_entry)(char *, int, long);
  int (__cdecl *xa_start_entry)(XID *, int, long);
  int (__cdecl *xa_end_entry)(XID *, int, long);
  int (__cdecl *xa_rollback_entry)(XID *, int, long);
  int (__cdecl *xa_prepare_entry)(XID *, int, long);
  int (__cdecl *xa_commit_entry)(XID *, int, long);
  int (__cdecl *xa_recover_entry)(XID *, long, int, long);
  int (__cdecl *xa_forget_entry)(XID *, int, long);
  int (__cdecl *xa_complete_entry)(int *, int *, int, long);
};
typedef struct xa_switch_t xa_switch_t;
typedef int (__cdecl *XA_OPEN_EPT)(char *, int, long);
typedef int (__cdecl *XA_CLOSE_EPT)(char *, int, long);
typedef int (__cdecl *XA_START_EPT)(XID *, int, long);
typedef int (__cdecl *XA_END_EPT)(XID *, int, long);
typedef int (__cdecl *XA_ROLLBACK_EPT)(XID *, int, long);
typedef int (__cdecl *XA_PREPARE_EPT)(XID *, int, long);
typedef int (__cdecl *XA_COMMIT_EPT)(XID *, int, long);
typedef int (__cdecl *XA_RECOVER_EPT)(XID *, long, int, long);
typedef int (__cdecl *XA_FORGET_EPT)(XID *, int, long);
typedef int (__cdecl *XA_COMPLETE_EPT)(int *, int *, int, long);
#endif
#pragma endregion
