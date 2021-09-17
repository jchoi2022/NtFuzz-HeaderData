       
extern "C" {
struct AtlThunkData_t { };
AtlThunkData_t*
__stdcall
AtlThunk_AllocateData(
    void
    );
void
__stdcall
AtlThunk_InitData(
    AtlThunkData_t* Thunk,
    void* Proc,
    size_t FirstParameter
    );
WNDPROC
__stdcall
AtlThunk_DataToCode(
    AtlThunkData_t*
    );
void
__stdcall
AtlThunk_FreeData(
    AtlThunkData_t* Thunk
    );
}
