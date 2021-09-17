#include <crtdefs.h>
#pragma pack(push,_CRT_PACKING)
#error This header requires a C++ compiler ...
struct __type_info_node {
    void *memPtr;
    __type_info_node* next;
};
extern __type_info_node __type_info_root_node;
typedef int __TYPEINFO_OPERATOR_EQ_RET;
class type_info {
public:
    _CRTIMP_PURE_TYPEINFO virtual ~type_info();
    _CRTIMP_TYPEINFO __TYPEINFO_OPERATOR_EQ_RET _THISCALL operator==(_In_ const type_info& _Rhs) const;
    _CRTIMP_TYPEINFO __TYPEINFO_OPERATOR_EQ_RET _THISCALL operator!=(_In_ const type_info& _Rhs) const;
    _CRTIMP_TYPEINFO int _THISCALL before(_In_ const type_info& _Rhs) const;
    _Check_return_ _CRTIMP_TYPEINFO const char* _THISCALL name() const;
    _Check_return_ _CRTIMP_TYPEINFO const char* _THISCALL raw_name() const;
private:
    void *_m_data;
    char _m_d_name[1];
    type_info(_In_ const type_info& _Rhs);
    type_info& operator=(_In_ const type_info& _Rhs);
};
#include <stdexcpt.h>
class _CRTIMP bad_cast : public exception {
public:
    __CLR_OR_THIS_CALL bad_cast(_In_z_ const char * _Message = "bad cast");
    __CLR_OR_THIS_CALL bad_cast(_In_ const bad_cast & _Bad_cast);
    virtual __CLR_OR_THIS_CALL ~bad_cast();
};
class _CRTIMP bad_typeid : public exception {
public:
    bad_typeid(_In_z_ const char * _Message = "bad typeid");
    bad_typeid(_In_ const bad_typeid &);
    virtual ~bad_typeid();
};
class _CRTIMP __non_rtti_object : public bad_typeid {
public:
    __non_rtti_object(_In_z_ const char * _Message);
    __non_rtti_object(_In_ const __non_rtti_object &);
    virtual ~__non_rtti_object();
};
typedef type_info Type_info;
typedef bad_cast Bad_cast;
typedef bad_typeid Bad_typeid;
#pragma pack(pop)
