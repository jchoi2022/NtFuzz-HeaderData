#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICommandTree ICommandTree;
typedef interface IQuery IQuery;
#include "oledb.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack8.h>
extern RPC_IF_HANDLE __MIDL_itf_cmdtree_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cmdtree_0000_0000_v0_0_s_ifspec;
typedef WORD DBCOMMANDOP;
enum DBCOMMANDOPENUM
    {
        DBOP_scalar_constant = 0,
        DBOP_DEFAULT = ( DBOP_scalar_constant + 1 ) ,
        DBOP_NULL = ( DBOP_DEFAULT + 1 ) ,
        DBOP_bookmark_name = ( DBOP_NULL + 1 ) ,
        DBOP_catalog_name = ( DBOP_bookmark_name + 1 ) ,
        DBOP_column_name = ( DBOP_catalog_name + 1 ) ,
        DBOP_schema_name = ( DBOP_column_name + 1 ) ,
        DBOP_outall_name = ( DBOP_schema_name + 1 ) ,
        DBOP_qualifier_name = ( DBOP_outall_name + 1 ) ,
        DBOP_qualified_column_name = ( DBOP_qualifier_name + 1 ) ,
        DBOP_table_name = ( DBOP_qualified_column_name + 1 ) ,
        DBOP_nested_table_name = ( DBOP_table_name + 1 ) ,
        DBOP_nested_column_name = ( DBOP_nested_table_name + 1 ) ,
        DBOP_row = ( DBOP_nested_column_name + 1 ) ,
        DBOP_table = ( DBOP_row + 1 ) ,
        DBOP_sort = ( DBOP_table + 1 ) ,
        DBOP_distinct = ( DBOP_sort + 1 ) ,
        DBOP_distinct_order_preserving = ( DBOP_distinct + 1 ) ,
        DBOP_alias = ( DBOP_distinct_order_preserving + 1 ) ,
        DBOP_cross_join = ( DBOP_alias + 1 ) ,
        DBOP_union_join = ( DBOP_cross_join + 1 ) ,
        DBOP_inner_join = ( DBOP_union_join + 1 ) ,
        DBOP_left_semi_join = ( DBOP_inner_join + 1 ) ,
        DBOP_right_semi_join = ( DBOP_left_semi_join + 1 ) ,
        DBOP_left_anti_semi_join = ( DBOP_right_semi_join + 1 ) ,
        DBOP_right_anti_semi_join = ( DBOP_left_anti_semi_join + 1 ) ,
        DBOP_left_outer_join = ( DBOP_right_anti_semi_join + 1 ) ,
        DBOP_right_outer_join = ( DBOP_left_outer_join + 1 ) ,
        DBOP_full_outer_join = ( DBOP_right_outer_join + 1 ) ,
        DBOP_natural_join = ( DBOP_full_outer_join + 1 ) ,
        DBOP_natural_left_outer_join = ( DBOP_natural_join + 1 ) ,
        DBOP_natural_right_outer_join = ( DBOP_natural_left_outer_join + 1 ) ,
        DBOP_natural_full_outer_join = ( DBOP_natural_right_outer_join + 1 ) ,
        DBOP_set_intersection = ( DBOP_natural_full_outer_join + 1 ) ,
        DBOP_set_union = ( DBOP_set_intersection + 1 ) ,
        DBOP_set_left_difference = ( DBOP_set_union + 1 ) ,
        DBOP_set_right_difference = ( DBOP_set_left_difference + 1 ) ,
        DBOP_set_anti_difference = ( DBOP_set_right_difference + 1 ) ,
        DBOP_bag_intersection = ( DBOP_set_anti_difference + 1 ) ,
        DBOP_bag_union = ( DBOP_bag_intersection + 1 ) ,
        DBOP_bag_left_difference = ( DBOP_bag_union + 1 ) ,
        DBOP_bag_right_difference = ( DBOP_bag_left_difference + 1 ) ,
        DBOP_bag_anti_difference = ( DBOP_bag_right_difference + 1 ) ,
        DBOP_division = ( DBOP_bag_anti_difference + 1 ) ,
        DBOP_relative_sampling = ( DBOP_division + 1 ) ,
        DBOP_absolute_sampling = ( DBOP_relative_sampling + 1 ) ,
        DBOP_transitive_closure = ( DBOP_absolute_sampling + 1 ) ,
        DBOP_recursive_union = ( DBOP_transitive_closure + 1 ) ,
        DBOP_aggregate = ( DBOP_recursive_union + 1 ) ,
        DBOP_remote_table = ( DBOP_aggregate + 1 ) ,
        DBOP_select = ( DBOP_remote_table + 1 ) ,
        DBOP_order_preserving_select = ( DBOP_select + 1 ) ,
        DBOP_project = ( DBOP_order_preserving_select + 1 ) ,
        DBOP_project_order_preserving = ( DBOP_project + 1 ) ,
        DBOP_top = ( DBOP_project_order_preserving + 1 ) ,
        DBOP_top_percent = ( DBOP_top + 1 ) ,
        DBOP_top_plus_ties = ( DBOP_top_percent + 1 ) ,
        DBOP_top_percent_plus_ties = ( DBOP_top_plus_ties + 1 ) ,
        DBOP_rank = ( DBOP_top_percent_plus_ties + 1 ) ,
        DBOP_rank_ties_equally = ( DBOP_rank + 1 ) ,
        DBOP_rank_ties_equally_and_skip = ( DBOP_rank_ties_equally + 1 ) ,
        DBOP_navigate = ( DBOP_rank_ties_equally_and_skip + 1 ) ,
        DBOP_nesting = ( DBOP_navigate + 1 ) ,
        DBOP_unnesting = ( DBOP_nesting + 1 ) ,
        DBOP_nested_apply = ( DBOP_unnesting + 1 ) ,
        DBOP_cross_tab = ( DBOP_nested_apply + 1 ) ,
        DBOP_is_NULL = ( DBOP_cross_tab + 1 ) ,
        DBOP_is_NOT_NULL = ( DBOP_is_NULL + 1 ) ,
        DBOP_equal = ( DBOP_is_NOT_NULL + 1 ) ,
        DBOP_not_equal = ( DBOP_equal + 1 ) ,
        DBOP_less = ( DBOP_not_equal + 1 ) ,
        DBOP_less_equal = ( DBOP_less + 1 ) ,
        DBOP_greater = ( DBOP_less_equal + 1 ) ,
        DBOP_greater_equal = ( DBOP_greater + 1 ) ,
        DBOP_equal_all = ( DBOP_greater_equal + 1 ) ,
        DBOP_not_equal_all = ( DBOP_equal_all + 1 ) ,
        DBOP_less_all = ( DBOP_not_equal_all + 1 ) ,
        DBOP_less_equal_all = ( DBOP_less_all + 1 ) ,
        DBOP_greater_all = ( DBOP_less_equal_all + 1 ) ,
        DBOP_greater_equal_all = ( DBOP_greater_all + 1 ) ,
        DBOP_equal_any = ( DBOP_greater_equal_all + 1 ) ,
        DBOP_not_equal_any = ( DBOP_equal_any + 1 ) ,
        DBOP_less_any = ( DBOP_not_equal_any + 1 ) ,
        DBOP_less_equal_any = ( DBOP_less_any + 1 ) ,
        DBOP_greater_any = ( DBOP_less_equal_any + 1 ) ,
        DBOP_greater_equal_any = ( DBOP_greater_any + 1 ) ,
        DBOP_anybits = ( DBOP_greater_equal_any + 1 ) ,
        DBOP_allbits = ( DBOP_anybits + 1 ) ,
        DBOP_anybits_any = ( DBOP_allbits + 1 ) ,
        DBOP_allbits_any = ( DBOP_anybits_any + 1 ) ,
        DBOP_anybits_all = ( DBOP_allbits_any + 1 ) ,
        DBOP_allbits_all = ( DBOP_anybits_all + 1 ) ,
        DBOP_between = ( DBOP_allbits_all + 1 ) ,
        DBOP_between_unordered = ( DBOP_between + 1 ) ,
        DBOP_match = ( DBOP_between_unordered + 1 ) ,
        DBOP_match_unique = ( DBOP_match + 1 ) ,
        DBOP_match_partial = ( DBOP_match_unique + 1 ) ,
        DBOP_match_partial_unique = ( DBOP_match_partial + 1 ) ,
        DBOP_match_full = ( DBOP_match_partial_unique + 1 ) ,
        DBOP_match_full_unique = ( DBOP_match_full + 1 ) ,
        DBOP_scalar_parameter = ( DBOP_match_full_unique + 1 ) ,
        DBOP_scalar_function = ( DBOP_scalar_parameter + 1 ) ,
        DBOP_plus = ( DBOP_scalar_function + 1 ) ,
        DBOP_minus = ( DBOP_plus + 1 ) ,
        DBOP_times = ( DBOP_minus + 1 ) ,
        DBOP_over = ( DBOP_times + 1 ) ,
        DBOP_div = ( DBOP_over + 1 ) ,
        DBOP_modulo = ( DBOP_div + 1 ) ,
        DBOP_power = ( DBOP_modulo + 1 ) ,
        DBOP_like = ( DBOP_power + 1 ) ,
        DBOP_sounds_like = ( DBOP_like + 1 ) ,
        DBOP_like_any = ( DBOP_sounds_like + 1 ) ,
        DBOP_like_all = ( DBOP_like_any + 1 ) ,
        DBOP_is_INVALID = ( DBOP_like_all + 1 ) ,
        DBOP_is_TRUE = ( DBOP_is_INVALID + 1 ) ,
        DBOP_is_FALSE = ( DBOP_is_TRUE + 1 ) ,
        DBOP_and = ( DBOP_is_FALSE + 1 ) ,
        DBOP_or = ( DBOP_and + 1 ) ,
        DBOP_xor = ( DBOP_or + 1 ) ,
        DBOP_equivalent = ( DBOP_xor + 1 ) ,
        DBOP_not = ( DBOP_equivalent + 1 ) ,
        DBOP_implies = ( DBOP_not + 1 ) ,
        DBOP_overlaps = ( DBOP_implies + 1 ) ,
        DBOP_case_condition = ( DBOP_overlaps + 1 ) ,
        DBOP_case_value = ( DBOP_case_condition + 1 ) ,
        DBOP_nullif = ( DBOP_case_value + 1 ) ,
        DBOP_cast = ( DBOP_nullif + 1 ) ,
        DBOP_coalesce = ( DBOP_cast + 1 ) ,
        DBOP_position = ( DBOP_coalesce + 1 ) ,
        DBOP_extract = ( DBOP_position + 1 ) ,
        DBOP_char_length = ( DBOP_extract + 1 ) ,
        DBOP_octet_length = ( DBOP_char_length + 1 ) ,
        DBOP_bit_length = ( DBOP_octet_length + 1 ) ,
        DBOP_substring = ( DBOP_bit_length + 1 ) ,
        DBOP_upper = ( DBOP_substring + 1 ) ,
        DBOP_lower = ( DBOP_upper + 1 ) ,
        DBOP_trim = ( DBOP_lower + 1 ) ,
        DBOP_translate = ( DBOP_trim + 1 ) ,
        DBOP_convert = ( DBOP_translate + 1 ) ,
        DBOP_string_concat = ( DBOP_convert + 1 ) ,
        DBOP_current_date = ( DBOP_string_concat + 1 ) ,
        DBOP_current_time = ( DBOP_current_date + 1 ) ,
        DBOP_current_timestamp = ( DBOP_current_time + 1 ) ,
        DBOP_content_select = ( DBOP_current_timestamp + 1 ) ,
        DBOP_content = ( DBOP_content_select + 1 ) ,
        DBOP_content_freetext = ( DBOP_content + 1 ) ,
        DBOP_content_proximity = ( DBOP_content_freetext + 1 ) ,
        DBOP_content_vector_or = ( DBOP_content_proximity + 1 ) ,
        DBOP_delete = ( DBOP_content_vector_or + 1 ) ,
        DBOP_update = ( DBOP_delete + 1 ) ,
        DBOP_insert = ( DBOP_update + 1 ) ,
        DBOP_min = ( DBOP_insert + 1 ) ,
        DBOP_max = ( DBOP_min + 1 ) ,
        DBOP_count = ( DBOP_max + 1 ) ,
        DBOP_sum = ( DBOP_count + 1 ) ,
        DBOP_avg = ( DBOP_sum + 1 ) ,
        DBOP_any_sample = ( DBOP_avg + 1 ) ,
        DBOP_stddev = ( DBOP_any_sample + 1 ) ,
        DBOP_stddev_pop = ( DBOP_stddev + 1 ) ,
        DBOP_var = ( DBOP_stddev_pop + 1 ) ,
        DBOP_var_pop = ( DBOP_var + 1 ) ,
        DBOP_first = ( DBOP_var_pop + 1 ) ,
        DBOP_last = ( DBOP_first + 1 ) ,
        DBOP_in = ( DBOP_last + 1 ) ,
        DBOP_exists = ( DBOP_in + 1 ) ,
        DBOP_unique = ( DBOP_exists + 1 ) ,
        DBOP_subset = ( DBOP_unique + 1 ) ,
        DBOP_proper_subset = ( DBOP_subset + 1 ) ,
        DBOP_superset = ( DBOP_proper_subset + 1 ) ,
        DBOP_proper_superset = ( DBOP_superset + 1 ) ,
        DBOP_disjoint = ( DBOP_proper_superset + 1 ) ,
        DBOP_pass_through = ( DBOP_disjoint + 1 ) ,
        DBOP_defined_by_GUID = ( DBOP_pass_through + 1 ) ,
        DBOP_text_command = ( DBOP_defined_by_GUID + 1 ) ,
        DBOP_SQL_select = ( DBOP_text_command + 1 ) ,
        DBOP_prior_command_tree = ( DBOP_SQL_select + 1 ) ,
        DBOP_add_columns = ( DBOP_prior_command_tree + 1 ) ,
        DBOP_column_list_anchor = ( DBOP_add_columns + 1 ) ,
        DBOP_column_list_element = ( DBOP_column_list_anchor + 1 ) ,
        DBOP_command_list_anchor = ( DBOP_column_list_element + 1 ) ,
        DBOP_command_list_element = ( DBOP_command_list_anchor + 1 ) ,
        DBOP_from_list_anchor = ( DBOP_command_list_element + 1 ) ,
        DBOP_from_list_element = ( DBOP_from_list_anchor + 1 ) ,
        DBOP_project_list_anchor = ( DBOP_from_list_element + 1 ) ,
        DBOP_project_list_element = ( DBOP_project_list_anchor + 1 ) ,
        DBOP_row_list_anchor = ( DBOP_project_list_element + 1 ) ,
        DBOP_row_list_element = ( DBOP_row_list_anchor + 1 ) ,
        DBOP_scalar_list_anchor = ( DBOP_row_list_element + 1 ) ,
        DBOP_scalar_list_element = ( DBOP_scalar_list_anchor + 1 ) ,
        DBOP_set_list_anchor = ( DBOP_scalar_list_element + 1 ) ,
        DBOP_set_list_element = ( DBOP_set_list_anchor + 1 ) ,
        DBOP_sort_list_anchor = ( DBOP_set_list_element + 1 ) ,
        DBOP_sort_list_element = ( DBOP_sort_list_anchor + 1 ) ,
        DBOP_alter_character_set = ( DBOP_sort_list_element + 1 ) ,
        DBOP_alter_collation = ( DBOP_alter_character_set + 1 ) ,
        DBOP_alter_domain = ( DBOP_alter_collation + 1 ) ,
        DBOP_alter_index = ( DBOP_alter_domain + 1 ) ,
        DBOP_alter_procedure = ( DBOP_alter_index + 1 ) ,
        DBOP_alter_schema = ( DBOP_alter_procedure + 1 ) ,
        DBOP_alter_table = ( DBOP_alter_schema + 1 ) ,
        DBOP_alter_trigger = ( DBOP_alter_table + 1 ) ,
        DBOP_alter_view = ( DBOP_alter_trigger + 1 ) ,
        DBOP_coldef_list_anchor = ( DBOP_alter_view + 1 ) ,
        DBOP_coldef_list_element = ( DBOP_coldef_list_anchor + 1 ) ,
        DBOP_create_assertion = ( DBOP_coldef_list_element + 1 ) ,
        DBOP_create_character_set = ( DBOP_create_assertion + 1 ) ,
        DBOP_create_collation = ( DBOP_create_character_set + 1 ) ,
        DBOP_create_domain = ( DBOP_create_collation + 1 ) ,
        DBOP_create_index = ( DBOP_create_domain + 1 ) ,
        DBOP_create_procedure = ( DBOP_create_index + 1 ) ,
        DBOP_create_schema = ( DBOP_create_procedure + 1 ) ,
        DBOP_create_synonym = ( DBOP_create_schema + 1 ) ,
        DBOP_create_table = ( DBOP_create_synonym + 1 ) ,
        DBOP_create_temporary_table = ( DBOP_create_table + 1 ) ,
        DBOP_create_translation = ( DBOP_create_temporary_table + 1 ) ,
        DBOP_create_trigger = ( DBOP_create_translation + 1 ) ,
        DBOP_create_view = ( DBOP_create_trigger + 1 ) ,
        DBOP_drop_assertion = ( DBOP_create_view + 1 ) ,
        DBOP_drop_character_set = ( DBOP_drop_assertion + 1 ) ,
        DBOP_drop_collation = ( DBOP_drop_character_set + 1 ) ,
        DBOP_drop_domain = ( DBOP_drop_collation + 1 ) ,
        DBOP_drop_index = ( DBOP_drop_domain + 1 ) ,
        DBOP_drop_procedure = ( DBOP_drop_index + 1 ) ,
        DBOP_drop_schema = ( DBOP_drop_procedure + 1 ) ,
        DBOP_drop_synonym = ( DBOP_drop_schema + 1 ) ,
        DBOP_drop_table = ( DBOP_drop_synonym + 1 ) ,
        DBOP_drop_translation = ( DBOP_drop_table + 1 ) ,
        DBOP_drop_trigger = ( DBOP_drop_translation + 1 ) ,
        DBOP_drop_view = ( DBOP_drop_trigger + 1 ) ,
        DBOP_foreign_key = ( DBOP_drop_view + 1 ) ,
        DBOP_grant_privileges = ( DBOP_foreign_key + 1 ) ,
        DBOP_index_list_anchor = ( DBOP_grant_privileges + 1 ) ,
        DBOP_index_list_element = ( DBOP_index_list_anchor + 1 ) ,
        DBOP_primary_key = ( DBOP_index_list_element + 1 ) ,
        DBOP_property_list_anchor = ( DBOP_primary_key + 1 ) ,
        DBOP_property_list_element = ( DBOP_property_list_anchor + 1 ) ,
        DBOP_referenced_table = ( DBOP_property_list_element + 1 ) ,
        DBOP_rename_object = ( DBOP_referenced_table + 1 ) ,
        DBOP_revoke_privileges = ( DBOP_rename_object + 1 ) ,
        DBOP_schema_authorization = ( DBOP_revoke_privileges + 1 ) ,
        DBOP_unique_key = ( DBOP_schema_authorization + 1 ) ,
        DBOP_scope_list_anchor = ( DBOP_unique_key + 1 ) ,
        DBOP_scope_list_element = ( DBOP_scope_list_anchor + 1 ) ,
        DBOP_content_table = ( DBOP_scope_list_element + 1 )
    } ;
extern const OLEDBDECLSPEC GUID DBGUID_LIKE_SQL = {0xc8b521f6,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DBGUID_LIKE_DOS = {0xc8b521f7,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DBGUID_LIKE_OFS = {0xc8b521f8,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DBGUID_LIKE_MAPI = {0xc8b521f9,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern RPC_IF_HANDLE CommandTreeStructureDefinitions_v0_0_c_ifspec;
extern RPC_IF_HANDLE CommandTreeStructureDefinitions_v0_0_s_ifspec;
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_cmdtree_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cmdtree_0000_0001_v0_0_s_ifspec;
typedef DWORD DBCOMMANDREUSE;
enum DBCOMMANDREUSEENUM
    {
        DBCOMMANDREUSE_NONE = 0,
        DBCOMMANDREUSE_PROPERTIES = 0x1,
        DBCOMMANDREUSE_PARAMETERS = 0x2
    } ;
typedef DWORD DBVALUEKIND;
enum DBVALUEKINDENUM
    {
        DBVALUEKIND_BYGUID = 256,
        DBVALUEKIND_COLDESC = ( DBVALUEKIND_BYGUID + 1 ) ,
        DBVALUEKIND_ID = ( DBVALUEKIND_COLDESC + 1 ) ,
        DBVALUEKIND_CONTENT = ( DBVALUEKIND_ID + 1 ) ,
        DBVALUEKIND_CONTENTVECTOR = ( DBVALUEKIND_CONTENT + 1 ) ,
        DBVALUEKIND_GROUPINFO = ( DBVALUEKIND_CONTENTVECTOR + 1 ) ,
        DBVALUEKIND_PARAMETER = ( DBVALUEKIND_GROUPINFO + 1 ) ,
        DBVALUEKIND_PROPERTY = ( DBVALUEKIND_PARAMETER + 1 ) ,
        DBVALUEKIND_SETFUNC = ( DBVALUEKIND_PROPERTY + 1 ) ,
        DBVALUEKIND_SORTINFO = ( DBVALUEKIND_SETFUNC + 1 ) ,
        DBVALUEKIND_TEXT = ( DBVALUEKIND_SORTINFO + 1 ) ,
        DBVALUEKIND_COMMAND = ( DBVALUEKIND_TEXT + 1 ) ,
        DBVALUEKIND_MONIKER = ( DBVALUEKIND_COMMAND + 1 ) ,
        DBVALUEKIND_ROWSET = ( DBVALUEKIND_MONIKER + 1 ) ,
        DBVALUEKIND_LIKE = ( DBVALUEKIND_ROWSET + 1 ) ,
        DBVALUEKIND_CONTENTPROXIMITY = ( DBVALUEKIND_LIKE + 1 ) ,
        DBVALUEKIND_CONTENTSCOPE = ( DBVALUEKIND_CONTENTPROXIMITY + 1 ) ,
        DBVALUEKIND_CONTENTTABLE = ( DBVALUEKIND_CONTENTSCOPE + 1 ) ,
        DBVALUEKIND_IDISPATCH = 9,
        DBVALUEKIND_IUNKNOWN = 13,
        DBVALUEKIND_EMPTY = 0,
        DBVALUEKIND_NULL = 1,
        DBVALUEKIND_I2 = 2,
        DBVALUEKIND_I4 = 3,
        DBVALUEKIND_R4 = 4,
        DBVALUEKIND_R8 = 5,
        DBVALUEKIND_CY = 6,
        DBVALUEKIND_DATE = 7,
        DBVALUEKIND_BSTR = 8,
        DBVALUEKIND_ERROR = 10,
        DBVALUEKIND_BOOL = 11,
        DBVALUEKIND_VARIANT = 12,
        DBVALUEKIND_VECTOR = 0x1000,
        DBVALUEKIND_ARRAY = 0x2000,
        DBVALUEKIND_BYREF = 0x4000,
        DBVALUEKIND_I1 = 16,
        DBVALUEKIND_UI1 = 17,
        DBVALUEKIND_UI2 = 18,
        DBVALUEKIND_UI4 = ( DBVALUEKIND_UI2 + 1 ) ,
        DBVALUEKIND_I8 = ( DBVALUEKIND_UI4 + 1 ) ,
        DBVALUEKIND_UI8 = ( DBVALUEKIND_I8 + 1 ) ,
        DBVALUEKIND_GUID = 72,
        DBVALUEKIND_BYTES = 128,
        DBVALUEKIND_STR = 129,
        DBVALUEKIND_WSTR = 130,
        DBVALUEKIND_NUMERIC = 131,
        DBVALUEKIND_DBDATE = 133,
        DBVALUEKIND_DBTIME = 134,
        DBVALUEKIND_DBTIMESTAMP = 135,
        DBVALUEKIND_PROBABILISTIC = 136,
        DBVALUEKIND_RELEVANTDOCUMENT = 137
    } ;
typedef struct tagDBBYGUID
    {
                    BYTE *pbInfo;
    DBLENGTH cbInfo;
    GUID guid;
    } DBBYGUID;
typedef struct tagDBCONTENT
    {
    LPOLESTR pwszPhrase;
    DWORD dwGenerateMethod;
    LONG lWeight;
    LCID lcid;
    } DBCONTENT;
typedef struct tagDBCONTENTSCOPE
    {
    DWORD dwFlags;
    LPOLESTR *rgpwszTagName;
    LPOLESTR pwszElementValue;
    } DBCONTENTSCOPE;
typedef struct tagDBCONTENTTABLE
    {
    LPOLESTR pwszMachine;
    LPOLESTR pwszCatalog;
    } DBCONTENTTABLE;
typedef struct tagDBCONTENTVECTOR
    {
    LONG lWeight;
    DWORD dwRankingMethod;
    } DBCONTENTVECTOR;
typedef struct tagDBGROUPINFO
    {
    LCID lcid;
    } DBGROUPINFO;
typedef struct tagDBPARAMETER
    {
    LPOLESTR pwszName;
    ITypeInfo *pTypeInfo;
    DB_NUMERIC *pNum;
    DBLENGTH cbMaxLength;
    DBPARAMFLAGS dwFlags;
    DBTYPE wType;
    } DBPARAMETER;
typedef struct tagDBSETFUNC
    {
    DWORD dwSetQuantifier;
    } DBSETFUNC;
typedef struct tagDBSORTINFO
    {
    BOOL fDesc;
    LCID lcid;
    } DBSORTINFO;
typedef struct tagDBTEXT
    {
    LPOLESTR pwszText;
    ULONG ulErrorLocator;
    ULONG ulTokenLength;
    GUID guidDialect;
    } DBTEXT;
typedef struct tagDBLIKE
    {
    LONG lWeight;
    GUID guidDialect;
    } DBLIKE;
typedef struct tagDBCONTENTPROXIMITY
    {
    DWORD dwProximityUnit;
    ULONG ulProximityDistance;
    LONG lWeight;
    } DBCONTENTPROXIMITY;
typedef struct tagDBPROBABILISTIC
    {
    LONG lWeight;
    float flK1;
    float flK2;
    float flK3;
    float flB;
    } DBPROBABILISTIC;
typedef struct tagDBRELEVANTDOCUMENT
    {
    LONG lWeight;
    VARIANT vDocument;
    } DBRELEVANTDOCUMENT;
typedef struct tagDBCOMMANDTREE
    {
    DBCOMMANDOP op;
    WORD wKind;
    struct tagDBCOMMANDTREE *pctFirstChild;
    struct tagDBCOMMANDTREE *pctNextSibling;
                                   union
        {
                       __int64 llValue;
                       unsigned __int64 ullValue;
                       BOOL fValue;
                       unsigned char uchValue;
                       signed char schValue;
                       unsigned short usValue;
                       short sValue;
                       LPOLESTR pwszValue;
                       LONG lValue;
                       ULONG ulValue;
                       float flValue;
                       double dblValue;
                       CY cyValue;
                       DATE dateValue;
                       DBDATE dbdateValue;
                       DBTIME dbtimeValue;
                       SCODE scodeValue;
                       BSTR *pbstrValue;
                       ICommand *pCommand;
                       IDispatch *pDispatch;
                       IMoniker *pMoniker;
                       IRowset *pRowset;
                       IUnknown *pUnknown;
                       DBBYGUID *pdbbygdValue;
                       DBCOLUMNDESC *pcoldescValue;
                       DBID *pdbidValue;
                       DBLIKE *pdblikeValue;
                       DBCONTENT *pdbcntntValue;
                       DBCONTENTSCOPE *pdbcntntscpValue;
                       DBCONTENTTABLE *pdbcntnttblValue;
                       DBCONTENTVECTOR *pdbcntntvcValue;
                       DBCONTENTPROXIMITY *pdbcntntproxValue;
                       DBGROUPINFO *pdbgrpinfValue;
                       DBPARAMETER *pdbparamValue;
                       DBPROPSET *pdbpropValue;
                       DBSETFUNC *pdbstfncValue;
                       DBSORTINFO *pdbsrtinfValue;
                       DBTEXT *pdbtxtValue;
                       DBVECTOR *pdbvectorValue;
                       SAFEARRAY *parrayValue;
                       VARIANT *pvarValue;
                       GUID *pGuid;
                       BYTE *pbValue;
                       char *pzValue;
                       DB_NUMERIC *pdbnValue;
                       DBTIMESTAMP *pdbtsValue;
                       void *pvValue;
                       DBPROBABILISTIC *pdbprobValue;
                       DBRELEVANTDOCUMENT *pdbreldocValue;
        } value;
    HRESULT hrError;
    } DBCOMMANDTREE;
EXTERN_C const IID IID_ICommandTree;
    typedef struct ICommandTreeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICommandTree * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICommandTree * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICommandTree * This);
        HRESULT ( STDMETHODCALLTYPE *FindErrorNodes )(
            ICommandTree * This,
                       const DBCOMMANDTREE *pRoot,
                        ULONG *pcErrorNodes,
                        DBCOMMANDTREE ***prgErrorNodes);
        HRESULT ( STDMETHODCALLTYPE *FreeCommandTree )(
            ICommandTree * This,
                       DBCOMMANDTREE **ppRoot);
        HRESULT ( STDMETHODCALLTYPE *GetCommandTree )(
            ICommandTree * This,
                        DBCOMMANDTREE **ppRoot);
        HRESULT ( STDMETHODCALLTYPE *SetCommandTree )(
            ICommandTree * This,
                       DBCOMMANDTREE **ppRoot,
                       DBCOMMANDREUSE dwCommandReuse,
                       BOOL fCopy);
        END_INTERFACE
    } ICommandTreeVtbl;
    interface ICommandTree
    {
        CONST_VTBL struct ICommandTreeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindErrorNodes(This,pRoot,pcErrorNodes,prgErrorNodes) )
    ( (This)->lpVtbl -> FreeCommandTree(This,ppRoot) )
    ( (This)->lpVtbl -> GetCommandTree(This,ppRoot) )
    ( (This)->lpVtbl -> SetCommandTree(This,ppRoot,dwCommandReuse,fCopy) )
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_cmdtree_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cmdtree_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IQuery;
    typedef struct IQueryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IQuery * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IQuery * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IQuery * This);
        HRESULT ( STDMETHODCALLTYPE *FindErrorNodes )(
            IQuery * This,
                       const DBCOMMANDTREE *pRoot,
                        ULONG *pcErrorNodes,
                        DBCOMMANDTREE ***prgErrorNodes);
        HRESULT ( STDMETHODCALLTYPE *FreeCommandTree )(
            IQuery * This,
                       DBCOMMANDTREE **ppRoot);
        HRESULT ( STDMETHODCALLTYPE *GetCommandTree )(
            IQuery * This,
                        DBCOMMANDTREE **ppRoot);
        HRESULT ( STDMETHODCALLTYPE *SetCommandTree )(
            IQuery * This,
                       DBCOMMANDTREE **ppRoot,
                       DBCOMMANDREUSE dwCommandReuse,
                       BOOL fCopy);
        HRESULT ( STDMETHODCALLTYPE *AddPostProcessing )(
            IQuery * This,
                       DBCOMMANDTREE **ppRoot,
                       BOOL fCopy);
        HRESULT ( STDMETHODCALLTYPE *GetCardinalityEstimate )(
            IQuery * This,
                        DBORDINAL *pulCardinality);
        END_INTERFACE
    } IQueryVtbl;
    interface IQuery
    {
        CONST_VTBL struct IQueryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindErrorNodes(This,pRoot,pcErrorNodes,prgErrorNodes) )
    ( (This)->lpVtbl -> FreeCommandTree(This,ppRoot) )
    ( (This)->lpVtbl -> GetCommandTree(This,ppRoot) )
    ( (This)->lpVtbl -> SetCommandTree(This,ppRoot,dwCommandReuse,fCopy) )
    ( (This)->lpVtbl -> AddPostProcessing(This,ppRoot,fCopy) )
    ( (This)->lpVtbl -> GetCardinalityEstimate(This,pulCardinality) )
#endif
#pragma endregion
#include <poppack.h>
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_cmdtree_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cmdtree_0000_0003_v0_0_s_ifspec;
}
