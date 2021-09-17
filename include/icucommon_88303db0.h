        
#pragma message("The wchar_t versions of the ICU headers are no longer being updated, please use the char16_t based header icu.h instead; see https://go.microsoft.com/fwlink/?linkid=851033 for more info. To suppress this warning, define the macro SUPPRESS_LEGACY_ICU_HEADER_WARNINGS before including this header.")
#include <stddef.h>
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
    typedef signed __int64 int64_t;
    typedef unsigned __int64 uint64_t;
#include <stddef.h>
typedef int8_t UBool;
    typedef uint16_t UChar;
typedef int32_t UChar32;
    ((c)>=0xfdd0 && \
     ((uint32_t)(c)<=0xfdef || ((c)&0xfffe)==0xfffe) && \
     (uint32_t)(c)<=0x10ffff)
    ((uint32_t)(c)<0xd800 || \
        ((uint32_t)(c)>0xdfff && \
         (uint32_t)(c)<=0x10ffff && \
         !U_IS_UNICODE_NONCHAR(c)))
U_EXPORT const uint8_t
utf8_countTrailBytes[256];
    ((uint8_t)(leadByte)<0xf0 ? \
        ((uint8_t)(leadByte)>=0xc0)+((uint8_t)(leadByte)>=0xe0) : \
        (uint8_t)(leadByte)<0xfe ? 3+((uint8_t)(leadByte)>=0xf8)+((uint8_t)(leadByte)>=0xfc) : 0)
    (((leadByte)>=0xc0)+((leadByte)>=0xe0)+((leadByte)>=0xf0))
U_STABLE UChar32 U_EXPORT2
utf8_nextCharSafeBody(const uint8_t *s, int32_t *pi, int32_t length, UChar32 c, UBool strict);
U_STABLE int32_t U_EXPORT2
utf8_appendCharSafeBody(uint8_t *s, int32_t i, int32_t length, UChar32 c, UBool *pIsError);
U_STABLE UChar32 U_EXPORT2
utf8_prevCharSafeBody(const uint8_t *s, int32_t start, int32_t *pi, UChar32 c, UBool strict);
U_STABLE int32_t U_EXPORT2
utf8_back1SafeBody(const uint8_t *s, int32_t start, int32_t i);
    ((uint32_t)(c)<=0x7f ? 1 : \
        ((uint32_t)(c)<=0x7ff ? 2 : \
            ((uint32_t)(c)<=0xd7ff ? 3 : \
                ((uint32_t)(c)<=0xdfff || (uint32_t)(c)>0x10ffff ? 0 : \
                    ((uint32_t)(c)<=0xffff ? 3 : 4)\
                ) \
            ) \
        ) \
    )
    int32_t _u8_get_unsafe_index=(int32_t)(i); \
    U8_SET_CP_START_UNSAFE(s, _u8_get_unsafe_index); \
    U8_NEXT_UNSAFE(s, _u8_get_unsafe_index, c); \
}
    int32_t _u8_get_index=(i); \
    U8_SET_CP_START(s, start, _u8_get_index); \
    U8_NEXT(s, _u8_get_index, length, c); \
}
    int32_t _u8_get_index=(i); \
    U8_SET_CP_START(s, start, _u8_get_index); \
    U8_NEXT_OR_FFFD(s, _u8_get_index, length, c); \
}
    (c)=(uint8_t)(s)[(i)++]; \
    if((c)>=0x80) { \
        if((c)<0xe0) { \
            (c)=(((c)&0x1f)<<6)|((s)[(i)++]&0x3f); \
        } else if((c)<0xf0) { \
                                                                                                             \
            (c)=(UChar)(((c)<<12)|(((s)[i]&0x3f)<<6)|((s)[(i)+1]&0x3f)); \
            (i)+=2; \
        } else { \
            (c)=(((c)&7)<<18)|(((s)[i]&0x3f)<<12)|(((s)[(i)+1]&0x3f)<<6)|((s)[(i)+2]&0x3f); \
            (i)+=3; \
        } \
    } \
}
    (c)=(uint8_t)(s)[(i)++]; \
    if((c)>=0x80) { \
        uint8_t __t1, __t2; \
        if( \
            (0xe0<(c) && (c)<=0xec) && \
            (((i)+1)<(length) || (length)<0) && \
            (__t1=(uint8_t)((s)[i]-0x80))<=0x3f && \
            (__t2=(uint8_t)((s)[(i)+1]-0x80))<= 0x3f \
        ) { \
                                                                                                             \
            (c)=(UChar)(((c)<<12)|(__t1<<6)|__t2); \
            (i)+=2; \
        } else if( \
            ((c)<0xe0 && (c)>=0xc2) && \
            ((i)!=(length)) && \
            (__t1=(uint8_t)((s)[i]-0x80))<=0x3f \
        ) { \
            (c)=(((c)&0x1f)<<6)|__t1; \
            ++(i); \
        } else { \
                                                                  \
            (c)=utf8_nextCharSafeBody((const uint8_t *)s, &(i), (length), c, -1); \
        } \
    } \
}
    (c)=(uint8_t)(s)[(i)++]; \
    if((c)>=0x80) { \
        uint8_t __t1, __t2; \
        if( \
            (0xe0<(c) && (c)<=0xec) && \
            (((i)+1)<(length) || (length)<0) && \
            (__t1=(uint8_t)((s)[i]-0x80))<=0x3f && \
            (__t2=(uint8_t)((s)[(i)+1]-0x80))<= 0x3f \
        ) { \
                                                                                                             \
            (c)=(UChar)(((c)<<12)|(__t1<<6)|__t2); \
            (i)+=2; \
        } else if( \
            ((c)<0xe0 && (c)>=0xc2) && \
            ((i)!=(length)) && \
            (__t1=(uint8_t)((s)[i]-0x80))<=0x3f \
        ) { \
            (c)=(((c)&0x1f)<<6)|__t1; \
            ++(i); \
        } else { \
                                                                  \
            (c)=utf8_nextCharSafeBody((const uint8_t *)s, &(i), (length), c, -3); \
        } \
    } \
}
    if((uint32_t)(c)<=0x7f) { \
        (s)[(i)++]=(uint8_t)(c); \
    } else { \
        if((uint32_t)(c)<=0x7ff) { \
            (s)[(i)++]=(uint8_t)(((c)>>6)|0xc0); \
        } else { \
            if((uint32_t)(c)<=0xffff) { \
                (s)[(i)++]=(uint8_t)(((c)>>12)|0xe0); \
            } else { \
                (s)[(i)++]=(uint8_t)(((c)>>18)|0xf0); \
                (s)[(i)++]=(uint8_t)((((c)>>12)&0x3f)|0x80); \
            } \
            (s)[(i)++]=(uint8_t)((((c)>>6)&0x3f)|0x80); \
        } \
        (s)[(i)++]=(uint8_t)(((c)&0x3f)|0x80); \
    } \
}
    if((uint32_t)(c)<=0x7f) { \
        (s)[(i)++]=(uint8_t)(c); \
    } else if((uint32_t)(c)<=0x7ff && (i)+1<(capacity)) { \
        (s)[(i)++]=(uint8_t)(((c)>>6)|0xc0); \
        (s)[(i)++]=(uint8_t)(((c)&0x3f)|0x80); \
    } else if((uint32_t)(c)<=0xd7ff && (i)+2<(capacity)) { \
        (s)[(i)++]=(uint8_t)(((c)>>12)|0xe0); \
        (s)[(i)++]=(uint8_t)((((c)>>6)&0x3f)|0x80); \
        (s)[(i)++]=(uint8_t)(((c)&0x3f)|0x80); \
    } else { \
        (i)=utf8_appendCharSafeBody(s, (i), (capacity), c, &(isError)); \
    } \
}
    (i)+=1+U8_COUNT_TRAIL_BYTES_UNSAFE((uint8_t)(s)[i]); \
}
    uint8_t __b=(uint8_t)(s)[(i)++]; \
    if(U8_IS_LEAD(__b)) { \
        uint8_t __count=U8_COUNT_TRAIL_BYTES(__b); \
        if((i)+__count>(length) && (length)>=0) { \
            __count=(uint8_t)((length)-(i)); \
        } \
        while(__count>0 && U8_IS_TRAIL((s)[i])) { \
            ++(i); \
            --__count; \
        } \
    } \
}
    int32_t __N=(n); \
    while(__N>0) { \
        U8_FWD_1_UNSAFE(s, i); \
        --__N; \
    } \
}
    int32_t __N=(n); \
    while(__N>0 && ((i)<(length) || ((length)<0 && (s)[i]!=0))) { \
        U8_FWD_1(s, i, length); \
        --__N; \
    } \
}
    while(U8_IS_TRAIL((s)[i])) { --(i); } \
}
    if(U8_IS_TRAIL((s)[(i)])) { \
        (i)=utf8_back1SafeBody(s, start, (i)); \
    } \
}
    (c)=(uint8_t)(s)[--(i)]; \
    if(U8_IS_TRAIL(c)) { \
        uint8_t __b, __count=1, __shift=6; \
\
                                \
        (c)&=0x3f; \
        for(;;) { \
            __b=(uint8_t)(s)[--(i)]; \
            if(__b>=0xc0) { \
                U8_MASK_LEAD_BYTE(__b, __count); \
                (c)|=(UChar32)__b<<__shift; \
                break; \
            } else { \
                (c)|=(UChar32)(__b&0x3f)<<__shift; \
                ++__count; \
                __shift+=6; \
            } \
        } \
    } \
}
    (c)=(uint8_t)(s)[--(i)]; \
    if((c)>=0x80) { \
        (c)=utf8_prevCharSafeBody((const uint8_t *)s, start, &(i), c, -1); \
    } \
}
    (c)=(uint8_t)(s)[--(i)]; \
    if((c)>=0x80) { \
        (c)=utf8_prevCharSafeBody((const uint8_t *)s, start, &(i), c, -3); \
    } \
}
    while(U8_IS_TRAIL((s)[--(i)])) {} \
}
    if(U8_IS_TRAIL((s)[--(i)])) { \
        (i)=utf8_back1SafeBody(s, start, (i)); \
    } \
}
    int32_t __N=(n); \
    while(__N>0) { \
        U8_BACK_1_UNSAFE(s, i); \
        --__N; \
    } \
}
    int32_t __N=(n); \
    while(__N>0 && (i)>(start)) { \
        U8_BACK_1(s, start, i); \
        --__N; \
    } \
}
    U8_BACK_1_UNSAFE(s, i); \
    U8_FWD_1_UNSAFE(s, i); \
}
    if((start)<(i) && ((i)<(length) || (length)<0)) { \
        U8_BACK_1(s, start, i); \
        U8_FWD_1(s, i, length); \
    } \
}
    (((UChar32)(lead)<<10UL)+(UChar32)(trail)-U16_SURROGATE_OFFSET)
    (c)=(s)[i]; \
    if(U16_IS_SURROGATE(c)) { \
        if(U16_IS_SURROGATE_LEAD(c)) { \
            (c)=U16_GET_SUPPLEMENTARY((c), (s)[(i)+1]); \
        } else { \
            (c)=U16_GET_SUPPLEMENTARY((s)[(i)-1], (c)); \
        } \
    } \
}
    (c)=(s)[i]; \
    if(U16_IS_SURROGATE(c)) { \
        uint16_t __c2; \
        if(U16_IS_SURROGATE_LEAD(c)) { \
            if((i)+1!=(length) && U16_IS_TRAIL(__c2=(s)[(i)+1])) { \
                (c)=U16_GET_SUPPLEMENTARY((c), __c2); \
            } \
        } else { \
            if((i)>(start) && U16_IS_LEAD(__c2=(s)[(i)-1])) { \
                (c)=U16_GET_SUPPLEMENTARY(__c2, (c)); \
            } \
        } \
    } \
}
    (c)=(s)[(i)++]; \
    if(U16_IS_LEAD(c)) { \
        (c)=U16_GET_SUPPLEMENTARY((c), (s)[(i)++]); \
    } \
}
    (c)=(s)[(i)++]; \
    if(U16_IS_LEAD(c)) { \
        uint16_t __c2; \
        if((i)!=(length) && U16_IS_TRAIL(__c2=(s)[(i)])) { \
            ++(i); \
            (c)=U16_GET_SUPPLEMENTARY((c), __c2); \
        } \
    } \
}
    if((uint32_t)(c)<=0xffff) { \
        (s)[(i)++]=(uint16_t)(c); \
    } else { \
        (s)[(i)++]=(uint16_t)(((c)>>10)+0xd7c0); \
        (s)[(i)++]=(uint16_t)(((c)&0x3ff)|0xdc00); \
    } \
}
    if((uint32_t)(c)<=0xffff) { \
        (s)[(i)++]=(uint16_t)(c); \
    } else if((uint32_t)(c)<=0x10ffff && (i)+1<(capacity)) { \
        (s)[(i)++]=(uint16_t)(((c)>>10)+0xd7c0); \
        (s)[(i)++]=(uint16_t)(((c)&0x3ff)|0xdc00); \
    } else { \
        (isError)=TRUE; \
    } \
}
    if(U16_IS_LEAD((s)[(i)++])) { \
        ++(i); \
    } \
}
    if(U16_IS_LEAD((s)[(i)++]) && (i)!=(length) && U16_IS_TRAIL((s)[i])) { \
        ++(i); \
    } \
}
    int32_t __N=(n); \
    while(__N>0) { \
        U16_FWD_1_UNSAFE(s, i); \
        --__N; \
    } \
}
    int32_t __N=(n); \
    while(__N>0 && ((i)<(length) || ((length)<0 && (s)[i]!=0))) { \
        U16_FWD_1(s, i, length); \
        --__N; \
    } \
}
    if(U16_IS_TRAIL((s)[i])) { \
        --(i); \
    } \
}
    if(U16_IS_TRAIL((s)[i]) && (i)>(start) && U16_IS_LEAD((s)[(i)-1])) { \
        --(i); \
    } \
}
    (c)=(s)[--(i)]; \
    if(U16_IS_TRAIL(c)) { \
        (c)=U16_GET_SUPPLEMENTARY((s)[--(i)], (c)); \
    } \
}
    (c)=(s)[--(i)]; \
    if(U16_IS_TRAIL(c)) { \
        uint16_t __c2; \
        if((i)>(start) && U16_IS_LEAD(__c2=(s)[(i)-1])) { \
            --(i); \
            (c)=U16_GET_SUPPLEMENTARY(__c2, (c)); \
        } \
    } \
}
    if(U16_IS_TRAIL((s)[--(i)])) { \
        --(i); \
    } \
}
    if(U16_IS_TRAIL((s)[--(i)]) && (i)>(start) && U16_IS_LEAD((s)[(i)-1])) { \
        --(i); \
    } \
}
    int32_t __N=(n); \
    while(__N>0) { \
        U16_BACK_1_UNSAFE(s, i); \
        --__N; \
    } \
}
    int32_t __N=(n); \
    while(__N>0 && (i)>(start)) { \
        U16_BACK_1(s, start, i); \
        --__N; \
    } \
}
    if(U16_IS_LEAD((s)[(i)-1])) { \
        ++(i); \
    } \
}
    if((start)<(i) && ((i)<(length) || (length)<0) && U16_IS_LEAD((s)[(i)-1]) && U16_IS_TRAIL((s)[i])) { \
        ++(i); \
    } \
}
typedef uint8_t UVersionInfo[U_MAX_VERSION_LENGTH];
U_STABLE void U_EXPORT2
u_versionFromString(UVersionInfo versionArray, const char *versionString);
U_STABLE void U_EXPORT2
u_versionFromUString(UVersionInfo versionArray, const UChar *versionString);
U_STABLE void U_EXPORT2
u_versionToString(const UVersionInfo versionArray, char *versionString);
U_STABLE void U_EXPORT2
u_getVersion(UVersionInfo versionArray);
#include <float.h>
typedef double UDate;
typedef enum UErrorCode {
    U_USING_FALLBACK_WARNING = -128,
    U_ERROR_WARNING_START = -128,
    U_USING_DEFAULT_WARNING = -127,
    U_SAFECLONE_ALLOCATED_WARNING = -126,
    U_STATE_OLD_WARNING = -125,
    U_STRING_NOT_TERMINATED_WARNING = -124,
    U_SORT_KEY_TOO_SHORT_WARNING = -123,
    U_AMBIGUOUS_ALIAS_WARNING = -122,
    U_DIFFERENT_UCA_VERSION = -121,
    U_PLUGIN_CHANGED_LEVEL_WARNING = -120,
    U_ERROR_WARNING_LIMIT,
    U_ZERO_ERROR = 0,
    U_ILLEGAL_ARGUMENT_ERROR = 1,
    U_MISSING_RESOURCE_ERROR = 2,
    U_INVALID_FORMAT_ERROR = 3,
    U_FILE_ACCESS_ERROR = 4,
    U_INTERNAL_PROGRAM_ERROR = 5,
    U_MESSAGE_PARSE_ERROR = 6,
    U_MEMORY_ALLOCATION_ERROR = 7,
    U_INDEX_OUTOFBOUNDS_ERROR = 8,
    U_PARSE_ERROR = 9,
    U_INVALID_CHAR_FOUND = 10,
    U_TRUNCATED_CHAR_FOUND = 11,
    U_ILLEGAL_CHAR_FOUND = 12,
    U_INVALID_TABLE_FORMAT = 13,
    U_INVALID_TABLE_FILE = 14,
    U_BUFFER_OVERFLOW_ERROR = 15,
    U_UNSUPPORTED_ERROR = 16,
    U_RESOURCE_TYPE_MISMATCH = 17,
    U_ILLEGAL_ESCAPE_SEQUENCE = 18,
    U_UNSUPPORTED_ESCAPE_SEQUENCE = 19,
    U_NO_SPACE_AVAILABLE = 20,
    U_CE_NOT_FOUND_ERROR = 21,
    U_PRIMARY_TOO_LONG_ERROR = 22,
    U_STATE_TOO_OLD_ERROR = 23,
    U_TOO_MANY_ALIASES_ERROR = 24,
    U_ENUM_OUT_OF_SYNC_ERROR = 25,
    U_INVARIANT_CONVERSION_ERROR = 26,
    U_INVALID_STATE_ERROR = 27,
    U_COLLATOR_VERSION_MISMATCH = 28,
    U_USELESS_COLLATOR_ERROR = 29,
    U_NO_WRITE_PERMISSION = 30,
    U_STANDARD_ERROR_LIMIT,
    U_BAD_VARIABLE_DEFINITION=0x10000,
    U_PARSE_ERROR_START = 0x10000,
    U_MALFORMED_RULE,
    U_MALFORMED_SET,
    U_MALFORMED_SYMBOL_REFERENCE,
    U_MALFORMED_UNICODE_ESCAPE,
    U_MALFORMED_VARIABLE_DEFINITION,
    U_MALFORMED_VARIABLE_REFERENCE,
    U_MISMATCHED_SEGMENT_DELIMITERS,
    U_MISPLACED_ANCHOR_START,
    U_MISPLACED_CURSOR_OFFSET,
    U_MISPLACED_QUANTIFIER,
    U_MISSING_OPERATOR,
    U_MISSING_SEGMENT_CLOSE,
    U_MULTIPLE_ANTE_CONTEXTS,
    U_MULTIPLE_CURSORS,
    U_MULTIPLE_POST_CONTEXTS,
    U_TRAILING_BACKSLASH,
    U_UNDEFINED_SEGMENT_REFERENCE,
    U_UNDEFINED_VARIABLE,
    U_UNQUOTED_SPECIAL,
    U_UNTERMINATED_QUOTE,
    U_RULE_MASK_ERROR,
    U_MISPLACED_COMPOUND_FILTER,
    U_MULTIPLE_COMPOUND_FILTERS,
    U_INVALID_RBT_SYNTAX,
    U_INVALID_PROPERTY_PATTERN,
    U_MALFORMED_PRAGMA,
    U_UNCLOSED_SEGMENT,
    U_ILLEGAL_CHAR_IN_SEGMENT,
    U_VARIABLE_RANGE_EXHAUSTED,
    U_VARIABLE_RANGE_OVERLAP,
    U_ILLEGAL_CHARACTER,
    U_INTERNAL_TRANSLITERATOR_ERROR,
    U_INVALID_ID,
    U_INVALID_FUNCTION,
    U_PARSE_ERROR_LIMIT,
    U_UNEXPECTED_TOKEN=0x10100,
    U_FMT_PARSE_ERROR_START=0x10100,
    U_MULTIPLE_DECIMAL_SEPARATORS,
    U_MULTIPLE_DECIMAL_SEPERATORS = U_MULTIPLE_DECIMAL_SEPARATORS,
    U_MULTIPLE_EXPONENTIAL_SYMBOLS,
    U_MALFORMED_EXPONENTIAL_PATTERN,
    U_MULTIPLE_PERCENT_SYMBOLS,
    U_MULTIPLE_PERMILL_SYMBOLS,
    U_MULTIPLE_PAD_SPECIFIERS,
    U_PATTERN_SYNTAX_ERROR,
    U_ILLEGAL_PAD_POSITION,
    U_UNMATCHED_BRACES,
    U_UNSUPPORTED_PROPERTY,
    U_UNSUPPORTED_ATTRIBUTE,
    U_ARGUMENT_TYPE_MISMATCH,
    U_DUPLICATE_KEYWORD,
    U_UNDEFINED_KEYWORD,
    U_DEFAULT_KEYWORD_MISSING,
    U_DECIMAL_NUMBER_SYNTAX_ERROR,
    U_FORMAT_INEXACT_ERROR,
    U_FMT_PARSE_ERROR_LIMIT,
    U_BRK_INTERNAL_ERROR=0x10200,
    U_BRK_ERROR_START=0x10200,
    U_BRK_HEX_DIGITS_EXPECTED,
    U_BRK_SEMICOLON_EXPECTED,
    U_BRK_RULE_SYNTAX,
    U_BRK_UNCLOSED_SET,
    U_BRK_ASSIGN_ERROR,
    U_BRK_VARIABLE_REDFINITION,
    U_BRK_MISMATCHED_PAREN,
    U_BRK_NEW_LINE_IN_QUOTED_STRING,
    U_BRK_UNDEFINED_VARIABLE,
    U_BRK_INIT_ERROR,
    U_BRK_RULE_EMPTY_SET,
    U_BRK_UNRECOGNIZED_OPTION,
    U_BRK_MALFORMED_RULE_TAG,
    U_BRK_ERROR_LIMIT,
    U_REGEX_INTERNAL_ERROR=0x10300,
    U_REGEX_ERROR_START=0x10300,
    U_REGEX_RULE_SYNTAX,
    U_REGEX_INVALID_STATE,
    U_REGEX_BAD_ESCAPE_SEQUENCE,
    U_REGEX_PROPERTY_SYNTAX,
    U_REGEX_UNIMPLEMENTED,
    U_REGEX_MISMATCHED_PAREN,
    U_REGEX_NUMBER_TOO_BIG,
    U_REGEX_BAD_INTERVAL,
    U_REGEX_MAX_LT_MIN,
    U_REGEX_INVALID_BACK_REF,
    U_REGEX_INVALID_FLAG,
    U_REGEX_LOOK_BEHIND_LIMIT,
    U_REGEX_SET_CONTAINS_STRING,
    U_REGEX_MISSING_CLOSE_BRACKET=U_REGEX_SET_CONTAINS_STRING+2,
    U_REGEX_INVALID_RANGE,
    U_REGEX_STACK_OVERFLOW,
    U_REGEX_TIME_OUT,
    U_REGEX_STOPPED_BY_CALLER,
    U_REGEX_PATTERN_TOO_BIG,
    U_REGEX_INVALID_CAPTURE_GROUP_NAME,
    U_REGEX_ERROR_LIMIT=U_REGEX_STOPPED_BY_CALLER+3,
    U_IDNA_PROHIBITED_ERROR=0x10400,
    U_IDNA_ERROR_START=0x10400,
    U_IDNA_UNASSIGNED_ERROR,
    U_IDNA_CHECK_BIDI_ERROR,
    U_IDNA_STD3_ASCII_RULES_ERROR,
    U_IDNA_ACE_PREFIX_ERROR,
    U_IDNA_VERIFICATION_ERROR,
    U_IDNA_LABEL_TOO_LONG_ERROR,
    U_IDNA_ZERO_LENGTH_LABEL_ERROR,
    U_IDNA_DOMAIN_NAME_TOO_LONG_ERROR,
    U_IDNA_ERROR_LIMIT,
    U_STRINGPREP_PROHIBITED_ERROR = U_IDNA_PROHIBITED_ERROR,
    U_STRINGPREP_UNASSIGNED_ERROR = U_IDNA_UNASSIGNED_ERROR,
    U_STRINGPREP_CHECK_BIDI_ERROR = U_IDNA_CHECK_BIDI_ERROR,
    U_PLUGIN_ERROR_START=0x10500,
    U_PLUGIN_TOO_HIGH=0x10500,
    U_PLUGIN_DIDNT_SET_LEVEL,
    U_PLUGIN_ERROR_LIMIT,
    U_ERROR_LIMIT=U_PLUGIN_ERROR_LIMIT
} UErrorCode;
    static
    inline UBool U_SUCCESS(UErrorCode code) { return (UBool)(code<=U_ZERO_ERROR); }
    static
    inline UBool U_FAILURE(UErrorCode code) { return (UBool)(code>U_ZERO_ERROR); }
U_STABLE const char * U_EXPORT2
u_errorName(UErrorCode code);
#include <stdarg.h>
U_CDECL_BEGIN
typedef enum UTraceLevel {
    UTRACE_OFF=-1,
    UTRACE_ERROR=0,
    UTRACE_WARNING=3,
    UTRACE_OPEN_CLOSE=5,
    UTRACE_INFO=7,
    UTRACE_VERBOSE=9
} UTraceLevel;
typedef enum UTraceFunctionNumber {
    UTRACE_FUNCTION_START=0,
    UTRACE_U_INIT=UTRACE_FUNCTION_START,
    UTRACE_U_CLEANUP,
    UTRACE_FUNCTION_LIMIT,
    UTRACE_CONVERSION_START=0x1000,
    UTRACE_UCNV_OPEN=UTRACE_CONVERSION_START,
    UTRACE_UCNV_OPEN_PACKAGE,
    UTRACE_UCNV_OPEN_ALGORITHMIC,
    UTRACE_UCNV_CLONE,
    UTRACE_UCNV_CLOSE,
    UTRACE_UCNV_FLUSH_CACHE,
    UTRACE_UCNV_LOAD,
    UTRACE_UCNV_UNLOAD,
    UTRACE_CONVERSION_LIMIT,
    UTRACE_COLLATION_START=0x2000,
    UTRACE_UCOL_OPEN=UTRACE_COLLATION_START,
    UTRACE_UCOL_CLOSE,
    UTRACE_UCOL_STRCOLL,
    UTRACE_UCOL_GET_SORTKEY,
    UTRACE_UCOL_GETLOCALE,
    UTRACE_UCOL_NEXTSORTKEYPART,
    UTRACE_UCOL_STRCOLLITER,
    UTRACE_UCOL_OPEN_FROM_SHORT_STRING,
    UTRACE_UCOL_STRCOLLUTF8,
    UTRACE_COLLATION_LIMIT
} UTraceFunctionNumber;
U_STABLE void U_EXPORT2
utrace_setLevel(int32_t traceLevel);
U_STABLE int32_t U_EXPORT2
utrace_getLevel(void);
typedef void U_CALLCONV
UTraceEntry(const void *context, int32_t fnNumber);
typedef void U_CALLCONV
UTraceExit(const void *context, int32_t fnNumber,
           const char *fmt, va_list args);
typedef void U_CALLCONV
UTraceData(const void *context, int32_t fnNumber, int32_t level,
           const char *fmt, va_list args);
U_STABLE void U_EXPORT2
utrace_setFunctions(const void *context,
                    UTraceEntry *e, UTraceExit *x, UTraceData *d);
U_STABLE void U_EXPORT2
utrace_getFunctions(const void **context,
                    UTraceEntry **e, UTraceExit **x, UTraceData **d);
U_STABLE int32_t U_EXPORT2
utrace_vformat(char *outBuf, int32_t capacity,
              int32_t indent, const char *fmt, va_list args);
U_STABLE int32_t U_EXPORT2
utrace_format(char *outBuf, int32_t capacity,
              int32_t indent, const char *fmt, ...);
U_STABLE const char * U_EXPORT2
utrace_functionName(int32_t fnNumber);
U_CDECL_END
enum UStringTrieResult {
    USTRINGTRIE_NO_MATCH,
    USTRINGTRIE_NO_VALUE,
    USTRINGTRIE_FINAL_VALUE,
    USTRINGTRIE_INTERMEDIATE_VALUE
};
U_STABLE int32_t U_EXPORT2
u_shapeArabic(const UChar *source, int32_t sourceLength,
              UChar *dest, int32_t destSize,
              uint32_t options,
              UErrorCode *pErrorCode);
typedef enum UScriptCode {
      USCRIPT_INVALID_CODE = -1,
      USCRIPT_COMMON = 0,
      USCRIPT_INHERITED = 1,
      USCRIPT_ARABIC = 2,
      USCRIPT_ARMENIAN = 3,
      USCRIPT_BENGALI = 4,
      USCRIPT_BOPOMOFO = 5,
      USCRIPT_CHEROKEE = 6,
      USCRIPT_COPTIC = 7,
      USCRIPT_CYRILLIC = 8,
      USCRIPT_DESERET = 9,
      USCRIPT_DEVANAGARI = 10,
      USCRIPT_ETHIOPIC = 11,
      USCRIPT_GEORGIAN = 12,
      USCRIPT_GOTHIC = 13,
      USCRIPT_GREEK = 14,
      USCRIPT_GUJARATI = 15,
      USCRIPT_GURMUKHI = 16,
      USCRIPT_HAN = 17,
      USCRIPT_HANGUL = 18,
      USCRIPT_HEBREW = 19,
      USCRIPT_HIRAGANA = 20,
      USCRIPT_KANNADA = 21,
      USCRIPT_KATAKANA = 22,
      USCRIPT_KHMER = 23,
      USCRIPT_LAO = 24,
      USCRIPT_LATIN = 25,
      USCRIPT_MALAYALAM = 26,
      USCRIPT_MONGOLIAN = 27,
      USCRIPT_MYANMAR = 28,
      USCRIPT_OGHAM = 29,
      USCRIPT_OLD_ITALIC = 30,
      USCRIPT_ORIYA = 31,
      USCRIPT_RUNIC = 32,
      USCRIPT_SINHALA = 33,
      USCRIPT_SYRIAC = 34,
      USCRIPT_TAMIL = 35,
      USCRIPT_TELUGU = 36,
      USCRIPT_THAANA = 37,
      USCRIPT_THAI = 38,
      USCRIPT_TIBETAN = 39,
      USCRIPT_CANADIAN_ABORIGINAL = 40,
      USCRIPT_UCAS = USCRIPT_CANADIAN_ABORIGINAL,
      USCRIPT_YI = 41,
      USCRIPT_TAGALOG = 42,
      USCRIPT_HANUNOO = 43,
      USCRIPT_BUHID = 44,
      USCRIPT_TAGBANWA = 45,
      USCRIPT_BRAILLE = 46,
      USCRIPT_CYPRIOT = 47,
      USCRIPT_LIMBU = 48,
      USCRIPT_LINEAR_B = 49,
      USCRIPT_OSMANYA = 50,
      USCRIPT_SHAVIAN = 51,
      USCRIPT_TAI_LE = 52,
      USCRIPT_UGARITIC = 53,
      USCRIPT_KATAKANA_OR_HIRAGANA = 54,
      USCRIPT_BUGINESE = 55,
      USCRIPT_GLAGOLITIC = 56,
      USCRIPT_KHAROSHTHI = 57,
      USCRIPT_SYLOTI_NAGRI = 58,
      USCRIPT_NEW_TAI_LUE = 59,
      USCRIPT_TIFINAGH = 60,
      USCRIPT_OLD_PERSIAN = 61,
      USCRIPT_BALINESE = 62,
      USCRIPT_BATAK = 63,
      USCRIPT_BLISSYMBOLS = 64,
      USCRIPT_BRAHMI = 65,
      USCRIPT_CHAM = 66,
      USCRIPT_CIRTH = 67,
      USCRIPT_OLD_CHURCH_SLAVONIC_CYRILLIC = 68,
      USCRIPT_DEMOTIC_EGYPTIAN = 69,
      USCRIPT_HIERATIC_EGYPTIAN = 70,
      USCRIPT_EGYPTIAN_HIEROGLYPHS = 71,
      USCRIPT_KHUTSURI = 72,
      USCRIPT_SIMPLIFIED_HAN = 73,
      USCRIPT_TRADITIONAL_HAN = 74,
      USCRIPT_PAHAWH_HMONG = 75,
      USCRIPT_OLD_HUNGARIAN = 76,
      USCRIPT_HARAPPAN_INDUS = 77,
      USCRIPT_JAVANESE = 78,
      USCRIPT_KAYAH_LI = 79,
      USCRIPT_LATIN_FRAKTUR = 80,
      USCRIPT_LATIN_GAELIC = 81,
      USCRIPT_LEPCHA = 82,
      USCRIPT_LINEAR_A = 83,
      USCRIPT_MANDAIC = 84,
      USCRIPT_MANDAEAN = USCRIPT_MANDAIC,
      USCRIPT_MAYAN_HIEROGLYPHS = 85,
      USCRIPT_MEROITIC_HIEROGLYPHS = 86,
      USCRIPT_MEROITIC = USCRIPT_MEROITIC_HIEROGLYPHS,
      USCRIPT_NKO = 87,
      USCRIPT_ORKHON = 88,
      USCRIPT_OLD_PERMIC = 89,
      USCRIPT_PHAGS_PA = 90,
      USCRIPT_PHOENICIAN = 91,
      USCRIPT_MIAO = 92,
      USCRIPT_PHONETIC_POLLARD = USCRIPT_MIAO,
      USCRIPT_RONGORONGO = 93,
      USCRIPT_SARATI = 94,
      USCRIPT_ESTRANGELO_SYRIAC = 95,
      USCRIPT_WESTERN_SYRIAC = 96,
      USCRIPT_EASTERN_SYRIAC = 97,
      USCRIPT_TENGWAR = 98,
      USCRIPT_VAI = 99,
      USCRIPT_VISIBLE_SPEECH = 100,
      USCRIPT_CUNEIFORM = 101,
      USCRIPT_UNWRITTEN_LANGUAGES = 102,
      USCRIPT_UNKNOWN = 103,
      USCRIPT_CARIAN = 104,
      USCRIPT_JAPANESE = 105,
      USCRIPT_LANNA = 106,
      USCRIPT_LYCIAN = 107,
      USCRIPT_LYDIAN = 108,
      USCRIPT_OL_CHIKI = 109,
      USCRIPT_REJANG = 110,
      USCRIPT_SAURASHTRA = 111,
      USCRIPT_SIGN_WRITING = 112,
      USCRIPT_SUNDANESE = 113,
      USCRIPT_MOON = 114,
      USCRIPT_MEITEI_MAYEK = 115,
      USCRIPT_IMPERIAL_ARAMAIC = 116,
      USCRIPT_AVESTAN = 117,
      USCRIPT_CHAKMA = 118,
      USCRIPT_KOREAN = 119,
      USCRIPT_KAITHI = 120,
      USCRIPT_MANICHAEAN = 121,
      USCRIPT_INSCRIPTIONAL_PAHLAVI = 122,
      USCRIPT_PSALTER_PAHLAVI = 123,
      USCRIPT_BOOK_PAHLAVI = 124,
      USCRIPT_INSCRIPTIONAL_PARTHIAN = 125,
      USCRIPT_SAMARITAN = 126,
      USCRIPT_TAI_VIET = 127,
      USCRIPT_MATHEMATICAL_NOTATION = 128,
      USCRIPT_SYMBOLS = 129,
      USCRIPT_BAMUM = 130,
      USCRIPT_LISU = 131,
      USCRIPT_NAKHI_GEBA = 132,
      USCRIPT_OLD_SOUTH_ARABIAN = 133,
      USCRIPT_BASSA_VAH = 134,
      USCRIPT_DUPLOYAN = 135,
      USCRIPT_ELBASAN = 136,
      USCRIPT_GRANTHA = 137,
      USCRIPT_KPELLE = 138,
      USCRIPT_LOMA = 139,
      USCRIPT_MENDE = 140,
      USCRIPT_MEROITIC_CURSIVE = 141,
      USCRIPT_OLD_NORTH_ARABIAN = 142,
      USCRIPT_NABATAEAN = 143,
      USCRIPT_PALMYRENE = 144,
      USCRIPT_KHUDAWADI = 145,
      USCRIPT_SINDHI = USCRIPT_KHUDAWADI,
      USCRIPT_WARANG_CITI = 146,
      USCRIPT_AFAKA = 147,
      USCRIPT_JURCHEN = 148,
      USCRIPT_MRO = 149,
      USCRIPT_NUSHU = 150,
      USCRIPT_SHARADA = 151,
      USCRIPT_SORA_SOMPENG = 152,
      USCRIPT_TAKRI = 153,
      USCRIPT_TANGUT = 154,
      USCRIPT_WOLEAI = 155,
      USCRIPT_ANATOLIAN_HIEROGLYPHS = 156,
      USCRIPT_KHOJKI = 157,
      USCRIPT_TIRHUTA = 158,
      USCRIPT_CAUCASIAN_ALBANIAN = 159,
      USCRIPT_MAHAJANI = 160,
      USCRIPT_AHOM = 161,
      USCRIPT_HATRAN = 162,
      USCRIPT_MODI = 163,
      USCRIPT_MULTANI = 164,
      USCRIPT_PAU_CIN_HAU = 165,
      USCRIPT_SIDDHAM = 166,
      USCRIPT_CODE_LIMIT = 167
} UScriptCode;
U_STABLE int32_t U_EXPORT2
uscript_getCode(const char* nameOrAbbrOrLocale,UScriptCode* fillIn,int32_t capacity,UErrorCode *err);
U_STABLE const char* U_EXPORT2
uscript_getName(UScriptCode scriptCode);
U_STABLE const char* U_EXPORT2
uscript_getShortName(UScriptCode scriptCode);
U_STABLE UScriptCode U_EXPORT2
uscript_getScript(UChar32 codepoint, UErrorCode *err);
U_STABLE UBool U_EXPORT2
uscript_hasScript(UChar32 c, UScriptCode sc);
U_STABLE int32_t U_EXPORT2
uscript_getScriptExtensions(UChar32 c,
                            UScriptCode *scripts, int32_t capacity,
                            UErrorCode *errorCode);
typedef enum UScriptUsage {
    USCRIPT_USAGE_NOT_ENCODED,
    USCRIPT_USAGE_UNKNOWN,
    USCRIPT_USAGE_EXCLUDED,
    USCRIPT_USAGE_LIMITED_USE,
    USCRIPT_USAGE_ASPIRATIONAL,
    USCRIPT_USAGE_RECOMMENDED
} UScriptUsage;
U_STABLE int32_t U_EXPORT2
uscript_getSampleString(UScriptCode script, UChar *dest, int32_t capacity, UErrorCode *pErrorCode);
U_STABLE UScriptUsage U_EXPORT2
uscript_getUsage(UScriptCode script);
U_STABLE UBool U_EXPORT2
uscript_isRightToLeft(UScriptCode script);
U_STABLE UBool U_EXPORT2
uscript_breaksBetweenLetters(UScriptCode script);
U_STABLE UBool U_EXPORT2
uscript_isCased(UScriptCode script);
U_CDECL_BEGIN
typedef void* UReplaceable;
typedef struct UReplaceableCallbacks {
    int32_t (*length)(const UReplaceable* rep);
    UChar (*charAt)(const UReplaceable* rep,
                      int32_t offset);
    UChar32 (*char32At)(const UReplaceable* rep,
                        int32_t offset);
    void (*replace)(UReplaceable* rep,
                       int32_t start,
                       int32_t limit,
                       const UChar* text,
                       int32_t textLength);
    void (*extract)(UReplaceable* rep,
                       int32_t start,
                       int32_t limit,
                       UChar* dst);
    void (*copy)(UReplaceable* rep,
                    int32_t start,
                    int32_t limit,
                    int32_t dest);
} UReplaceableCallbacks;
U_CDECL_END
typedef void* UClassID;
U_CDECL_BEGIN
typedef struct UFieldPosition {
  int32_t field;
  int32_t beginIndex;
  int32_t endIndex;
} UFieldPosition;
typedef const void* URegistryKey;
U_CDECL_END
struct UListFormatter;
typedef struct UListFormatter UListFormatter;
U_STABLE UListFormatter* U_EXPORT2
ulistfmt_open(const char* locale,
              UErrorCode* status);
U_STABLE void U_EXPORT2
ulistfmt_close(UListFormatter *listfmt);
U_DRAFT int32_t U_EXPORT2
ulistfmt_format(const UListFormatter* listfmt,
                const UChar* const strings[],
                const int32_t * stringLengths,
                int32_t stringCount,
                UChar* result,
                int32_t resultCapacity,
                UErrorCode* status);
U_CDECL_BEGIN
struct UCharIterator;
typedef struct UCharIterator UCharIterator;
typedef enum UCharIteratorOrigin {
    UITER_START, UITER_CURRENT, UITER_LIMIT, UITER_ZERO, UITER_LENGTH
} UCharIteratorOrigin;
enum {
    UITER_UNKNOWN_INDEX=-2
};
typedef int32_t U_CALLCONV
UCharIteratorGetIndex(UCharIterator *iter, UCharIteratorOrigin origin);
typedef int32_t U_CALLCONV
UCharIteratorMove(UCharIterator *iter, int32_t delta, UCharIteratorOrigin origin);
typedef UBool U_CALLCONV
UCharIteratorHasNext(UCharIterator *iter);
typedef UBool U_CALLCONV
UCharIteratorHasPrevious(UCharIterator *iter);
typedef UChar32 U_CALLCONV
UCharIteratorCurrent(UCharIterator *iter);
typedef UChar32 U_CALLCONV
UCharIteratorNext(UCharIterator *iter);
typedef UChar32 U_CALLCONV
UCharIteratorPrevious(UCharIterator *iter);
typedef int32_t U_CALLCONV
UCharIteratorReserved(UCharIterator *iter, int32_t something);
typedef uint32_t U_CALLCONV
UCharIteratorGetState(const UCharIterator *iter);
typedef void U_CALLCONV
UCharIteratorSetState(UCharIterator *iter, uint32_t state, UErrorCode *pErrorCode);
struct UCharIterator {
    const void *context;
    int32_t length;
    int32_t start;
    int32_t index;
    int32_t limit;
    int32_t reservedField;
    UCharIteratorGetIndex *getIndex;
    UCharIteratorMove *move;
    UCharIteratorHasNext *hasNext;
    UCharIteratorHasPrevious *hasPrevious;
    UCharIteratorCurrent *current;
    UCharIteratorNext *next;
    UCharIteratorPrevious *previous;
    UCharIteratorReserved *reservedFn;
    UCharIteratorGetState *getState;
    UCharIteratorSetState *setState;
};
U_STABLE UChar32 U_EXPORT2
uiter_current32(UCharIterator *iter);
U_STABLE UChar32 U_EXPORT2
uiter_next32(UCharIterator *iter);
U_STABLE UChar32 U_EXPORT2
uiter_previous32(UCharIterator *iter);
U_STABLE uint32_t U_EXPORT2
uiter_getState(const UCharIterator *iter);
U_STABLE void U_EXPORT2
uiter_setState(UCharIterator *iter, uint32_t state, UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
uiter_setString(UCharIterator *iter, const UChar *s, int32_t length);
U_STABLE void U_EXPORT2
uiter_setUTF16BE(UCharIterator *iter, const char *s, int32_t length);
U_STABLE void U_EXPORT2
uiter_setUTF8(UCharIterator *iter, const char *s, int32_t length);
U_CDECL_END
struct UEnumeration;
typedef struct UEnumeration UEnumeration;
U_STABLE void U_EXPORT2
uenum_close(UEnumeration* en);
U_STABLE int32_t U_EXPORT2
uenum_count(UEnumeration* en, UErrorCode* status);
U_STABLE const UChar* U_EXPORT2
uenum_unext(UEnumeration* en,
            int32_t* resultLength,
            UErrorCode* status);
U_STABLE const char* U_EXPORT2
uenum_next(UEnumeration* en,
           int32_t* resultLength,
           UErrorCode* status);
U_STABLE void U_EXPORT2
uenum_reset(UEnumeration* en, UErrorCode* status);
U_STABLE UEnumeration* U_EXPORT2
uenum_openUCharStringsEnumeration(const UChar* const strings[], int32_t count,
                                 UErrorCode* ec);
U_STABLE UEnumeration* U_EXPORT2
uenum_openCharStringsEnumeration(const char* const strings[], int32_t count,
                                 UErrorCode* ec);
typedef enum {
  ULOC_ACTUAL_LOCALE = 0,
  ULOC_VALID_LOCALE = 1,
  ULOC_DATA_LOCALE_TYPE_LIMIT = 3
} ULocDataLocaleType ;
U_STABLE const char* U_EXPORT2
uloc_getDefault(void);
U_STABLE void U_EXPORT2
uloc_setDefault(const char* localeID,
        UErrorCode* status);
U_STABLE int32_t U_EXPORT2
uloc_getLanguage(const char* localeID,
         char* language,
         int32_t languageCapacity,
         UErrorCode* err);
U_STABLE int32_t U_EXPORT2
uloc_getScript(const char* localeID,
         char* script,
         int32_t scriptCapacity,
         UErrorCode* err);
U_STABLE int32_t U_EXPORT2
uloc_getCountry(const char* localeID,
        char* country,
        int32_t countryCapacity,
        UErrorCode* err);
U_STABLE int32_t U_EXPORT2
uloc_getVariant(const char* localeID,
        char* variant,
        int32_t variantCapacity,
        UErrorCode* err);
U_STABLE int32_t U_EXPORT2
uloc_getName(const char* localeID,
         char* name,
         int32_t nameCapacity,
         UErrorCode* err);
U_STABLE int32_t U_EXPORT2
uloc_canonicalize(const char* localeID,
         char* name,
         int32_t nameCapacity,
         UErrorCode* err);
U_STABLE const char* U_EXPORT2
uloc_getISO3Language(const char* localeID);
U_STABLE const char* U_EXPORT2
uloc_getISO3Country(const char* localeID);
U_STABLE uint32_t U_EXPORT2
uloc_getLCID(const char* localeID);
U_STABLE int32_t U_EXPORT2
uloc_getDisplayLanguage(const char* locale,
            const char* displayLocale,
            UChar* language,
            int32_t languageCapacity,
            UErrorCode* status);
U_STABLE int32_t U_EXPORT2
uloc_getDisplayScript(const char* locale,
            const char* displayLocale,
            UChar* script,
            int32_t scriptCapacity,
            UErrorCode* status);
U_STABLE int32_t U_EXPORT2
uloc_getDisplayCountry(const char* locale,
                       const char* displayLocale,
                       UChar* country,
                       int32_t countryCapacity,
                       UErrorCode* status);
U_STABLE int32_t U_EXPORT2
uloc_getDisplayVariant(const char* locale,
                       const char* displayLocale,
                       UChar* variant,
                       int32_t variantCapacity,
                       UErrorCode* status);
U_STABLE int32_t U_EXPORT2
uloc_getDisplayKeyword(const char* keyword,
                       const char* displayLocale,
                       UChar* dest,
                       int32_t destCapacity,
                       UErrorCode* status);
U_STABLE int32_t U_EXPORT2
uloc_getDisplayKeywordValue( const char* locale,
                               const char* keyword,
                               const char* displayLocale,
                               UChar* dest,
                               int32_t destCapacity,
                               UErrorCode* status);
U_STABLE int32_t U_EXPORT2
uloc_getDisplayName(const char* localeID,
            const char* inLocaleID,
            UChar* result,
            int32_t maxResultSize,
            UErrorCode* err);
U_STABLE const char* U_EXPORT2
uloc_getAvailable(int32_t n);
U_STABLE int32_t U_EXPORT2 uloc_countAvailable(void);
U_STABLE const char* const* U_EXPORT2
uloc_getISOLanguages(void);
U_STABLE const char* const* U_EXPORT2
uloc_getISOCountries(void);
U_STABLE int32_t U_EXPORT2
uloc_getParent(const char* localeID,
                 char* parent,
                 int32_t parentCapacity,
                 UErrorCode* err);
U_STABLE int32_t U_EXPORT2
uloc_getBaseName(const char* localeID,
         char* name,
         int32_t nameCapacity,
         UErrorCode* err);
U_STABLE UEnumeration* U_EXPORT2
uloc_openKeywords(const char* localeID,
                        UErrorCode* status);
U_STABLE int32_t U_EXPORT2
uloc_getKeywordValue(const char* localeID,
                     const char* keywordName,
                     char* buffer, int32_t bufferCapacity,
                     UErrorCode* status);
U_STABLE int32_t U_EXPORT2
uloc_setKeywordValue(const char* keywordName,
                     const char* keywordValue,
                     char* buffer, int32_t bufferCapacity,
                     UErrorCode* status);
U_STABLE UBool U_EXPORT2
uloc_isRightToLeft(const char *locale);
typedef enum {
  ULOC_LAYOUT_LTR = 0,
  ULOC_LAYOUT_RTL = 1,
  ULOC_LAYOUT_TTB = 2,
  ULOC_LAYOUT_BTT = 3,
  ULOC_LAYOUT_UNKNOWN
} ULayoutType;
U_STABLE ULayoutType U_EXPORT2
uloc_getCharacterOrientation(const char* localeId,
                             UErrorCode *status);
U_STABLE ULayoutType U_EXPORT2
uloc_getLineOrientation(const char* localeId,
                        UErrorCode *status);
typedef enum {
  ULOC_ACCEPT_FAILED = 0,
  ULOC_ACCEPT_VALID = 1,
  ULOC_ACCEPT_FALLBACK = 2
} UAcceptResult;
U_STABLE int32_t U_EXPORT2
uloc_acceptLanguageFromHTTP(char *result, int32_t resultAvailable,
                            UAcceptResult *outResult,
                            const char *httpAcceptLanguage,
                            UEnumeration* availableLocales,
                            UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uloc_acceptLanguage(char *result, int32_t resultAvailable,
                    UAcceptResult *outResult, const char **acceptList,
                    int32_t acceptListCount,
                    UEnumeration* availableLocales,
                    UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uloc_getLocaleForLCID(uint32_t hostID, char *locale, int32_t localeCapacity,
                    UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uloc_addLikelySubtags(const char* localeID,
         char* maximizedLocaleID,
         int32_t maximizedLocaleIDCapacity,
         UErrorCode* err);
U_STABLE int32_t U_EXPORT2
uloc_minimizeSubtags(const char* localeID,
         char* minimizedLocaleID,
         int32_t minimizedLocaleIDCapacity,
         UErrorCode* err);
U_STABLE int32_t U_EXPORT2
uloc_forLanguageTag(const char* langtag,
                    char* localeID,
                    int32_t localeIDCapacity,
                    int32_t* parsedLength,
                    UErrorCode* err);
U_STABLE int32_t U_EXPORT2
uloc_toLanguageTag(const char* localeID,
                   char* langtag,
                   int32_t langtagCapacity,
                   UBool strict,
                   UErrorCode* err);
U_STABLE const char* U_EXPORT2
uloc_toUnicodeLocaleKey(const char* keyword);
U_STABLE const char* U_EXPORT2
uloc_toUnicodeLocaleType(const char* keyword, const char* value);
U_STABLE const char* U_EXPORT2
uloc_toLegacyKey(const char* keyword);
U_STABLE const char* U_EXPORT2
uloc_toLegacyType(const char* keyword, const char* value);
struct UResourceBundle;
typedef struct UResourceBundle UResourceBundle;
typedef enum {
    URES_NONE=-1,
    URES_STRING=0,
    URES_BINARY=1,
    URES_TABLE=2,
    URES_ALIAS=3,
    URES_INT=7,
    URES_ARRAY=8,
    URES_INT_VECTOR = 14,
    URES_LIMIT = 16
} UResType;
U_STABLE UResourceBundle* U_EXPORT2
ures_open(const char* packageName,
          const char* locale,
          UErrorCode* status);
U_STABLE UResourceBundle* U_EXPORT2
ures_openDirect(const char* packageName,
                const char* locale,
                UErrorCode* status);
U_STABLE UResourceBundle* U_EXPORT2
ures_openU(const UChar* packageName,
           const char* locale,
           UErrorCode* status);
U_STABLE void U_EXPORT2
ures_close(UResourceBundle* resourceBundle);
U_STABLE void U_EXPORT2
ures_getVersion(const UResourceBundle* resB,
                UVersionInfo versionInfo);
U_STABLE const char* U_EXPORT2
ures_getLocaleByType(const UResourceBundle* resourceBundle,
                     ULocDataLocaleType type,
                     UErrorCode* status);
U_STABLE const UChar* U_EXPORT2
ures_getString(const UResourceBundle* resourceBundle,
               int32_t* len,
               UErrorCode* status);
U_STABLE const char * U_EXPORT2
ures_getUTF8String(const UResourceBundle *resB,
                   char *dest, int32_t *length,
                   UBool forceCopy,
                   UErrorCode *status);
U_STABLE const uint8_t* U_EXPORT2
ures_getBinary(const UResourceBundle* resourceBundle,
               int32_t* len,
               UErrorCode* status);
U_STABLE const int32_t* U_EXPORT2
ures_getIntVector(const UResourceBundle* resourceBundle,
                  int32_t* len,
                  UErrorCode* status);
U_STABLE uint32_t U_EXPORT2
ures_getUInt(const UResourceBundle* resourceBundle,
             UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ures_getInt(const UResourceBundle* resourceBundle,
            UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ures_getSize(const UResourceBundle *resourceBundle);
U_STABLE UResType U_EXPORT2
ures_getType(const UResourceBundle *resourceBundle);
U_STABLE const char * U_EXPORT2
ures_getKey(const UResourceBundle *resourceBundle);
U_STABLE void U_EXPORT2
ures_resetIterator(UResourceBundle *resourceBundle);
U_STABLE UBool U_EXPORT2
ures_hasNext(const UResourceBundle *resourceBundle);
U_STABLE UResourceBundle* U_EXPORT2
ures_getNextResource(UResourceBundle *resourceBundle,
                     UResourceBundle *fillIn,
                     UErrorCode *status);
U_STABLE const UChar* U_EXPORT2
ures_getNextString(UResourceBundle *resourceBundle,
                   int32_t* len,
                   const char ** key,
                   UErrorCode *status);
U_STABLE UResourceBundle* U_EXPORT2
ures_getByIndex(const UResourceBundle *resourceBundle,
                int32_t indexR,
                UResourceBundle *fillIn,
                UErrorCode *status);
U_STABLE const UChar* U_EXPORT2
ures_getStringByIndex(const UResourceBundle *resourceBundle,
                      int32_t indexS,
                      int32_t* len,
                      UErrorCode *status);
U_STABLE const char * U_EXPORT2
ures_getUTF8StringByIndex(const UResourceBundle *resB,
                          int32_t stringIndex,
                          char *dest, int32_t *pLength,
                          UBool forceCopy,
                          UErrorCode *status);
U_STABLE UResourceBundle* U_EXPORT2
ures_getByKey(const UResourceBundle *resourceBundle,
              const char* key,
              UResourceBundle *fillIn,
              UErrorCode *status);
U_STABLE const UChar* U_EXPORT2
ures_getStringByKey(const UResourceBundle *resB,
                    const char* key,
                    int32_t* len,
                    UErrorCode *status);
U_STABLE const char * U_EXPORT2
ures_getUTF8StringByKey(const UResourceBundle *resB,
                        const char *key,
                        char *dest, int32_t *pLength,
                        UBool forceCopy,
                        UErrorCode *status);
U_STABLE UEnumeration* U_EXPORT2
ures_openAvailableLocales(const char *packageName, UErrorCode *status);
enum UDisplayContextType {
    UDISPCTX_TYPE_DIALECT_HANDLING = 0,
    UDISPCTX_TYPE_CAPITALIZATION = 1,
    UDISPCTX_TYPE_DISPLAY_LENGTH = 2
};
typedef enum UDisplayContextType UDisplayContextType;
enum UDisplayContext {
    UDISPCTX_STANDARD_NAMES = (UDISPCTX_TYPE_DIALECT_HANDLING<<8) + 0,
    UDISPCTX_DIALECT_NAMES = (UDISPCTX_TYPE_DIALECT_HANDLING<<8) + 1,
    UDISPCTX_CAPITALIZATION_NONE = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 0,
    UDISPCTX_CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 1,
    UDISPCTX_CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 2,
    UDISPCTX_CAPITALIZATION_FOR_UI_LIST_OR_MENU = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 3,
    UDISPCTX_CAPITALIZATION_FOR_STANDALONE = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 4,
    UDISPCTX_LENGTH_FULL = (UDISPCTX_TYPE_DISPLAY_LENGTH<<8) + 0,
    UDISPCTX_LENGTH_SHORT = (UDISPCTX_TYPE_DISPLAY_LENGTH<<8) + 1
};
typedef enum UDisplayContext UDisplayContext;
typedef enum {
    ULDN_STANDARD_NAMES = 0,
    ULDN_DIALECT_NAMES
} UDialectHandling;
struct ULocaleDisplayNames;
typedef struct ULocaleDisplayNames ULocaleDisplayNames;
U_STABLE ULocaleDisplayNames * U_EXPORT2
uldn_open(const char * locale,
          UDialectHandling dialectHandling,
          UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
uldn_close(ULocaleDisplayNames *ldn);
U_STABLE const char * U_EXPORT2
uldn_getLocale(const ULocaleDisplayNames *ldn);
U_STABLE UDialectHandling U_EXPORT2
uldn_getDialectHandling(const ULocaleDisplayNames *ldn);
U_STABLE int32_t U_EXPORT2
uldn_localeDisplayName(const ULocaleDisplayNames *ldn,
                       const char *locale,
                       UChar *result,
                       int32_t maxResultSize,
                       UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uldn_languageDisplayName(const ULocaleDisplayNames *ldn,
                         const char *lang,
                         UChar *result,
                         int32_t maxResultSize,
                         UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uldn_scriptDisplayName(const ULocaleDisplayNames *ldn,
                       const char *script,
                       UChar *result,
                       int32_t maxResultSize,
                       UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uldn_scriptCodeDisplayName(const ULocaleDisplayNames *ldn,
                           UScriptCode scriptCode,
                           UChar *result,
                           int32_t maxResultSize,
                           UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uldn_regionDisplayName(const ULocaleDisplayNames *ldn,
                       const char *region,
                       UChar *result,
                       int32_t maxResultSize,
                       UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uldn_variantDisplayName(const ULocaleDisplayNames *ldn,
                        const char *variant,
                        UChar *result,
                        int32_t maxResultSize,
                        UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uldn_keyDisplayName(const ULocaleDisplayNames *ldn,
                    const char *key,
                    UChar *result,
                    int32_t maxResultSize,
                    UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uldn_keyValueDisplayName(const ULocaleDisplayNames *ldn,
                         const char *key,
                         const char *value,
                         UChar *result,
                         int32_t maxResultSize,
                         UErrorCode *pErrorCode);
U_STABLE ULocaleDisplayNames * U_EXPORT2
uldn_openForContext(const char * locale, UDisplayContext *contexts,
                    int32_t length, UErrorCode *pErrorCode);
U_STABLE UDisplayContext U_EXPORT2
uldn_getContext(const ULocaleDisplayNames *ldn, UDisplayContextType type,
                UErrorCode *pErrorCode);
enum UCurrencyUsage {
    UCURR_USAGE_STANDARD=0,
    UCURR_USAGE_CASH=1,
    UCURR_USAGE_COUNT=2
};
typedef enum UCurrencyUsage UCurrencyUsage;
U_STABLE int32_t U_EXPORT2
ucurr_forLocale(const char* locale,
                UChar* buff,
                int32_t buffCapacity,
                UErrorCode* ec);
typedef enum UCurrNameStyle {
    UCURR_SYMBOL_NAME,
    UCURR_LONG_NAME
} UCurrNameStyle;
typedef const void* UCurrRegistryKey;
U_STABLE UCurrRegistryKey U_EXPORT2
ucurr_register(const UChar* isoCode,
                   const char* locale,
                   UErrorCode* status);
U_STABLE UBool U_EXPORT2
ucurr_unregister(UCurrRegistryKey key, UErrorCode* status);
U_STABLE const UChar* U_EXPORT2
ucurr_getName(const UChar* currency,
              const char* locale,
              UCurrNameStyle nameStyle,
              UBool* isChoiceFormat,
              int32_t* len,
              UErrorCode* ec);
U_STABLE const UChar* U_EXPORT2
ucurr_getPluralName(const UChar* currency,
                    const char* locale,
                    UBool* isChoiceFormat,
                    const char* pluralCount,
                    int32_t* len,
                    UErrorCode* ec);
U_STABLE int32_t U_EXPORT2
ucurr_getDefaultFractionDigits(const UChar* currency,
                               UErrorCode* ec);
U_STABLE int32_t U_EXPORT2
ucurr_getDefaultFractionDigitsForUsage(const UChar* currency,
                                       const UCurrencyUsage usage,
                                       UErrorCode* ec);
U_STABLE double U_EXPORT2
ucurr_getRoundingIncrement(const UChar* currency,
                           UErrorCode* ec);
U_STABLE double U_EXPORT2
ucurr_getRoundingIncrementForUsage(const UChar* currency,
                                   const UCurrencyUsage usage,
                                   UErrorCode* ec);
typedef enum UCurrCurrencyType {
    UCURR_ALL = INT32_MAX,
    UCURR_COMMON = 1,
    UCURR_UNCOMMON = 2,
    UCURR_DEPRECATED = 4,
    UCURR_NON_DEPRECATED = 8
} UCurrCurrencyType;
U_STABLE UEnumeration * U_EXPORT2
ucurr_openISOCurrencies(uint32_t currType, UErrorCode *pErrorCode);
U_STABLE UBool U_EXPORT2
ucurr_isAvailable(const UChar* isoCode,
             UDate from,
             UDate to,
             UErrorCode* errorCode);
U_STABLE int32_t U_EXPORT2
ucurr_countCurrencies(const char* locale,
                 UDate date,
                 UErrorCode* ec);
U_STABLE int32_t U_EXPORT2
ucurr_forLocaleAndDate(const char* locale,
                UDate date,
                int32_t index,
                UChar* buff,
                int32_t buffCapacity,
                UErrorCode* ec);
U_STABLE UEnumeration* U_EXPORT2
ucurr_getKeywordValuesForLocale(const char* key,
                                const char* locale,
                                UBool commonlyUsed,
                                UErrorCode* status);
U_STABLE int32_t U_EXPORT2
ucurr_getNumericCode(const UChar* currency);
struct UConverter;
typedef struct UConverter UConverter;
typedef enum {
    UCNV_UNASSIGNED = 0,
    UCNV_ILLEGAL = 1,
    UCNV_IRREGULAR = 2,
    UCNV_RESET = 3,
    UCNV_CLOSE = 4,
    UCNV_CLONE = 5
} UConverterCallbackReason;
typedef struct {
    uint16_t size;
    UBool flush;
    UConverter *converter;
    const UChar *source;
    const UChar *sourceLimit;
    char *target;
    const char *targetLimit;
    int32_t *offsets;
} UConverterFromUnicodeArgs;
typedef struct {
    uint16_t size;
    UBool flush;
    UConverter *converter;
    const char *source;
    const char *sourceLimit;
    UChar *target;
    const UChar *targetLimit;
    int32_t *offsets;
} UConverterToUnicodeArgs;
U_STABLE void U_EXPORT2 UCNV_FROM_U_CALLBACK_STOP (
                  const void *context,
                  UConverterFromUnicodeArgs *fromUArgs,
                  const UChar* codeUnits,
                  int32_t length,
                  UChar32 codePoint,
                  UConverterCallbackReason reason,
                  UErrorCode * err);
U_STABLE void U_EXPORT2 UCNV_TO_U_CALLBACK_STOP (
                  const void *context,
                  UConverterToUnicodeArgs *toUArgs,
                  const char* codeUnits,
                  int32_t length,
                  UConverterCallbackReason reason,
                  UErrorCode * err);
U_STABLE void U_EXPORT2 UCNV_FROM_U_CALLBACK_SKIP (
                  const void *context,
                  UConverterFromUnicodeArgs *fromUArgs,
                  const UChar* codeUnits,
                  int32_t length,
                  UChar32 codePoint,
                  UConverterCallbackReason reason,
                  UErrorCode * err);
U_STABLE void U_EXPORT2 UCNV_FROM_U_CALLBACK_SUBSTITUTE (
                  const void *context,
                  UConverterFromUnicodeArgs *fromUArgs,
                  const UChar* codeUnits,
                  int32_t length,
                  UChar32 codePoint,
                  UConverterCallbackReason reason,
                  UErrorCode * err);
U_STABLE void U_EXPORT2 UCNV_FROM_U_CALLBACK_ESCAPE (
                  const void *context,
                  UConverterFromUnicodeArgs *fromUArgs,
                  const UChar* codeUnits,
                  int32_t length,
                  UChar32 codePoint,
                  UConverterCallbackReason reason,
                  UErrorCode * err);
U_STABLE void U_EXPORT2 UCNV_TO_U_CALLBACK_SKIP (
                  const void *context,
                  UConverterToUnicodeArgs *toUArgs,
                  const char* codeUnits,
                  int32_t length,
                  UConverterCallbackReason reason,
                  UErrorCode * err);
U_STABLE void U_EXPORT2 UCNV_TO_U_CALLBACK_SUBSTITUTE (
                  const void *context,
                  UConverterToUnicodeArgs *toUArgs,
                  const char* codeUnits,
                  int32_t length,
                  UConverterCallbackReason reason,
                  UErrorCode * err);
U_STABLE void U_EXPORT2 UCNV_TO_U_CALLBACK_ESCAPE (
                  const void *context,
                  UConverterToUnicodeArgs *toUArgs,
                  const char* codeUnits,
                  int32_t length,
                  UConverterCallbackReason reason,
                  UErrorCode * err);
struct USet;
typedef struct USet USet;
U_CDECL_BEGIN
typedef enum {
    UCNV_UNSUPPORTED_CONVERTER = -1,
    UCNV_SBCS = 0,
    UCNV_DBCS = 1,
    UCNV_MBCS = 2,
    UCNV_LATIN_1 = 3,
    UCNV_UTF8 = 4,
    UCNV_UTF16_BigEndian = 5,
    UCNV_UTF16_LittleEndian = 6,
    UCNV_UTF32_BigEndian = 7,
    UCNV_UTF32_LittleEndian = 8,
    UCNV_EBCDIC_STATEFUL = 9,
    UCNV_ISO_2022 = 10,
    UCNV_LMBCS_1 = 11,
    UCNV_LMBCS_2,
    UCNV_LMBCS_3,
    UCNV_LMBCS_4,
    UCNV_LMBCS_5,
    UCNV_LMBCS_6,
    UCNV_LMBCS_8,
    UCNV_LMBCS_11,
    UCNV_LMBCS_16,
    UCNV_LMBCS_17,
    UCNV_LMBCS_18,
    UCNV_LMBCS_19,
    UCNV_LMBCS_LAST = UCNV_LMBCS_19,
    UCNV_HZ,
    UCNV_SCSU,
    UCNV_ISCII,
    UCNV_US_ASCII,
    UCNV_UTF7,
    UCNV_BOCU1,
    UCNV_UTF16,
    UCNV_UTF32,
    UCNV_CESU8,
    UCNV_IMAP_MAILBOX,
    UCNV_COMPOUND_TEXT,
    UCNV_NUMBER_OF_SUPPORTED_CONVERTER_TYPES
} UConverterType;
typedef enum {
    UCNV_UNKNOWN = -1,
    UCNV_IBM = 0
} UConverterPlatform;
typedef void (U_EXPORT2 *UConverterToUCallback) (
                  const void* context,
                  UConverterToUnicodeArgs *args,
                  const char *codeUnits,
                  int32_t length,
                  UConverterCallbackReason reason,
                  UErrorCode *pErrorCode);
typedef void (U_EXPORT2 *UConverterFromUCallback) (
                    const void* context,
                    UConverterFromUnicodeArgs *args,
                    const UChar* codeUnits,
                    int32_t length,
                    UChar32 codePoint,
                    UConverterCallbackReason reason,
                    UErrorCode *pErrorCode);
U_CDECL_END
U_STABLE int U_EXPORT2
ucnv_compareNames(const char *name1, const char *name2);
U_STABLE UConverter* U_EXPORT2
ucnv_open(const char *converterName, UErrorCode *err);
U_STABLE UConverter* U_EXPORT2
ucnv_openU(const UChar *name,
           UErrorCode *err);
U_STABLE UConverter* U_EXPORT2
ucnv_openCCSID(int32_t codepage,
               UConverterPlatform platform,
               UErrorCode * err);
U_STABLE UConverter* U_EXPORT2
ucnv_openPackage(const char *packageName, const char *converterName, UErrorCode *err);
U_STABLE UConverter * U_EXPORT2
ucnv_safeClone(const UConverter *cnv,
               void *stackBuffer,
               int32_t *pBufferSize,
               UErrorCode *status);
U_STABLE void U_EXPORT2
ucnv_close(UConverter * converter);
U_STABLE void U_EXPORT2
ucnv_getSubstChars(const UConverter *converter,
                   char *subChars,
                   int8_t *len,
                   UErrorCode *err);
U_STABLE void U_EXPORT2
ucnv_setSubstChars(UConverter *converter,
                   const char *subChars,
                   int8_t len,
                   UErrorCode *err);
U_STABLE void U_EXPORT2
ucnv_setSubstString(UConverter *cnv,
                    const UChar *s,
                    int32_t length,
                    UErrorCode *err);
U_STABLE void U_EXPORT2
ucnv_getInvalidChars(const UConverter *converter,
                     char *errBytes,
                     int8_t *len,
                     UErrorCode *err);
U_STABLE void U_EXPORT2
ucnv_getInvalidUChars(const UConverter *converter,
                      UChar *errUChars,
                      int8_t *len,
                      UErrorCode *err);
U_STABLE void U_EXPORT2
ucnv_reset(UConverter *converter);
U_STABLE void U_EXPORT2
ucnv_resetToUnicode(UConverter *converter);
U_STABLE void U_EXPORT2
ucnv_resetFromUnicode(UConverter *converter);
U_STABLE int8_t U_EXPORT2
ucnv_getMaxCharSize(const UConverter *converter);
     (((int32_t)(length)+10)*(int32_t)(maxCharSize))
U_STABLE int8_t U_EXPORT2
ucnv_getMinCharSize(const UConverter *converter);
U_STABLE int32_t U_EXPORT2
ucnv_getDisplayName(const UConverter *converter,
                    const char *displayLocale,
                    UChar *displayName,
                    int32_t displayNameCapacity,
                    UErrorCode *err);
U_STABLE const char * U_EXPORT2
ucnv_getName(const UConverter *converter, UErrorCode *err);
U_STABLE int32_t U_EXPORT2
ucnv_getCCSID(const UConverter *converter,
              UErrorCode *err);
U_STABLE UConverterPlatform U_EXPORT2
ucnv_getPlatform(const UConverter *converter,
                 UErrorCode *err);
U_STABLE UConverterType U_EXPORT2
ucnv_getType(const UConverter * converter);
U_STABLE void U_EXPORT2
ucnv_getStarters(const UConverter* converter,
                 UBool starters[256],
                 UErrorCode* err);
typedef enum UConverterUnicodeSet {
    UCNV_ROUNDTRIP_SET,
    UCNV_ROUNDTRIP_AND_FALLBACK_SET,
    UCNV_SET_COUNT
} UConverterUnicodeSet;
U_STABLE void U_EXPORT2
ucnv_getUnicodeSet(const UConverter *cnv,
                   USet *setFillIn,
                   UConverterUnicodeSet whichSet,
                   UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ucnv_getToUCallBack (const UConverter * converter,
                     UConverterToUCallback *action,
                     const void **context);
U_STABLE void U_EXPORT2
ucnv_getFromUCallBack (const UConverter * converter,
                       UConverterFromUCallback *action,
                       const void **context);
U_STABLE void U_EXPORT2
ucnv_setToUCallBack (UConverter * converter,
                     UConverterToUCallback newAction,
                     const void* newContext,
                     UConverterToUCallback *oldAction,
                     const void** oldContext,
                     UErrorCode * err);
U_STABLE void U_EXPORT2
ucnv_setFromUCallBack (UConverter * converter,
                       UConverterFromUCallback newAction,
                       const void *newContext,
                       UConverterFromUCallback *oldAction,
                       const void **oldContext,
                       UErrorCode * err);
U_STABLE void U_EXPORT2
ucnv_fromUnicode (UConverter * converter,
                  char **target,
                  const char *targetLimit,
                  const UChar ** source,
                  const UChar * sourceLimit,
                  int32_t* offsets,
                  UBool flush,
                  UErrorCode * err);
U_STABLE void U_EXPORT2
ucnv_toUnicode(UConverter *converter,
               UChar **target,
               const UChar *targetLimit,
               const char **source,
               const char *sourceLimit,
               int32_t *offsets,
               UBool flush,
               UErrorCode *err);
U_STABLE int32_t U_EXPORT2
ucnv_fromUChars(UConverter *cnv,
                char *dest, int32_t destCapacity,
                const UChar *src, int32_t srcLength,
                UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucnv_toUChars(UConverter *cnv,
              UChar *dest, int32_t destCapacity,
              const char *src, int32_t srcLength,
              UErrorCode *pErrorCode);
U_STABLE UChar32 U_EXPORT2
ucnv_getNextUChar(UConverter * converter,
                  const char **source,
                  const char * sourceLimit,
                  UErrorCode * err);
U_STABLE void U_EXPORT2
ucnv_convertEx(UConverter *targetCnv, UConverter *sourceCnv,
               char **target, const char *targetLimit,
               const char **source, const char *sourceLimit,
               UChar *pivotStart, UChar **pivotSource,
               UChar **pivotTarget, const UChar *pivotLimit,
               UBool reset, UBool flush,
               UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucnv_convert(const char *toConverterName,
             const char *fromConverterName,
             char *target,
             int32_t targetCapacity,
             const char *source,
             int32_t sourceLength,
             UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucnv_toAlgorithmic(UConverterType algorithmicType,
                   UConverter *cnv,
                   char *target, int32_t targetCapacity,
                   const char *source, int32_t sourceLength,
                   UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucnv_fromAlgorithmic(UConverter *cnv,
                     UConverterType algorithmicType,
                     char *target, int32_t targetCapacity,
                     const char *source, int32_t sourceLength,
                     UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucnv_flushCache(void);
U_STABLE int32_t U_EXPORT2
ucnv_countAvailable(void);
U_STABLE const char* U_EXPORT2
ucnv_getAvailableName(int32_t n);
U_STABLE UEnumeration * U_EXPORT2
ucnv_openAllNames(UErrorCode *pErrorCode);
U_STABLE uint16_t U_EXPORT2
ucnv_countAliases(const char *alias, UErrorCode *pErrorCode);
U_STABLE const char * U_EXPORT2
ucnv_getAlias(const char *alias, uint16_t n, UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ucnv_getAliases(const char *alias, const char **aliases, UErrorCode *pErrorCode);
U_STABLE UEnumeration * U_EXPORT2
ucnv_openStandardNames(const char *convName,
                       const char *standard,
                       UErrorCode *pErrorCode);
U_STABLE uint16_t U_EXPORT2
ucnv_countStandards(void);
U_STABLE const char * U_EXPORT2
ucnv_getStandard(uint16_t n, UErrorCode *pErrorCode);
U_STABLE const char * U_EXPORT2
ucnv_getStandardName(const char *name, const char *standard, UErrorCode *pErrorCode);
U_STABLE const char * U_EXPORT2
ucnv_getCanonicalName(const char *alias, const char *standard, UErrorCode *pErrorCode);
U_STABLE const char * U_EXPORT2
ucnv_getDefaultName(void);
U_STABLE void U_EXPORT2
ucnv_setDefaultName(const char *name);
U_STABLE void U_EXPORT2
ucnv_fixFileSeparator(const UConverter *cnv, UChar *source, int32_t sourceLen);
U_STABLE UBool U_EXPORT2
ucnv_isAmbiguous(const UConverter *cnv);
U_STABLE void U_EXPORT2
ucnv_setFallback(UConverter *cnv, UBool usesFallback);
U_STABLE UBool U_EXPORT2
ucnv_usesFallback(const UConverter *cnv);
U_STABLE const char* U_EXPORT2
ucnv_detectUnicodeSignature(const char* source,
                            int32_t sourceLength,
                            int32_t *signatureLength,
                            UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucnv_fromUCountPending(const UConverter* cnv, UErrorCode* status);
U_STABLE int32_t U_EXPORT2
ucnv_toUCountPending(const UConverter* cnv, UErrorCode* status);
U_STABLE UBool U_EXPORT2
ucnv_isFixedWidth(UConverter *cnv, UErrorCode *status);
U_STABLE void U_EXPORT2
ucnv_cbFromUWriteBytes (UConverterFromUnicodeArgs *args,
                        const char* source,
                        int32_t length,
                        int32_t offsetIndex,
                        UErrorCode * err);
U_STABLE void U_EXPORT2
ucnv_cbFromUWriteSub (UConverterFromUnicodeArgs *args,
                      int32_t offsetIndex,
                      UErrorCode * err);
U_STABLE void U_EXPORT2 ucnv_cbFromUWriteUChars(UConverterFromUnicodeArgs *args,
                             const UChar** source,
                             const UChar* sourceLimit,
                             int32_t offsetIndex,
                             UErrorCode * err);
U_STABLE void U_EXPORT2 ucnv_cbToUWriteUChars (UConverterToUnicodeArgs *args,
                                             const UChar* source,
                                             int32_t length,
                                             int32_t offsetIndex,
                                             UErrorCode * err);
U_STABLE void U_EXPORT2 ucnv_cbToUWriteSub (UConverterToUnicodeArgs *args,
                       int32_t offsetIndex,
                       UErrorCode * err);
U_STABLE void U_EXPORT2
u_init(UErrorCode *status);
U_STABLE void U_EXPORT2
u_cleanup(void);
typedef void *U_CALLCONV UMemAllocFn(const void *context, size_t size);
typedef void *U_CALLCONV UMemReallocFn(const void *context, void *mem, size_t size);
typedef void U_CALLCONV UMemFreeFn (const void *context, void *mem);
U_STABLE void U_EXPORT2
u_setMemoryFunctions(const void *context, UMemAllocFn *a, UMemReallocFn *r, UMemFreeFn *f,
                    UErrorCode *status);
U_CDECL_BEGIN
typedef enum UProperty {
    UCHAR_ALPHABETIC=0,
    UCHAR_BINARY_START=UCHAR_ALPHABETIC,
    UCHAR_ASCII_HEX_DIGIT=1,
    UCHAR_BIDI_CONTROL=2,
    UCHAR_BIDI_MIRRORED=3,
    UCHAR_DASH=4,
    UCHAR_DEFAULT_IGNORABLE_CODE_POINT=5,
    UCHAR_DEPRECATED=6,
    UCHAR_DIACRITIC=7,
    UCHAR_EXTENDER=8,
    UCHAR_FULL_COMPOSITION_EXCLUSION=9,
    UCHAR_GRAPHEME_BASE=10,
    UCHAR_GRAPHEME_EXTEND=11,
    UCHAR_GRAPHEME_LINK=12,
    UCHAR_HEX_DIGIT=13,
    UCHAR_HYPHEN=14,
    UCHAR_ID_CONTINUE=15,
    UCHAR_ID_START=16,
    UCHAR_IDEOGRAPHIC=17,
    UCHAR_IDS_BINARY_OPERATOR=18,
    UCHAR_IDS_TRINARY_OPERATOR=19,
    UCHAR_JOIN_CONTROL=20,
    UCHAR_LOGICAL_ORDER_EXCEPTION=21,
    UCHAR_LOWERCASE=22,
    UCHAR_MATH=23,
    UCHAR_NONCHARACTER_CODE_POINT=24,
    UCHAR_QUOTATION_MARK=25,
    UCHAR_RADICAL=26,
    UCHAR_SOFT_DOTTED=27,
    UCHAR_TERMINAL_PUNCTUATION=28,
    UCHAR_UNIFIED_IDEOGRAPH=29,
    UCHAR_UPPERCASE=30,
    UCHAR_WHITE_SPACE=31,
    UCHAR_XID_CONTINUE=32,
    UCHAR_XID_START=33,
   UCHAR_CASE_SENSITIVE=34,
    UCHAR_S_TERM=35,
    UCHAR_VARIATION_SELECTOR=36,
    UCHAR_NFD_INERT=37,
    UCHAR_NFKD_INERT=38,
    UCHAR_NFC_INERT=39,
    UCHAR_NFKC_INERT=40,
    UCHAR_SEGMENT_STARTER=41,
    UCHAR_PATTERN_SYNTAX=42,
    UCHAR_PATTERN_WHITE_SPACE=43,
    UCHAR_POSIX_ALNUM=44,
    UCHAR_POSIX_BLANK=45,
    UCHAR_POSIX_GRAPH=46,
    UCHAR_POSIX_PRINT=47,
    UCHAR_POSIX_XDIGIT=48,
    UCHAR_CASED=49,
    UCHAR_CASE_IGNORABLE=50,
    UCHAR_CHANGES_WHEN_LOWERCASED=51,
    UCHAR_CHANGES_WHEN_UPPERCASED=52,
    UCHAR_CHANGES_WHEN_TITLECASED=53,
    UCHAR_CHANGES_WHEN_CASEFOLDED=54,
    UCHAR_CHANGES_WHEN_CASEMAPPED=55,
    UCHAR_CHANGES_WHEN_NFKC_CASEFOLDED=56,
    UCHAR_BINARY_LIMIT=61,
    UCHAR_BIDI_CLASS=0x1000,
    UCHAR_INT_START=UCHAR_BIDI_CLASS,
    UCHAR_BLOCK=0x1001,
    UCHAR_CANONICAL_COMBINING_CLASS=0x1002,
    UCHAR_DECOMPOSITION_TYPE=0x1003,
    UCHAR_EAST_ASIAN_WIDTH=0x1004,
    UCHAR_GENERAL_CATEGORY=0x1005,
    UCHAR_JOINING_GROUP=0x1006,
    UCHAR_JOINING_TYPE=0x1007,
    UCHAR_LINE_BREAK=0x1008,
    UCHAR_NUMERIC_TYPE=0x1009,
    UCHAR_SCRIPT=0x100A,
    UCHAR_HANGUL_SYLLABLE_TYPE=0x100B,
    UCHAR_NFD_QUICK_CHECK=0x100C,
    UCHAR_NFKD_QUICK_CHECK=0x100D,
    UCHAR_NFC_QUICK_CHECK=0x100E,
    UCHAR_NFKC_QUICK_CHECK=0x100F,
    UCHAR_LEAD_CANONICAL_COMBINING_CLASS=0x1010,
    UCHAR_TRAIL_CANONICAL_COMBINING_CLASS=0x1011,
    UCHAR_GRAPHEME_CLUSTER_BREAK=0x1012,
    UCHAR_SENTENCE_BREAK=0x1013,
    UCHAR_WORD_BREAK=0x1014,
    UCHAR_BIDI_PAIRED_BRACKET_TYPE=0x1015,
    UCHAR_INT_LIMIT=0x1016,
    UCHAR_GENERAL_CATEGORY_MASK=0x2000,
    UCHAR_MASK_START=UCHAR_GENERAL_CATEGORY_MASK,
    UCHAR_MASK_LIMIT=0x2001,
    UCHAR_NUMERIC_VALUE=0x3000,
    UCHAR_DOUBLE_START=UCHAR_NUMERIC_VALUE,
    UCHAR_DOUBLE_LIMIT=0x3001,
    UCHAR_AGE=0x4000,
    UCHAR_STRING_START=UCHAR_AGE,
    UCHAR_BIDI_MIRRORING_GLYPH=0x4001,
    UCHAR_CASE_FOLDING=0x4002,
    UCHAR_LOWERCASE_MAPPING=0x4004,
    UCHAR_NAME=0x4005,
    UCHAR_SIMPLE_CASE_FOLDING=0x4006,
    UCHAR_SIMPLE_LOWERCASE_MAPPING=0x4007,
    UCHAR_SIMPLE_TITLECASE_MAPPING=0x4008,
    UCHAR_SIMPLE_UPPERCASE_MAPPING=0x4009,
    UCHAR_TITLECASE_MAPPING=0x400A,
    UCHAR_UPPERCASE_MAPPING=0x400C,
    UCHAR_BIDI_PAIRED_BRACKET=0x400D,
    UCHAR_STRING_LIMIT=0x400E,
    UCHAR_SCRIPT_EXTENSIONS=0x7000,
    UCHAR_OTHER_PROPERTY_START=UCHAR_SCRIPT_EXTENSIONS,
    UCHAR_OTHER_PROPERTY_LIMIT=0x7001,
    UCHAR_INVALID_CODE = -1
} UProperty;
typedef enum UCharCategory
{
    U_UNASSIGNED = 0,
    U_GENERAL_OTHER_TYPES = 0,
    U_UPPERCASE_LETTER = 1,
    U_LOWERCASE_LETTER = 2,
    U_TITLECASE_LETTER = 3,
    U_MODIFIER_LETTER = 4,
    U_OTHER_LETTER = 5,
    U_NON_SPACING_MARK = 6,
    U_ENCLOSING_MARK = 7,
    U_COMBINING_SPACING_MARK = 8,
    U_DECIMAL_DIGIT_NUMBER = 9,
    U_LETTER_NUMBER = 10,
    U_OTHER_NUMBER = 11,
    U_SPACE_SEPARATOR = 12,
    U_LINE_SEPARATOR = 13,
    U_PARAGRAPH_SEPARATOR = 14,
    U_CONTROL_CHAR = 15,
    U_FORMAT_CHAR = 16,
    U_PRIVATE_USE_CHAR = 17,
    U_SURROGATE = 18,
    U_DASH_PUNCTUATION = 19,
    U_START_PUNCTUATION = 20,
    U_END_PUNCTUATION = 21,
    U_CONNECTOR_PUNCTUATION = 22,
    U_OTHER_PUNCTUATION = 23,
    U_MATH_SYMBOL = 24,
    U_CURRENCY_SYMBOL = 25,
    U_MODIFIER_SYMBOL = 26,
    U_OTHER_SYMBOL = 27,
    U_INITIAL_PUNCTUATION = 28,
    U_FINAL_PUNCTUATION = 29,
    U_CHAR_CATEGORY_COUNT
} UCharCategory;
            (U_GC_LU_MASK|U_GC_LL_MASK|U_GC_LT_MASK|U_GC_LM_MASK|U_GC_LO_MASK)
            (U_GC_LU_MASK|U_GC_LL_MASK|U_GC_LT_MASK)
            (U_GC_CN_MASK|U_GC_CC_MASK|U_GC_CF_MASK|U_GC_CO_MASK|U_GC_CS_MASK)
            (U_GC_PD_MASK|U_GC_PS_MASK|U_GC_PE_MASK|U_GC_PC_MASK|U_GC_PO_MASK| \
             U_GC_PI_MASK|U_GC_PF_MASK)
typedef enum UCharDirection {
    U_LEFT_TO_RIGHT = 0,
    U_RIGHT_TO_LEFT = 1,
    U_EUROPEAN_NUMBER = 2,
    U_EUROPEAN_NUMBER_SEPARATOR = 3,
    U_EUROPEAN_NUMBER_TERMINATOR = 4,
    U_ARABIC_NUMBER = 5,
    U_COMMON_NUMBER_SEPARATOR = 6,
    U_BLOCK_SEPARATOR = 7,
    U_SEGMENT_SEPARATOR = 8,
    U_WHITE_SPACE_NEUTRAL = 9,
    U_OTHER_NEUTRAL = 10,
    U_LEFT_TO_RIGHT_EMBEDDING = 11,
    U_LEFT_TO_RIGHT_OVERRIDE = 12,
    U_RIGHT_TO_LEFT_ARABIC = 13,
    U_RIGHT_TO_LEFT_EMBEDDING = 14,
    U_RIGHT_TO_LEFT_OVERRIDE = 15,
    U_POP_DIRECTIONAL_FORMAT = 16,
    U_DIR_NON_SPACING_MARK = 17,
    U_BOUNDARY_NEUTRAL = 18,
    U_FIRST_STRONG_ISOLATE = 19,
    U_LEFT_TO_RIGHT_ISOLATE = 20,
    U_RIGHT_TO_LEFT_ISOLATE = 21,
    U_POP_DIRECTIONAL_ISOLATE = 22,
    U_CHAR_DIRECTION_COUNT
} UCharDirection;
typedef enum UBidiPairedBracketType {
    U_BPT_NONE,
    U_BPT_OPEN,
    U_BPT_CLOSE,
    U_BPT_COUNT
} UBidiPairedBracketType;
enum UBlockCode {
    UBLOCK_NO_BLOCK = 0,
    UBLOCK_BASIC_LATIN = 1,
    UBLOCK_LATIN_1_SUPPLEMENT=2,
    UBLOCK_LATIN_EXTENDED_A =3,
    UBLOCK_LATIN_EXTENDED_B =4,
    UBLOCK_IPA_EXTENSIONS =5,
    UBLOCK_SPACING_MODIFIER_LETTERS =6,
    UBLOCK_COMBINING_DIACRITICAL_MARKS =7,
    UBLOCK_GREEK =8,
    UBLOCK_CYRILLIC =9,
    UBLOCK_ARMENIAN =10,
    UBLOCK_HEBREW =11,
    UBLOCK_ARABIC =12,
    UBLOCK_SYRIAC =13,
    UBLOCK_THAANA =14,
    UBLOCK_DEVANAGARI =15,
    UBLOCK_BENGALI =16,
    UBLOCK_GURMUKHI =17,
    UBLOCK_GUJARATI =18,
    UBLOCK_ORIYA =19,
    UBLOCK_TAMIL =20,
    UBLOCK_TELUGU =21,
    UBLOCK_KANNADA =22,
    UBLOCK_MALAYALAM =23,
    UBLOCK_SINHALA =24,
    UBLOCK_THAI =25,
    UBLOCK_LAO =26,
    UBLOCK_TIBETAN =27,
    UBLOCK_MYANMAR =28,
    UBLOCK_GEORGIAN =29,
    UBLOCK_HANGUL_JAMO =30,
    UBLOCK_ETHIOPIC =31,
    UBLOCK_CHEROKEE =32,
    UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS =33,
    UBLOCK_OGHAM =34,
    UBLOCK_RUNIC =35,
    UBLOCK_KHMER =36,
    UBLOCK_MONGOLIAN =37,
    UBLOCK_LATIN_EXTENDED_ADDITIONAL =38,
    UBLOCK_GREEK_EXTENDED =39,
    UBLOCK_GENERAL_PUNCTUATION =40,
    UBLOCK_SUPERSCRIPTS_AND_SUBSCRIPTS =41,
    UBLOCK_CURRENCY_SYMBOLS =42,
    UBLOCK_COMBINING_MARKS_FOR_SYMBOLS =43,
    UBLOCK_LETTERLIKE_SYMBOLS =44,
    UBLOCK_NUMBER_FORMS =45,
    UBLOCK_ARROWS =46,
    UBLOCK_MATHEMATICAL_OPERATORS =47,
    UBLOCK_MISCELLANEOUS_TECHNICAL =48,
    UBLOCK_CONTROL_PICTURES =49,
    UBLOCK_OPTICAL_CHARACTER_RECOGNITION =50,
    UBLOCK_ENCLOSED_ALPHANUMERICS =51,
    UBLOCK_BOX_DRAWING =52,
    UBLOCK_BLOCK_ELEMENTS =53,
    UBLOCK_GEOMETRIC_SHAPES =54,
    UBLOCK_MISCELLANEOUS_SYMBOLS =55,
    UBLOCK_DINGBATS =56,
    UBLOCK_BRAILLE_PATTERNS =57,
    UBLOCK_CJK_RADICALS_SUPPLEMENT =58,
    UBLOCK_KANGXI_RADICALS =59,
    UBLOCK_IDEOGRAPHIC_DESCRIPTION_CHARACTERS =60,
    UBLOCK_CJK_SYMBOLS_AND_PUNCTUATION =61,
    UBLOCK_HIRAGANA =62,
    UBLOCK_KATAKANA =63,
    UBLOCK_BOPOMOFO =64,
    UBLOCK_HANGUL_COMPATIBILITY_JAMO =65,
    UBLOCK_KANBUN =66,
    UBLOCK_BOPOMOFO_EXTENDED =67,
    UBLOCK_ENCLOSED_CJK_LETTERS_AND_MONTHS =68,
    UBLOCK_CJK_COMPATIBILITY =69,
    UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A =70,
    UBLOCK_CJK_UNIFIED_IDEOGRAPHS =71,
    UBLOCK_YI_SYLLABLES =72,
    UBLOCK_YI_RADICALS =73,
    UBLOCK_HANGUL_SYLLABLES =74,
    UBLOCK_HIGH_SURROGATES =75,
    UBLOCK_HIGH_PRIVATE_USE_SURROGATES =76,
    UBLOCK_LOW_SURROGATES =77,
    UBLOCK_PRIVATE_USE_AREA =78,
    UBLOCK_PRIVATE_USE = UBLOCK_PRIVATE_USE_AREA,
    UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS =79,
    UBLOCK_ALPHABETIC_PRESENTATION_FORMS =80,
    UBLOCK_ARABIC_PRESENTATION_FORMS_A =81,
    UBLOCK_COMBINING_HALF_MARKS =82,
    UBLOCK_CJK_COMPATIBILITY_FORMS =83,
    UBLOCK_SMALL_FORM_VARIANTS =84,
    UBLOCK_ARABIC_PRESENTATION_FORMS_B =85,
    UBLOCK_SPECIALS =86,
    UBLOCK_HALFWIDTH_AND_FULLWIDTH_FORMS =87,
    UBLOCK_OLD_ITALIC = 88,
    UBLOCK_GOTHIC = 89,
    UBLOCK_DESERET = 90,
    UBLOCK_BYZANTINE_MUSICAL_SYMBOLS = 91,
    UBLOCK_MUSICAL_SYMBOLS = 92,
    UBLOCK_MATHEMATICAL_ALPHANUMERIC_SYMBOLS = 93,
    UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B = 94,
    UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT = 95,
    UBLOCK_TAGS = 96,
    UBLOCK_CYRILLIC_SUPPLEMENT = 97,
    UBLOCK_CYRILLIC_SUPPLEMENTARY = UBLOCK_CYRILLIC_SUPPLEMENT,
    UBLOCK_TAGALOG = 98,
    UBLOCK_HANUNOO = 99,
    UBLOCK_BUHID = 100,
    UBLOCK_TAGBANWA = 101,
    UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A = 102,
    UBLOCK_SUPPLEMENTAL_ARROWS_A = 103,
    UBLOCK_SUPPLEMENTAL_ARROWS_B = 104,
    UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B = 105,
    UBLOCK_SUPPLEMENTAL_MATHEMATICAL_OPERATORS = 106,
    UBLOCK_KATAKANA_PHONETIC_EXTENSIONS = 107,
    UBLOCK_VARIATION_SELECTORS = 108,
    UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_A = 109,
    UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_B = 110,
    UBLOCK_LIMBU = 111,
    UBLOCK_TAI_LE = 112,
    UBLOCK_KHMER_SYMBOLS = 113,
    UBLOCK_PHONETIC_EXTENSIONS = 114,
    UBLOCK_MISCELLANEOUS_SYMBOLS_AND_ARROWS = 115,
    UBLOCK_YIJING_HEXAGRAM_SYMBOLS = 116,
    UBLOCK_LINEAR_B_SYLLABARY = 117,
    UBLOCK_LINEAR_B_IDEOGRAMS = 118,
    UBLOCK_AEGEAN_NUMBERS = 119,
    UBLOCK_UGARITIC = 120,
    UBLOCK_SHAVIAN = 121,
    UBLOCK_OSMANYA = 122,
    UBLOCK_CYPRIOT_SYLLABARY = 123,
    UBLOCK_TAI_XUAN_JING_SYMBOLS = 124,
    UBLOCK_VARIATION_SELECTORS_SUPPLEMENT = 125,
    UBLOCK_ANCIENT_GREEK_MUSICAL_NOTATION = 126,
    UBLOCK_ANCIENT_GREEK_NUMBERS = 127,
    UBLOCK_ARABIC_SUPPLEMENT = 128,
    UBLOCK_BUGINESE = 129,
    UBLOCK_CJK_STROKES = 130,
    UBLOCK_COMBINING_DIACRITICAL_MARKS_SUPPLEMENT = 131,
    UBLOCK_COPTIC = 132,
    UBLOCK_ETHIOPIC_EXTENDED = 133,
    UBLOCK_ETHIOPIC_SUPPLEMENT = 134,
    UBLOCK_GEORGIAN_SUPPLEMENT = 135,
    UBLOCK_GLAGOLITIC = 136,
    UBLOCK_KHAROSHTHI = 137,
    UBLOCK_MODIFIER_TONE_LETTERS = 138,
    UBLOCK_NEW_TAI_LUE = 139,
    UBLOCK_OLD_PERSIAN = 140,
    UBLOCK_PHONETIC_EXTENSIONS_SUPPLEMENT = 141,
    UBLOCK_SUPPLEMENTAL_PUNCTUATION = 142,
    UBLOCK_SYLOTI_NAGRI = 143,
    UBLOCK_TIFINAGH = 144,
    UBLOCK_VERTICAL_FORMS = 145,
    UBLOCK_NKO = 146,
    UBLOCK_BALINESE = 147,
    UBLOCK_LATIN_EXTENDED_C = 148,
    UBLOCK_LATIN_EXTENDED_D = 149,
    UBLOCK_PHAGS_PA = 150,
    UBLOCK_PHOENICIAN = 151,
    UBLOCK_CUNEIFORM = 152,
    UBLOCK_CUNEIFORM_NUMBERS_AND_PUNCTUATION = 153,
    UBLOCK_COUNTING_ROD_NUMERALS = 154,
    UBLOCK_SUNDANESE = 155,
    UBLOCK_LEPCHA = 156,
    UBLOCK_OL_CHIKI = 157,
    UBLOCK_CYRILLIC_EXTENDED_A = 158,
    UBLOCK_VAI = 159,
    UBLOCK_CYRILLIC_EXTENDED_B = 160,
    UBLOCK_SAURASHTRA = 161,
    UBLOCK_KAYAH_LI = 162,
    UBLOCK_REJANG = 163,
    UBLOCK_CHAM = 164,
    UBLOCK_ANCIENT_SYMBOLS = 165,
    UBLOCK_PHAISTOS_DISC = 166,
    UBLOCK_LYCIAN = 167,
    UBLOCK_CARIAN = 168,
    UBLOCK_LYDIAN = 169,
    UBLOCK_MAHJONG_TILES = 170,
    UBLOCK_DOMINO_TILES = 171,
    UBLOCK_SAMARITAN = 172,
    UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED = 173,
    UBLOCK_TAI_THAM = 174,
    UBLOCK_VEDIC_EXTENSIONS = 175,
    UBLOCK_LISU = 176,
    UBLOCK_BAMUM = 177,
    UBLOCK_COMMON_INDIC_NUMBER_FORMS = 178,
    UBLOCK_DEVANAGARI_EXTENDED = 179,
    UBLOCK_HANGUL_JAMO_EXTENDED_A = 180,
    UBLOCK_JAVANESE = 181,
    UBLOCK_MYANMAR_EXTENDED_A = 182,
    UBLOCK_TAI_VIET = 183,
    UBLOCK_MEETEI_MAYEK = 184,
    UBLOCK_HANGUL_JAMO_EXTENDED_B = 185,
    UBLOCK_IMPERIAL_ARAMAIC = 186,
    UBLOCK_OLD_SOUTH_ARABIAN = 187,
    UBLOCK_AVESTAN = 188,
    UBLOCK_INSCRIPTIONAL_PARTHIAN = 189,
    UBLOCK_INSCRIPTIONAL_PAHLAVI = 190,
    UBLOCK_OLD_TURKIC = 191,
    UBLOCK_RUMI_NUMERAL_SYMBOLS = 192,
    UBLOCK_KAITHI = 193,
    UBLOCK_EGYPTIAN_HIEROGLYPHS = 194,
    UBLOCK_ENCLOSED_ALPHANUMERIC_SUPPLEMENT = 195,
    UBLOCK_ENCLOSED_IDEOGRAPHIC_SUPPLEMENT = 196,
    UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C = 197,
    UBLOCK_MANDAIC = 198,
    UBLOCK_BATAK = 199,
    UBLOCK_ETHIOPIC_EXTENDED_A = 200,
    UBLOCK_BRAHMI = 201,
    UBLOCK_BAMUM_SUPPLEMENT = 202,
    UBLOCK_KANA_SUPPLEMENT = 203,
    UBLOCK_PLAYING_CARDS = 204,
    UBLOCK_MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS = 205,
    UBLOCK_EMOTICONS = 206,
    UBLOCK_TRANSPORT_AND_MAP_SYMBOLS = 207,
    UBLOCK_ALCHEMICAL_SYMBOLS = 208,
    UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D = 209,
    UBLOCK_ARABIC_EXTENDED_A = 210,
    UBLOCK_ARABIC_MATHEMATICAL_ALPHABETIC_SYMBOLS = 211,
    UBLOCK_CHAKMA = 212,
    UBLOCK_MEETEI_MAYEK_EXTENSIONS = 213,
    UBLOCK_MEROITIC_CURSIVE = 214,
    UBLOCK_MEROITIC_HIEROGLYPHS = 215,
    UBLOCK_MIAO = 216,
    UBLOCK_SHARADA = 217,
    UBLOCK_SORA_SOMPENG = 218,
    UBLOCK_SUNDANESE_SUPPLEMENT = 219,
    UBLOCK_TAKRI = 220,
    UBLOCK_BASSA_VAH = 221,
    UBLOCK_CAUCASIAN_ALBANIAN = 222,
    UBLOCK_COPTIC_EPACT_NUMBERS = 223,
    UBLOCK_COMBINING_DIACRITICAL_MARKS_EXTENDED = 224,
    UBLOCK_DUPLOYAN = 225,
    UBLOCK_ELBASAN = 226,
    UBLOCK_GEOMETRIC_SHAPES_EXTENDED = 227,
    UBLOCK_GRANTHA = 228,
    UBLOCK_KHOJKI = 229,
    UBLOCK_KHUDAWADI = 230,
    UBLOCK_LATIN_EXTENDED_E = 231,
    UBLOCK_LINEAR_A = 232,
    UBLOCK_MAHAJANI = 233,
    UBLOCK_MANICHAEAN = 234,
    UBLOCK_MENDE_KIKAKUI = 235,
    UBLOCK_MODI = 236,
    UBLOCK_MRO = 237,
    UBLOCK_MYANMAR_EXTENDED_B = 238,
    UBLOCK_NABATAEAN = 239,
    UBLOCK_OLD_NORTH_ARABIAN = 240,
    UBLOCK_OLD_PERMIC = 241,
    UBLOCK_ORNAMENTAL_DINGBATS = 242,
    UBLOCK_PAHAWH_HMONG = 243,
    UBLOCK_PALMYRENE = 244,
    UBLOCK_PAU_CIN_HAU = 245,
    UBLOCK_PSALTER_PAHLAVI = 246,
    UBLOCK_SHORTHAND_FORMAT_CONTROLS = 247,
    UBLOCK_SIDDHAM = 248,
    UBLOCK_SINHALA_ARCHAIC_NUMBERS = 249,
    UBLOCK_SUPPLEMENTAL_ARROWS_C = 250,
    UBLOCK_TIRHUTA = 251,
    UBLOCK_WARANG_CITI = 252,
    UBLOCK_AHOM = 253,
    UBLOCK_ANATOLIAN_HIEROGLYPHS = 254,
    UBLOCK_CHEROKEE_SUPPLEMENT = 255,
    UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_E = 256,
    UBLOCK_EARLY_DYNASTIC_CUNEIFORM = 257,
    UBLOCK_HATRAN = 258,
    UBLOCK_MULTANI = 259,
    UBLOCK_OLD_HUNGARIAN = 260,
    UBLOCK_SUPPLEMENTAL_SYMBOLS_AND_PICTOGRAPHS = 261,
    UBLOCK_SUTTON_SIGNWRITING = 262,
    UBLOCK_COUNT = 263,
    UBLOCK_INVALID_CODE=-1
};
typedef enum UBlockCode UBlockCode;
typedef enum UEastAsianWidth {
    U_EA_NEUTRAL,
    U_EA_AMBIGUOUS,
    U_EA_HALFWIDTH,
    U_EA_FULLWIDTH,
    U_EA_NARROW,
    U_EA_WIDE,
    U_EA_COUNT
} UEastAsianWidth;
typedef enum UCharNameChoice {
    U_UNICODE_CHAR_NAME,
    U_EXTENDED_CHAR_NAME = U_UNICODE_CHAR_NAME+2,
    U_CHAR_NAME_ALIAS,
    U_CHAR_NAME_CHOICE_COUNT
} UCharNameChoice;
typedef enum UPropertyNameChoice {
    U_SHORT_PROPERTY_NAME,
    U_LONG_PROPERTY_NAME,
    U_PROPERTY_NAME_CHOICE_COUNT
} UPropertyNameChoice;
typedef enum UDecompositionType {
    U_DT_NONE,
    U_DT_CANONICAL,
    U_DT_COMPAT,
    U_DT_CIRCLE,
    U_DT_FINAL,
    U_DT_FONT,
    U_DT_FRACTION,
    U_DT_INITIAL,
    U_DT_ISOLATED,
    U_DT_MEDIAL,
    U_DT_NARROW,
    U_DT_NOBREAK,
    U_DT_SMALL,
    U_DT_SQUARE,
    U_DT_SUB,
    U_DT_SUPER,
    U_DT_VERTICAL,
    U_DT_WIDE,
    U_DT_COUNT
} UDecompositionType;
typedef enum UJoiningType {
    U_JT_NON_JOINING,
    U_JT_JOIN_CAUSING,
    U_JT_DUAL_JOINING,
    U_JT_LEFT_JOINING,
    U_JT_RIGHT_JOINING,
    U_JT_TRANSPARENT,
    U_JT_COUNT
} UJoiningType;
typedef enum UJoiningGroup {
    U_JG_NO_JOINING_GROUP,
    U_JG_AIN,
    U_JG_ALAPH,
    U_JG_ALEF,
    U_JG_BEH,
    U_JG_BETH,
    U_JG_DAL,
    U_JG_DALATH_RISH,
    U_JG_E,
    U_JG_FEH,
    U_JG_FINAL_SEMKATH,
    U_JG_GAF,
    U_JG_GAMAL,
    U_JG_HAH,
    U_JG_TEH_MARBUTA_GOAL,
    U_JG_HAMZA_ON_HEH_GOAL=U_JG_TEH_MARBUTA_GOAL,
    U_JG_HE,
    U_JG_HEH,
    U_JG_HEH_GOAL,
    U_JG_HETH,
    U_JG_KAF,
    U_JG_KAPH,
    U_JG_KNOTTED_HEH,
    U_JG_LAM,
    U_JG_LAMADH,
    U_JG_MEEM,
    U_JG_MIM,
    U_JG_NOON,
    U_JG_NUN,
    U_JG_PE,
    U_JG_QAF,
    U_JG_QAPH,
    U_JG_REH,
    U_JG_REVERSED_PE,
    U_JG_SAD,
    U_JG_SADHE,
    U_JG_SEEN,
    U_JG_SEMKATH,
    U_JG_SHIN,
    U_JG_SWASH_KAF,
    U_JG_SYRIAC_WAW,
    U_JG_TAH,
    U_JG_TAW,
    U_JG_TEH_MARBUTA,
    U_JG_TETH,
    U_JG_WAW,
    U_JG_YEH,
    U_JG_YEH_BARREE,
    U_JG_YEH_WITH_TAIL,
    U_JG_YUDH,
    U_JG_YUDH_HE,
    U_JG_ZAIN,
    U_JG_FE,
    U_JG_KHAPH,
    U_JG_ZHAIN,
    U_JG_BURUSHASKI_YEH_BARREE,
    U_JG_FARSI_YEH,
    U_JG_NYA,
    U_JG_ROHINGYA_YEH,
    U_JG_MANICHAEAN_ALEPH,
    U_JG_MANICHAEAN_AYIN,
    U_JG_MANICHAEAN_BETH,
    U_JG_MANICHAEAN_DALETH,
    U_JG_MANICHAEAN_DHAMEDH,
    U_JG_MANICHAEAN_FIVE,
    U_JG_MANICHAEAN_GIMEL,
    U_JG_MANICHAEAN_HETH,
    U_JG_MANICHAEAN_HUNDRED,
    U_JG_MANICHAEAN_KAPH,
    U_JG_MANICHAEAN_LAMEDH,
    U_JG_MANICHAEAN_MEM,
    U_JG_MANICHAEAN_NUN,
    U_JG_MANICHAEAN_ONE,
    U_JG_MANICHAEAN_PE,
    U_JG_MANICHAEAN_QOPH,
    U_JG_MANICHAEAN_RESH,
    U_JG_MANICHAEAN_SADHE,
    U_JG_MANICHAEAN_SAMEKH,
    U_JG_MANICHAEAN_TAW,
    U_JG_MANICHAEAN_TEN,
    U_JG_MANICHAEAN_TETH,
    U_JG_MANICHAEAN_THAMEDH,
    U_JG_MANICHAEAN_TWENTY,
    U_JG_MANICHAEAN_WAW,
    U_JG_MANICHAEAN_YODH,
    U_JG_MANICHAEAN_ZAYIN,
    U_JG_STRAIGHT_WAW,
    U_JG_COUNT
} UJoiningGroup;
typedef enum UGraphemeClusterBreak {
    U_GCB_OTHER = 0,
    U_GCB_CONTROL = 1,
    U_GCB_CR = 2,
    U_GCB_EXTEND = 3,
    U_GCB_L = 4,
    U_GCB_LF = 5,
    U_GCB_LV = 6,
    U_GCB_LVT = 7,
    U_GCB_T = 8,
    U_GCB_V = 9,
    U_GCB_SPACING_MARK = 10,
    U_GCB_PREPEND = 11,
    U_GCB_REGIONAL_INDICATOR = 12,
    U_GCB_COUNT = 13
} UGraphemeClusterBreak;
typedef enum UWordBreakValues {
    U_WB_OTHER = 0,
    U_WB_ALETTER = 1,
    U_WB_FORMAT = 2,
    U_WB_KATAKANA = 3,
    U_WB_MIDLETTER = 4,
    U_WB_MIDNUM = 5,
    U_WB_NUMERIC = 6,
    U_WB_EXTENDNUMLET = 7,
    U_WB_CR = 8,
    U_WB_EXTEND = 9,
    U_WB_LF = 10,
    U_WB_MIDNUMLET =11,
    U_WB_NEWLINE =12,
    U_WB_REGIONAL_INDICATOR = 13,
    U_WB_HEBREW_LETTER = 14,
    U_WB_SINGLE_QUOTE = 15,
    U_WB_DOUBLE_QUOTE = 16,
    U_WB_COUNT = 17
} UWordBreakValues;
typedef enum USentenceBreak {
    U_SB_OTHER = 0,
    U_SB_ATERM = 1,
    U_SB_CLOSE = 2,
    U_SB_FORMAT = 3,
    U_SB_LOWER = 4,
    U_SB_NUMERIC = 5,
    U_SB_OLETTER = 6,
    U_SB_SEP = 7,
    U_SB_SP = 8,
    U_SB_STERM = 9,
    U_SB_UPPER = 10,
    U_SB_CR = 11,
    U_SB_EXTEND = 12,
    U_SB_LF = 13,
    U_SB_SCONTINUE = 14,
    U_SB_COUNT = 15
} USentenceBreak;
typedef enum ULineBreak {
    U_LB_UNKNOWN = 0,
    U_LB_AMBIGUOUS = 1,
    U_LB_ALPHABETIC = 2,
    U_LB_BREAK_BOTH = 3,
    U_LB_BREAK_AFTER = 4,
    U_LB_BREAK_BEFORE = 5,
    U_LB_MANDATORY_BREAK = 6,
    U_LB_CONTINGENT_BREAK = 7,
    U_LB_CLOSE_PUNCTUATION = 8,
    U_LB_COMBINING_MARK = 9,
    U_LB_CARRIAGE_RETURN = 10,
    U_LB_EXCLAMATION = 11,
    U_LB_GLUE = 12,
    U_LB_HYPHEN = 13,
    U_LB_IDEOGRAPHIC = 14,
    U_LB_INSEPARABLE = 15,
    U_LB_INSEPERABLE = U_LB_INSEPARABLE,
    U_LB_INFIX_NUMERIC = 16,
    U_LB_LINE_FEED = 17,
    U_LB_NONSTARTER = 18,
    U_LB_NUMERIC = 19,
    U_LB_OPEN_PUNCTUATION = 20,
    U_LB_POSTFIX_NUMERIC = 21,
    U_LB_PREFIX_NUMERIC = 22,
    U_LB_QUOTATION = 23,
    U_LB_COMPLEX_CONTEXT = 24,
    U_LB_SURROGATE = 25,
    U_LB_SPACE = 26,
    U_LB_BREAK_SYMBOLS = 27,
    U_LB_ZWSPACE = 28,
    U_LB_NEXT_LINE = 29,
    U_LB_WORD_JOINER = 30,
    U_LB_H2 = 31,
    U_LB_H3 = 32,
    U_LB_JL = 33,
    U_LB_JT = 34,
    U_LB_JV = 35,
    U_LB_CLOSE_PARENTHESIS = 36,
    U_LB_CONDITIONAL_JAPANESE_STARTER = 37,
    U_LB_HEBREW_LETTER = 38,
    U_LB_REGIONAL_INDICATOR = 39,
    U_LB_COUNT = 40
} ULineBreak;
typedef enum UNumericType {
    U_NT_NONE,
    U_NT_DECIMAL,
    U_NT_DIGIT,
    U_NT_NUMERIC,
    U_NT_COUNT
} UNumericType;
typedef enum UHangulSyllableType {
    U_HST_NOT_APPLICABLE,
    U_HST_LEADING_JAMO,
    U_HST_VOWEL_JAMO,
    U_HST_TRAILING_JAMO,
    U_HST_LV_SYLLABLE,
    U_HST_LVT_SYLLABLE,
    U_HST_COUNT
} UHangulSyllableType;
U_STABLE UBool U_EXPORT2
u_hasBinaryProperty(UChar32 c, UProperty which);
U_STABLE UBool U_EXPORT2
u_isUAlphabetic(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isULowercase(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isUUppercase(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isUWhiteSpace(UChar32 c);
U_STABLE int32_t U_EXPORT2
u_getIntPropertyValue(UChar32 c, UProperty which);
U_STABLE int32_t U_EXPORT2
u_getIntPropertyMinValue(UProperty which);
U_STABLE int32_t U_EXPORT2
u_getIntPropertyMaxValue(UProperty which);
U_STABLE double U_EXPORT2
u_getNumericValue(UChar32 c);
U_STABLE UBool U_EXPORT2
u_islower(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isupper(UChar32 c);
U_STABLE UBool U_EXPORT2
u_istitle(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isdigit(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isalpha(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isalnum(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isxdigit(UChar32 c);
U_STABLE UBool U_EXPORT2
u_ispunct(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isgraph(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isblank(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isdefined(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isspace(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isJavaSpaceChar(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isWhitespace(UChar32 c);
U_STABLE UBool U_EXPORT2
u_iscntrl(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isISOControl(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isprint(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isbase(UChar32 c);
U_STABLE UCharDirection U_EXPORT2
u_charDirection(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isMirrored(UChar32 c);
U_STABLE UChar32 U_EXPORT2
u_charMirror(UChar32 c);
U_STABLE UChar32 U_EXPORT2
u_getBidiPairedBracket(UChar32 c);
U_STABLE int8_t U_EXPORT2
u_charType(UChar32 c);
typedef UBool U_CALLCONV
UCharEnumTypeRange(const void *context, UChar32 start, UChar32 limit, UCharCategory type);
U_STABLE void U_EXPORT2
u_enumCharTypes(UCharEnumTypeRange *enumRange, const void *context);
U_STABLE uint8_t U_EXPORT2
u_getCombiningClass(UChar32 c);
U_STABLE int32_t U_EXPORT2
u_charDigitValue(UChar32 c);
U_STABLE UBlockCode U_EXPORT2
ublock_getCode(UChar32 c);
U_STABLE int32_t U_EXPORT2
u_charName(UChar32 code, UCharNameChoice nameChoice,
           char *buffer, int32_t bufferLength,
           UErrorCode *pErrorCode);
U_STABLE UChar32 U_EXPORT2
u_charFromName(UCharNameChoice nameChoice,
               const char *name,
               UErrorCode *pErrorCode);
typedef UBool U_CALLCONV UEnumCharNamesFn(void *context,
                               UChar32 code,
                               UCharNameChoice nameChoice,
                               const char *name,
                               int32_t length);
U_STABLE void U_EXPORT2
u_enumCharNames(UChar32 start, UChar32 limit,
                UEnumCharNamesFn *fn,
                void *context,
                UCharNameChoice nameChoice,
                UErrorCode *pErrorCode);
U_STABLE const char* U_EXPORT2
u_getPropertyName(UProperty property,
                  UPropertyNameChoice nameChoice);
U_STABLE UProperty U_EXPORT2
u_getPropertyEnum(const char* alias);
U_STABLE const char* U_EXPORT2
u_getPropertyValueName(UProperty property,
                       int32_t value,
                       UPropertyNameChoice nameChoice);
U_STABLE int32_t U_EXPORT2
u_getPropertyValueEnum(UProperty property,
                       const char* alias);
U_STABLE UBool U_EXPORT2
u_isIDStart(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isIDPart(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isIDIgnorable(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isJavaIDStart(UChar32 c);
U_STABLE UBool U_EXPORT2
u_isJavaIDPart(UChar32 c);
U_STABLE UChar32 U_EXPORT2
u_tolower(UChar32 c);
U_STABLE UChar32 U_EXPORT2
u_toupper(UChar32 c);
U_STABLE UChar32 U_EXPORT2
u_totitle(UChar32 c);
U_STABLE UChar32 U_EXPORT2
u_foldCase(UChar32 c, uint32_t options);
U_STABLE int32_t U_EXPORT2
u_digit(UChar32 ch, int8_t radix);
U_STABLE UChar32 U_EXPORT2
u_forDigit(int32_t digit, int8_t radix);
U_STABLE void U_EXPORT2
u_charAge(UChar32 c, UVersionInfo versionArray);
U_STABLE void U_EXPORT2
u_getUnicodeVersion(UVersionInfo versionArray);
U_STABLE int32_t U_EXPORT2
u_getFC_NFKC_Closure(UChar32 c, UChar *dest, int32_t destCapacity, UErrorCode *pErrorCode);
U_CDECL_END
U_CDECL_BEGIN
struct UText;
typedef struct UText UText;
U_STABLE UText * U_EXPORT2
utext_close(UText *ut);
U_STABLE UText * U_EXPORT2
utext_openUTF8(UText *ut, const char *s, int64_t length, UErrorCode *status);
U_STABLE UText * U_EXPORT2
utext_openUChars(UText *ut, const UChar *s, int64_t length, UErrorCode *status);
U_STABLE UText * U_EXPORT2
utext_clone(UText *dest, const UText *src, UBool deep, UBool readOnly, UErrorCode *status);
U_STABLE UBool U_EXPORT2
utext_equals(const UText *a, const UText *b);
U_STABLE int64_t U_EXPORT2
utext_nativeLength(UText *ut);
U_STABLE UBool U_EXPORT2
utext_isLengthExpensive(const UText *ut);
U_STABLE UChar32 U_EXPORT2
utext_char32At(UText *ut, int64_t nativeIndex);
U_STABLE UChar32 U_EXPORT2
utext_current32(UText *ut);
U_STABLE UChar32 U_EXPORT2
utext_next32(UText *ut);
U_STABLE UChar32 U_EXPORT2
utext_previous32(UText *ut);
U_STABLE UChar32 U_EXPORT2
utext_next32From(UText *ut, int64_t nativeIndex);
U_STABLE UChar32 U_EXPORT2
utext_previous32From(UText *ut, int64_t nativeIndex);
U_STABLE int64_t U_EXPORT2
utext_getNativeIndex(const UText *ut);
U_STABLE void U_EXPORT2
utext_setNativeIndex(UText *ut, int64_t nativeIndex);
U_STABLE UBool U_EXPORT2
utext_moveIndex32(UText *ut, int32_t delta);
U_STABLE int64_t U_EXPORT2
utext_getPreviousNativeIndex(UText *ut);
U_STABLE int32_t U_EXPORT2
utext_extract(UText *ut,
             int64_t nativeStart, int64_t nativeLimit,
             UChar *dest, int32_t destCapacity,
             UErrorCode *status);
    ((ut)->chunkOffset < (ut)->chunkLength && ((ut)->chunkContents)[(ut)->chunkOffset]<0xd800 ? \
    ((ut)->chunkContents)[((ut)->chunkOffset)++] : utext_next32(ut))
    ((ut)->chunkOffset > 0 && \
     (ut)->chunkContents[(ut)->chunkOffset-1] < 0xd800 ? \
          (ut)->chunkContents[--((ut)->chunkOffset)] : utext_previous32(ut))
    ((ut)->chunkOffset <= (ut)->nativeIndexingLimit? \
        (ut)->chunkNativeStart+(ut)->chunkOffset : \
        (ut)->pFuncs->mapOffsetToNative(ut))
    { int64_t __offset = (ix) - (ut)->chunkNativeStart; \
      if (__offset>=0 && __offset<=(int64_t)(ut)->nativeIndexingLimit) { \
          (ut)->chunkOffset=(int32_t)__offset; \
      } else { \
          utext_setNativeIndex((ut), (ix)); } }
U_STABLE UBool U_EXPORT2
utext_isWritable(const UText *ut);
U_STABLE UBool U_EXPORT2
utext_hasMetaData(const UText *ut);
U_STABLE int32_t U_EXPORT2
utext_replace(UText *ut,
             int64_t nativeStart, int64_t nativeLimit,
             const UChar *replacementText, int32_t replacementLength,
             UErrorCode *status);
U_STABLE void U_EXPORT2
utext_copy(UText *ut,
          int64_t nativeStart, int64_t nativeLimit,
          int64_t destIndex,
          UBool move,
          UErrorCode *status);
U_STABLE void U_EXPORT2
utext_freeze(UText *ut);
enum {
    UTEXT_PROVIDER_LENGTH_IS_EXPENSIVE = 1,
    UTEXT_PROVIDER_STABLE_CHUNKS = 2,
    UTEXT_PROVIDER_WRITABLE = 3,
    UTEXT_PROVIDER_HAS_META_DATA = 4,
     UTEXT_PROVIDER_OWNS_TEXT = 5
};
typedef UText * U_CALLCONV
UTextClone(UText *dest, const UText *src, UBool deep, UErrorCode *status);
typedef int64_t U_CALLCONV
UTextNativeLength(UText *ut);
typedef UBool U_CALLCONV
UTextAccess(UText *ut, int64_t nativeIndex, UBool forward);
typedef int32_t U_CALLCONV
UTextExtract(UText *ut,
             int64_t nativeStart, int64_t nativeLimit,
             UChar *dest, int32_t destCapacity,
             UErrorCode *status);
typedef int32_t U_CALLCONV
UTextReplace(UText *ut,
             int64_t nativeStart, int64_t nativeLimit,
             const UChar *replacementText, int32_t replacmentLength,
             UErrorCode *status);
typedef void U_CALLCONV
UTextCopy(UText *ut,
          int64_t nativeStart, int64_t nativeLimit,
          int64_t nativeDest,
          UBool move,
          UErrorCode *status);
typedef int64_t U_CALLCONV
UTextMapOffsetToNative(const UText *ut);
typedef int32_t U_CALLCONV
UTextMapNativeIndexToUTF16(const UText *ut, int64_t nativeIndex);
typedef void U_CALLCONV
UTextClose(UText *ut);
struct UTextFuncs {
    int32_t tableSize;
    int32_t reserved1, reserved2, reserved3;
    UTextClone *clone;
    UTextNativeLength *nativeLength;
    UTextAccess *access;
    UTextExtract *extract;
    UTextReplace *replace;
    UTextCopy *copy;
    UTextMapOffsetToNative *mapOffsetToNative;
    UTextMapNativeIndexToUTF16 *mapNativeIndexToUTF16;
    UTextClose *close;
    UTextClose *spare1;
    UTextClose *spare2;
    UTextClose *spare3;
};
typedef struct UTextFuncs UTextFuncs;
struct UText {
    uint32_t magic;
    int32_t flags;
    int32_t providerProperties;
    int32_t sizeOfStruct;
    int64_t chunkNativeLimit;
    int32_t extraSize;
    int32_t nativeIndexingLimit;
    int64_t chunkNativeStart;
    int32_t chunkOffset;
    int32_t chunkLength;
    const UChar *chunkContents;
    const UTextFuncs *pFuncs;
    void *pExtra;
    const void *context;
    const void *p;
    const void *q;
    const void *r;
    void *privP;
    int64_t a;
    int32_t b;
    int32_t c;
    int64_t privA;
    int32_t privB;
    int32_t privC;
};
U_STABLE UText * U_EXPORT2
utext_setup(UText *ut, int32_t extraSpace, UErrorCode *status);
                  UTEXT_MAGIC, \
                  0, \
                  0, \
                  sizeof(UText), \
                  0, \
                  0, \
                  0, \
                  0, \
                  0, \
                  0, \
                  NULL, \
                  NULL, \
                  NULL, \
                  NULL, \
                  NULL, NULL, NULL, \
                  NULL, \
                  0, 0, 0, \
                  0, 0, 0 \
                  }
U_CDECL_END
enum {
    USET_IGNORE_SPACE = 1,
    USET_CASE_INSENSITIVE = 2,
    USET_ADD_CASE_MAPPINGS = 4
};
typedef enum USetSpanCondition {
    USET_SPAN_NOT_CONTAINED = 0,
    USET_SPAN_CONTAINED = 1,
    USET_SPAN_SIMPLE = 2,
    USET_SPAN_CONDITION_COUNT
} USetSpanCondition;
enum {
    USET_SERIALIZED_STATIC_ARRAY_CAPACITY=8
};
typedef struct USerializedSet {
    const uint16_t *array;
    int32_t bmpLength;
    int32_t length;
    uint16_t staticArray[USET_SERIALIZED_STATIC_ARRAY_CAPACITY];
} USerializedSet;
U_STABLE USet* U_EXPORT2
uset_openEmpty(void);
U_STABLE USet* U_EXPORT2
uset_open(UChar32 start, UChar32 end);
U_STABLE USet* U_EXPORT2
uset_openPattern(const UChar* pattern, int32_t patternLength,
                 UErrorCode* ec);
U_STABLE USet* U_EXPORT2
uset_openPatternOptions(const UChar* pattern, int32_t patternLength,
                 uint32_t options,
                 UErrorCode* ec);
U_STABLE void U_EXPORT2
uset_close(USet* set);
U_STABLE USet * U_EXPORT2
uset_clone(const USet *set);
U_STABLE UBool U_EXPORT2
uset_isFrozen(const USet *set);
U_STABLE void U_EXPORT2
uset_freeze(USet *set);
U_STABLE USet * U_EXPORT2
uset_cloneAsThawed(const USet *set);
U_STABLE void U_EXPORT2
uset_set(USet* set,
         UChar32 start, UChar32 end);
U_STABLE int32_t U_EXPORT2
uset_applyPattern(USet *set,
                  const UChar *pattern, int32_t patternLength,
                  uint32_t options,
                  UErrorCode *status);
U_STABLE void U_EXPORT2
uset_applyIntPropertyValue(USet* set,
                           UProperty prop, int32_t value, UErrorCode* ec);
U_STABLE void U_EXPORT2
uset_applyPropertyAlias(USet* set,
                        const UChar *prop, int32_t propLength,
                        const UChar *value, int32_t valueLength,
                        UErrorCode* ec);
U_STABLE UBool U_EXPORT2
uset_resemblesPattern(const UChar *pattern, int32_t patternLength,
                      int32_t pos);
U_STABLE int32_t U_EXPORT2
uset_toPattern(const USet* set,
               UChar* result, int32_t resultCapacity,
               UBool escapeUnprintable,
               UErrorCode* ec);
U_STABLE void U_EXPORT2
uset_add(USet* set, UChar32 c);
U_STABLE void U_EXPORT2
uset_addAll(USet* set, const USet *additionalSet);
U_STABLE void U_EXPORT2
uset_addRange(USet* set, UChar32 start, UChar32 end);
U_STABLE void U_EXPORT2
uset_addString(USet* set, const UChar* str, int32_t strLen);
U_STABLE void U_EXPORT2
uset_addAllCodePoints(USet* set, const UChar *str, int32_t strLen);
U_STABLE void U_EXPORT2
uset_remove(USet* set, UChar32 c);
U_STABLE void U_EXPORT2
uset_removeRange(USet* set, UChar32 start, UChar32 end);
U_STABLE void U_EXPORT2
uset_removeString(USet* set, const UChar* str, int32_t strLen);
U_STABLE void U_EXPORT2
uset_removeAll(USet* set, const USet* removeSet);
U_STABLE void U_EXPORT2
uset_retain(USet* set, UChar32 start, UChar32 end);
U_STABLE void U_EXPORT2
uset_retainAll(USet* set, const USet* retain);
U_STABLE void U_EXPORT2
uset_compact(USet* set);
U_STABLE void U_EXPORT2
uset_complement(USet* set);
U_STABLE void U_EXPORT2
uset_complementAll(USet* set, const USet* complement);
U_STABLE void U_EXPORT2
uset_clear(USet* set);
U_STABLE void U_EXPORT2
uset_closeOver(USet* set, int32_t attributes);
U_STABLE void U_EXPORT2
uset_removeAllStrings(USet* set);
U_STABLE UBool U_EXPORT2
uset_isEmpty(const USet* set);
U_STABLE UBool U_EXPORT2
uset_contains(const USet* set, UChar32 c);
U_STABLE UBool U_EXPORT2
uset_containsRange(const USet* set, UChar32 start, UChar32 end);
U_STABLE UBool U_EXPORT2
uset_containsString(const USet* set, const UChar* str, int32_t strLen);
U_STABLE int32_t U_EXPORT2
uset_indexOf(const USet* set, UChar32 c);
U_STABLE UChar32 U_EXPORT2
uset_charAt(const USet* set, int32_t charIndex);
U_STABLE int32_t U_EXPORT2
uset_size(const USet* set);
U_STABLE int32_t U_EXPORT2
uset_getItemCount(const USet* set);
U_STABLE int32_t U_EXPORT2
uset_getItem(const USet* set, int32_t itemIndex,
             UChar32* start, UChar32* end,
             UChar* str, int32_t strCapacity,
             UErrorCode* ec);
U_STABLE UBool U_EXPORT2
uset_containsAll(const USet* set1, const USet* set2);
U_STABLE UBool U_EXPORT2
uset_containsAllCodePoints(const USet* set, const UChar *str, int32_t strLen);
U_STABLE UBool U_EXPORT2
uset_containsNone(const USet* set1, const USet* set2);
U_STABLE UBool U_EXPORT2
uset_containsSome(const USet* set1, const USet* set2);
U_STABLE int32_t U_EXPORT2
uset_span(const USet *set, const UChar *s, int32_t length, USetSpanCondition spanCondition);
U_STABLE int32_t U_EXPORT2
uset_spanBack(const USet *set, const UChar *s, int32_t length, USetSpanCondition spanCondition);
U_STABLE int32_t U_EXPORT2
uset_spanUTF8(const USet *set, const char *s, int32_t length, USetSpanCondition spanCondition);
U_STABLE int32_t U_EXPORT2
uset_spanBackUTF8(const USet *set, const char *s, int32_t length, USetSpanCondition spanCondition);
U_STABLE UBool U_EXPORT2
uset_equals(const USet* set1, const USet* set2);
U_STABLE int32_t U_EXPORT2
uset_serialize(const USet* set, uint16_t* dest, int32_t destCapacity, UErrorCode* pErrorCode);
U_STABLE UBool U_EXPORT2
uset_getSerializedSet(USerializedSet* fillSet, const uint16_t* src, int32_t srcLength);
U_STABLE void U_EXPORT2
uset_setSerializedToOne(USerializedSet* fillSet, UChar32 c);
U_STABLE UBool U_EXPORT2
uset_serializedContains(const USerializedSet* set, UChar32 c);
U_STABLE int32_t U_EXPORT2
uset_getSerializedRangeCount(const USerializedSet* set);
U_STABLE UBool U_EXPORT2
uset_getSerializedRange(const USerializedSet* set, int32_t rangeIndex,
                        UChar32* pStart, UChar32* pEnd);
typedef enum {
    UNORM2_COMPOSE,
    UNORM2_DECOMPOSE,
    UNORM2_FCD,
    UNORM2_COMPOSE_CONTIGUOUS
} UNormalization2Mode;
typedef enum UNormalizationCheckResult {
  UNORM_NO,
  UNORM_YES,
  UNORM_MAYBE
} UNormalizationCheckResult;
struct UNormalizer2;
typedef struct UNormalizer2 UNormalizer2;
U_STABLE const UNormalizer2 * U_EXPORT2
unorm2_getNFCInstance(UErrorCode *pErrorCode);
U_STABLE const UNormalizer2 * U_EXPORT2
unorm2_getNFDInstance(UErrorCode *pErrorCode);
U_STABLE const UNormalizer2 * U_EXPORT2
unorm2_getNFKCInstance(UErrorCode *pErrorCode);
U_STABLE const UNormalizer2 * U_EXPORT2
unorm2_getNFKDInstance(UErrorCode *pErrorCode);
U_STABLE const UNormalizer2 * U_EXPORT2
unorm2_getNFKCCasefoldInstance(UErrorCode *pErrorCode);
U_STABLE const UNormalizer2 * U_EXPORT2
unorm2_getInstance(const char *packageName,
                   const char *name,
                   UNormalization2Mode mode,
                   UErrorCode *pErrorCode);
U_STABLE UNormalizer2 * U_EXPORT2
unorm2_openFiltered(const UNormalizer2 *norm2, const USet *filterSet, UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
unorm2_close(UNormalizer2 *norm2);
U_STABLE int32_t U_EXPORT2
unorm2_normalize(const UNormalizer2 *norm2,
                 const UChar *src, int32_t length,
                 UChar *dest, int32_t capacity,
                 UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
unorm2_normalizeSecondAndAppend(const UNormalizer2 *norm2,
                                UChar *first, int32_t firstLength, int32_t firstCapacity,
                                const UChar *second, int32_t secondLength,
                                UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
unorm2_append(const UNormalizer2 *norm2,
              UChar *first, int32_t firstLength, int32_t firstCapacity,
              const UChar *second, int32_t secondLength,
              UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
unorm2_getDecomposition(const UNormalizer2 *norm2,
                        UChar32 c, UChar *decomposition, int32_t capacity,
                        UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
unorm2_getRawDecomposition(const UNormalizer2 *norm2,
                           UChar32 c, UChar *decomposition, int32_t capacity,
                           UErrorCode *pErrorCode);
U_STABLE UChar32 U_EXPORT2
unorm2_composePair(const UNormalizer2 *norm2, UChar32 a, UChar32 b);
U_STABLE uint8_t U_EXPORT2
unorm2_getCombiningClass(const UNormalizer2 *norm2, UChar32 c);
U_STABLE UBool U_EXPORT2
unorm2_isNormalized(const UNormalizer2 *norm2,
                    const UChar *s, int32_t length,
                    UErrorCode *pErrorCode);
U_STABLE UNormalizationCheckResult U_EXPORT2
unorm2_quickCheck(const UNormalizer2 *norm2,
                  const UChar *s, int32_t length,
                  UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
unorm2_spanQuickCheckYes(const UNormalizer2 *norm2,
                         const UChar *s, int32_t length,
                         UErrorCode *pErrorCode);
U_STABLE UBool U_EXPORT2
unorm2_hasBoundaryBefore(const UNormalizer2 *norm2, UChar32 c);
U_STABLE UBool U_EXPORT2
unorm2_hasBoundaryAfter(const UNormalizer2 *norm2, UChar32 c);
U_STABLE UBool U_EXPORT2
unorm2_isInert(const UNormalizer2 *norm2, UChar32 c);
U_STABLE int32_t U_EXPORT2
unorm_compare(const UChar *s1, int32_t length1,
              const UChar *s2, int32_t length2,
              uint32_t options,
              UErrorCode *pErrorCode);
struct UConverterSelector;
typedef struct UConverterSelector UConverterSelector;
U_STABLE UConverterSelector* U_EXPORT2
ucnvsel_open(const char* const* converterList, int32_t converterListSize,
             const USet* excludedCodePoints,
             const UConverterUnicodeSet whichSet, UErrorCode* status);
U_STABLE void U_EXPORT2
ucnvsel_close(UConverterSelector *sel);
U_STABLE UConverterSelector* U_EXPORT2
ucnvsel_openFromSerialized(const void* buffer, int32_t length, UErrorCode* status);
U_STABLE int32_t U_EXPORT2
ucnvsel_serialize(const UConverterSelector* sel,
                  void* buffer, int32_t bufferCapacity, UErrorCode* status);
U_STABLE UEnumeration * U_EXPORT2
ucnvsel_selectForString(const UConverterSelector* sel,
                        const UChar *s, int32_t length, UErrorCode *status);
U_STABLE UEnumeration * U_EXPORT2
ucnvsel_selectForUTF8(const UConverterSelector* sel,
                      const char *s, int32_t length, UErrorCode *status);
U_CDECL_BEGIN
typedef UResourceBundle* u_nl_catd;
U_STABLE u_nl_catd U_EXPORT2
u_catopen(const char* name, const char* locale, UErrorCode* ec);
U_STABLE void U_EXPORT2
u_catclose(u_nl_catd catd);
U_STABLE const UChar* U_EXPORT2
u_catgets(u_nl_catd catd, int32_t set_num, int32_t msg_num,
          const UChar* s,
          int32_t* len, UErrorCode* ec);
U_CDECL_END
typedef uint8_t UBiDiLevel;
enum UBiDiDirection {
  UBIDI_LTR,
  UBIDI_RTL,
  UBIDI_MIXED,
  UBIDI_NEUTRAL
};
typedef enum UBiDiDirection UBiDiDirection;
struct UBiDi;
typedef struct UBiDi UBiDi;
U_STABLE UBiDi * U_EXPORT2
ubidi_open(void);
U_STABLE UBiDi * U_EXPORT2
ubidi_openSized(int32_t maxLength, int32_t maxRunCount, UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ubidi_close(UBiDi *pBiDi);
U_STABLE void U_EXPORT2
ubidi_setInverse(UBiDi *pBiDi, UBool isInverse);
U_STABLE UBool U_EXPORT2
ubidi_isInverse(UBiDi *pBiDi);
U_STABLE void U_EXPORT2
ubidi_orderParagraphsLTR(UBiDi *pBiDi, UBool orderParagraphsLTR);
U_STABLE UBool U_EXPORT2
ubidi_isOrderParagraphsLTR(UBiDi *pBiDi);
typedef enum UBiDiReorderingMode {
    UBIDI_REORDER_DEFAULT = 0,
    UBIDI_REORDER_NUMBERS_SPECIAL,
    UBIDI_REORDER_GROUP_NUMBERS_WITH_R,
    UBIDI_REORDER_RUNS_ONLY,
    UBIDI_REORDER_INVERSE_NUMBERS_AS_L,
    UBIDI_REORDER_INVERSE_LIKE_DIRECT,
    UBIDI_REORDER_INVERSE_FOR_NUMBERS_SPECIAL,
    UBIDI_REORDER_COUNT
} UBiDiReorderingMode;
U_STABLE void U_EXPORT2
ubidi_setReorderingMode(UBiDi *pBiDi, UBiDiReorderingMode reorderingMode);
U_STABLE UBiDiReorderingMode U_EXPORT2
ubidi_getReorderingMode(UBiDi *pBiDi);
typedef enum UBiDiReorderingOption {
    UBIDI_OPTION_DEFAULT = 0,
    UBIDI_OPTION_INSERT_MARKS = 1,
    UBIDI_OPTION_REMOVE_CONTROLS = 2,
    UBIDI_OPTION_STREAMING = 4
} UBiDiReorderingOption;
U_STABLE void U_EXPORT2
ubidi_setReorderingOptions(UBiDi *pBiDi, uint32_t reorderingOptions);
U_STABLE uint32_t U_EXPORT2
ubidi_getReorderingOptions(UBiDi *pBiDi);
U_STABLE void U_EXPORT2
ubidi_setContext(UBiDi *pBiDi,
                 const UChar *prologue, int32_t proLength,
                 const UChar *epilogue, int32_t epiLength,
                 UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ubidi_setPara(UBiDi *pBiDi, const UChar *text, int32_t length,
              UBiDiLevel paraLevel, UBiDiLevel *embeddingLevels,
              UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ubidi_setLine(const UBiDi *pParaBiDi,
              int32_t start, int32_t limit,
              UBiDi *pLineBiDi,
              UErrorCode *pErrorCode);
U_STABLE UBiDiDirection U_EXPORT2
ubidi_getDirection(const UBiDi *pBiDi);
U_STABLE UBiDiDirection U_EXPORT2
ubidi_getBaseDirection(const UChar *text, int32_t length );
U_STABLE const UChar * U_EXPORT2
ubidi_getText(const UBiDi *pBiDi);
U_STABLE int32_t U_EXPORT2
ubidi_getLength(const UBiDi *pBiDi);
U_STABLE UBiDiLevel U_EXPORT2
ubidi_getParaLevel(const UBiDi *pBiDi);
U_STABLE int32_t U_EXPORT2
ubidi_countParagraphs(UBiDi *pBiDi);
U_STABLE int32_t U_EXPORT2
ubidi_getParagraph(const UBiDi *pBiDi, int32_t charIndex, int32_t *pParaStart,
                   int32_t *pParaLimit, UBiDiLevel *pParaLevel,
                   UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ubidi_getParagraphByIndex(const UBiDi *pBiDi, int32_t paraIndex,
                          int32_t *pParaStart, int32_t *pParaLimit,
                          UBiDiLevel *pParaLevel, UErrorCode *pErrorCode);
U_STABLE UBiDiLevel U_EXPORT2
ubidi_getLevelAt(const UBiDi *pBiDi, int32_t charIndex);
U_STABLE const UBiDiLevel * U_EXPORT2
ubidi_getLevels(UBiDi *pBiDi, UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ubidi_getLogicalRun(const UBiDi *pBiDi, int32_t logicalPosition,
                    int32_t *pLogicalLimit, UBiDiLevel *pLevel);
U_STABLE int32_t U_EXPORT2
ubidi_countRuns(UBiDi *pBiDi, UErrorCode *pErrorCode);
U_STABLE UBiDiDirection U_EXPORT2
ubidi_getVisualRun(UBiDi *pBiDi, int32_t runIndex,
                   int32_t *pLogicalStart, int32_t *pLength);
U_STABLE int32_t U_EXPORT2
ubidi_getVisualIndex(UBiDi *pBiDi, int32_t logicalIndex, UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ubidi_getLogicalIndex(UBiDi *pBiDi, int32_t visualIndex, UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ubidi_getLogicalMap(UBiDi *pBiDi, int32_t *indexMap, UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ubidi_getVisualMap(UBiDi *pBiDi, int32_t *indexMap, UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ubidi_reorderLogical(const UBiDiLevel *levels, int32_t length, int32_t *indexMap);
U_STABLE void U_EXPORT2
ubidi_reorderVisual(const UBiDiLevel *levels, int32_t length, int32_t *indexMap);
U_STABLE void U_EXPORT2
ubidi_invertMap(const int32_t *srcMap, int32_t *destMap, int32_t length);
U_STABLE int32_t U_EXPORT2
ubidi_getProcessedLength(const UBiDi *pBiDi);
U_STABLE int32_t U_EXPORT2
ubidi_getResultLength(const UBiDi *pBiDi);
U_CDECL_BEGIN
typedef UCharDirection U_CALLCONV
UBiDiClassCallback(const void *context, UChar32 c);
U_CDECL_END
U_STABLE UCharDirection U_EXPORT2
ubidi_getCustomizedClass(UBiDi *pBiDi, UChar32 c);
U_STABLE void U_EXPORT2
ubidi_setClassCallback(UBiDi *pBiDi, UBiDiClassCallback *newFn,
                       const void *newContext, UBiDiClassCallback **oldFn,
                       const void **oldContext, UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ubidi_getClassCallback(UBiDi *pBiDi, UBiDiClassCallback **fn, const void **context);
U_STABLE int32_t U_EXPORT2
ubidi_writeReordered(UBiDi *pBiDi,
                     UChar *dest, int32_t destSize,
                     uint16_t options,
                     UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ubidi_writeReverse(const UChar *src, int32_t srcLength,
                   UChar *dest, int32_t destSize,
                   uint16_t options,
                   UErrorCode *pErrorCode);
struct UHashtable;
typedef struct UHashtable UHashtable;
enum UStringTrieBuildOption {
    USTRINGTRIE_BUILD_FAST,
    USTRINGTRIE_BUILD_SMALL
};
U_STABLE void U_EXPORT2
u_charsToUChars(const char *cs, UChar *us, int32_t length);
U_STABLE void U_EXPORT2
u_UCharsToChars(const UChar *us, char *cs, int32_t length);
    typedef struct UBreakIterator UBreakIterator;
U_STABLE int32_t U_EXPORT2
u_strlen(const UChar *s);
U_STABLE int32_t U_EXPORT2
u_countChar32(const UChar *s, int32_t length);
U_STABLE UBool U_EXPORT2
u_strHasMoreChar32Than(const UChar *s, int32_t length, int32_t number);
U_STABLE UChar* U_EXPORT2
u_strcat(UChar *dst,
    const UChar *src);
U_STABLE UChar* U_EXPORT2
u_strncat(UChar *dst,
     const UChar *src,
     int32_t n);
U_STABLE UChar * U_EXPORT2
u_strstr(const UChar *s, const UChar *substring);
U_STABLE UChar * U_EXPORT2
u_strFindFirst(const UChar *s, int32_t length, const UChar *substring, int32_t subLength);
U_STABLE UChar * U_EXPORT2
u_strchr(const UChar *s, UChar c);
U_STABLE UChar * U_EXPORT2
u_strchr32(const UChar *s, UChar32 c);
U_STABLE UChar * U_EXPORT2
u_strrstr(const UChar *s, const UChar *substring);
U_STABLE UChar * U_EXPORT2
u_strFindLast(const UChar *s, int32_t length, const UChar *substring, int32_t subLength);
U_STABLE UChar * U_EXPORT2
u_strrchr(const UChar *s, UChar c);
U_STABLE UChar * U_EXPORT2
u_strrchr32(const UChar *s, UChar32 c);
U_STABLE UChar * U_EXPORT2
u_strpbrk(const UChar *string, const UChar *matchSet);
U_STABLE int32_t U_EXPORT2
u_strcspn(const UChar *string, const UChar *matchSet);
U_STABLE int32_t U_EXPORT2
u_strspn(const UChar *string, const UChar *matchSet);
U_STABLE UChar * U_EXPORT2
u_strtok_r(UChar *src,
     const UChar *delim,
           UChar **saveState);
U_STABLE int32_t U_EXPORT2
u_strcmp(const UChar *s1,
         const UChar *s2);
U_STABLE int32_t U_EXPORT2
u_strcmpCodePointOrder(const UChar *s1, const UChar *s2);
U_STABLE int32_t U_EXPORT2
u_strCompare(const UChar *s1, int32_t length1,
             const UChar *s2, int32_t length2,
             UBool codePointOrder);
U_STABLE int32_t U_EXPORT2
u_strCompareIter(UCharIterator *iter1, UCharIterator *iter2, UBool codePointOrder);
U_STABLE int32_t U_EXPORT2
u_strCaseCompare(const UChar *s1, int32_t length1,
                 const UChar *s2, int32_t length2,
                 uint32_t options,
                 UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
u_strncmp(const UChar *ucs1,
     const UChar *ucs2,
     int32_t n);
U_STABLE int32_t U_EXPORT2
u_strncmpCodePointOrder(const UChar *s1, const UChar *s2, int32_t n);
U_STABLE int32_t U_EXPORT2
u_strcasecmp(const UChar *s1, const UChar *s2, uint32_t options);
U_STABLE int32_t U_EXPORT2
u_strncasecmp(const UChar *s1, const UChar *s2, int32_t n, uint32_t options);
U_STABLE int32_t U_EXPORT2
u_memcasecmp(const UChar *s1, const UChar *s2, int32_t length, uint32_t options);
U_STABLE UChar* U_EXPORT2
u_strcpy(UChar *dst,
    const UChar *src);
U_STABLE UChar* U_EXPORT2
u_strncpy(UChar *dst,
     const UChar *src,
     int32_t n);
U_STABLE UChar* U_EXPORT2 u_uastrcpy(UChar *dst,
               const char *src );
U_STABLE UChar* U_EXPORT2 u_uastrncpy(UChar *dst,
            const char *src,
            int32_t n);
U_STABLE char* U_EXPORT2 u_austrcpy(char *dst,
            const UChar *src );
U_STABLE char* U_EXPORT2 u_austrncpy(char *dst,
            const UChar *src,
            int32_t n );
U_STABLE UChar* U_EXPORT2
u_memcpy(UChar *dest, const UChar *src, int32_t count);
U_STABLE UChar* U_EXPORT2
u_memmove(UChar *dest, const UChar *src, int32_t count);
U_STABLE UChar* U_EXPORT2
u_memset(UChar *dest, UChar c, int32_t count);
U_STABLE int32_t U_EXPORT2
u_memcmp(const UChar *buf1, const UChar *buf2, int32_t count);
U_STABLE int32_t U_EXPORT2
u_memcmpCodePointOrder(const UChar *s1, const UChar *s2, int32_t count);
U_STABLE UChar* U_EXPORT2
u_memchr(const UChar *s, UChar c, int32_t count);
U_STABLE UChar* U_EXPORT2
u_memchr32(const UChar *s, UChar32 c, int32_t count);
U_STABLE UChar* U_EXPORT2
u_memrchr(const UChar *s, UChar c, int32_t count);
U_STABLE UChar* U_EXPORT2
u_memrchr32(const UChar *s, UChar32 c, int32_t count);
U_STABLE int32_t U_EXPORT2
u_unescape(const char *src,
           UChar *dest, int32_t destCapacity);
U_CDECL_BEGIN
typedef UChar (U_CALLCONV *UNESCAPE_CHAR_AT)(int32_t offset, void *context);
U_CDECL_END
U_STABLE UChar32 U_EXPORT2
u_unescapeAt(UNESCAPE_CHAR_AT charAt,
             int32_t *offset,
             int32_t length,
             void *context);
U_STABLE int32_t U_EXPORT2
u_strToUpper(UChar *dest, int32_t destCapacity,
             const UChar *src, int32_t srcLength,
             const char *locale,
             UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
u_strToLower(UChar *dest, int32_t destCapacity,
             const UChar *src, int32_t srcLength,
             const char *locale,
             UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
u_strToTitle(UChar *dest, int32_t destCapacity,
             const UChar *src, int32_t srcLength,
             UBreakIterator *titleIter,
             const char *locale,
             UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
u_strFoldCase(UChar *dest, int32_t destCapacity,
              const UChar *src, int32_t srcLength,
              uint32_t options,
              UErrorCode *pErrorCode);
U_STABLE wchar_t* U_EXPORT2
u_strToWCS(wchar_t *dest,
           int32_t destCapacity,
           int32_t *pDestLength,
           const UChar *src,
           int32_t srcLength,
           UErrorCode *pErrorCode);
U_STABLE UChar* U_EXPORT2
u_strFromWCS(UChar *dest,
             int32_t destCapacity,
             int32_t *pDestLength,
             const wchar_t *src,
             int32_t srcLength,
             UErrorCode *pErrorCode);
U_STABLE char* U_EXPORT2
u_strToUTF8(char *dest,
            int32_t destCapacity,
            int32_t *pDestLength,
            const UChar *src,
            int32_t srcLength,
            UErrorCode *pErrorCode);
U_STABLE UChar* U_EXPORT2
u_strFromUTF8(UChar *dest,
              int32_t destCapacity,
              int32_t *pDestLength,
              const char *src,
              int32_t srcLength,
              UErrorCode *pErrorCode);
U_STABLE char* U_EXPORT2
u_strToUTF8WithSub(char *dest,
            int32_t destCapacity,
            int32_t *pDestLength,
            const UChar *src,
            int32_t srcLength,
            UChar32 subchar, int32_t *pNumSubstitutions,
            UErrorCode *pErrorCode);
U_STABLE UChar* U_EXPORT2
u_strFromUTF8WithSub(UChar *dest,
              int32_t destCapacity,
              int32_t *pDestLength,
              const char *src,
              int32_t srcLength,
              UChar32 subchar, int32_t *pNumSubstitutions,
              UErrorCode *pErrorCode);
U_STABLE UChar * U_EXPORT2
u_strFromUTF8Lenient(UChar *dest,
                     int32_t destCapacity,
                     int32_t *pDestLength,
                     const char *src,
                     int32_t srcLength,
                     UErrorCode *pErrorCode);
U_STABLE UChar32* U_EXPORT2
u_strToUTF32(UChar32 *dest,
             int32_t destCapacity,
             int32_t *pDestLength,
             const UChar *src,
             int32_t srcLength,
             UErrorCode *pErrorCode);
U_STABLE UChar* U_EXPORT2
u_strFromUTF32(UChar *dest,
               int32_t destCapacity,
               int32_t *pDestLength,
               const UChar32 *src,
               int32_t srcLength,
               UErrorCode *pErrorCode);
U_STABLE UChar32* U_EXPORT2
u_strToUTF32WithSub(UChar32 *dest,
             int32_t destCapacity,
             int32_t *pDestLength,
             const UChar *src,
             int32_t srcLength,
             UChar32 subchar, int32_t *pNumSubstitutions,
             UErrorCode *pErrorCode);
U_STABLE UChar* U_EXPORT2
u_strFromUTF32WithSub(UChar *dest,
               int32_t destCapacity,
               int32_t *pDestLength,
               const UChar32 *src,
               int32_t srcLength,
               UChar32 subchar, int32_t *pNumSubstitutions,
               UErrorCode *pErrorCode);
U_STABLE char* U_EXPORT2
u_strToJavaModifiedUTF8(
        char *dest,
        int32_t destCapacity,
        int32_t *pDestLength,
        const UChar *src,
        int32_t srcLength,
        UErrorCode *pErrorCode);
U_STABLE UChar* U_EXPORT2
u_strFromJavaModifiedUTF8WithSub(
        UChar *dest,
        int32_t destCapacity,
        int32_t *pDestLength,
        const char *src,
        int32_t srcLength,
        UChar32 subchar, int32_t *pNumSubstitutions,
        UErrorCode *pErrorCode);
struct UCaseMap;
typedef struct UCaseMap UCaseMap;
U_STABLE UCaseMap * U_EXPORT2
ucasemap_open(const char *locale, uint32_t options, UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ucasemap_close(UCaseMap *csm);
U_STABLE const char * U_EXPORT2
ucasemap_getLocale(const UCaseMap *csm);
U_STABLE uint32_t U_EXPORT2
ucasemap_getOptions(const UCaseMap *csm);
U_STABLE void U_EXPORT2
ucasemap_setLocale(UCaseMap *csm, const char *locale, UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ucasemap_setOptions(UCaseMap *csm, uint32_t options, UErrorCode *pErrorCode);
U_STABLE const UBreakIterator * U_EXPORT2
ucasemap_getBreakIterator(const UCaseMap *csm);
U_STABLE void U_EXPORT2
ucasemap_setBreakIterator(UCaseMap *csm, UBreakIterator *iterToAdopt, UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucasemap_toTitle(UCaseMap *csm,
                 UChar *dest, int32_t destCapacity,
                 const UChar *src, int32_t srcLength,
                 UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucasemap_utf8ToLower(const UCaseMap *csm,
                     char *dest, int32_t destCapacity,
                     const char *src, int32_t srcLength,
                     UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucasemap_utf8ToUpper(const UCaseMap *csm,
                     char *dest, int32_t destCapacity,
                     const char *src, int32_t srcLength,
                     UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucasemap_utf8ToTitle(UCaseMap *csm,
                    char *dest, int32_t destCapacity,
                    const char *src, int32_t srcLength,
                    UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucasemap_utf8FoldCase(const UCaseMap *csm,
                      char *dest, int32_t destCapacity,
                      const char *src, int32_t srcLength,
                      UErrorCode *pErrorCode);
struct UConverter;
typedef int32_t U_CALLCONV
UStringCaseMapper(const UCaseMap *csm,
                  UChar *dest, int32_t destCapacity,
                  const UChar *src, int32_t srcLength,
                  UErrorCode *pErrorCode);
enum { U_PARSE_CONTEXT_LEN = 16 };
typedef struct UParseError {
    int32_t line;
    int32_t offset;
    UChar preContext[U_PARSE_CONTEXT_LEN];
    UChar postContext[U_PARSE_CONTEXT_LEN];
} UParseError;
typedef struct UStringPrepProfile UStringPrepProfile;
typedef enum UStringPrepProfileType {
    USPREP_RFC3491_NAMEPREP,
 USPREP_RFC3530_NFS4_CS_PREP,
 USPREP_RFC3530_NFS4_CS_PREP_CI,
 USPREP_RFC3530_NFS4_CIS_PREP,
 USPREP_RFC3530_NFS4_MIXED_PREP_PREFIX,
 USPREP_RFC3530_NFS4_MIXED_PREP_SUFFIX,
 USPREP_RFC3722_ISCSI,
 USPREP_RFC3920_NODEPREP,
 USPREP_RFC3920_RESOURCEPREP,
 USPREP_RFC4011_MIB,
    USPREP_RFC4013_SASLPREP,
 USPREP_RFC4505_TRACE,
 USPREP_RFC4518_LDAP,
 USPREP_RFC4518_LDAP_CI
} UStringPrepProfileType;
U_STABLE UStringPrepProfile* U_EXPORT2
usprep_open(const char* path,
            const char* fileName,
            UErrorCode* status);
U_STABLE UStringPrepProfile* U_EXPORT2
usprep_openByType(UStringPrepProfileType type,
      UErrorCode* status);
U_STABLE void U_EXPORT2
usprep_close(UStringPrepProfile* profile);
U_STABLE int32_t U_EXPORT2
usprep_prepare( const UStringPrepProfile* prep,
                  const UChar* src, int32_t srcLength,
                  UChar* dest, int32_t destCapacity,
                  int32_t options,
                  UParseError* parseError,
                  UErrorCode* status );
enum {
    UIDNA_DEFAULT=0,
    UIDNA_USE_STD3_RULES=2,
    UIDNA_CHECK_BIDI=4,
    UIDNA_CHECK_CONTEXTJ=8,
    UIDNA_NONTRANSITIONAL_TO_ASCII=0x10,
    UIDNA_NONTRANSITIONAL_TO_UNICODE=0x20,
    UIDNA_CHECK_CONTEXTO=0x40
};
struct UIDNA;
typedef struct UIDNA UIDNA;
U_STABLE UIDNA * U_EXPORT2
uidna_openUTS46(uint32_t options, UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
uidna_close(UIDNA *idna);
typedef struct UIDNAInfo {
    int16_t size;
    UBool isTransitionalDifferent;
    UBool reservedB3;
    uint32_t errors;
    int32_t reservedI2;
    int32_t reservedI3;
} UIDNAInfo;
    (int16_t)sizeof(UIDNAInfo), \
    FALSE, FALSE, \
    0, 0, 0 }
U_STABLE int32_t U_EXPORT2
uidna_labelToASCII(const UIDNA *idna,
                   const UChar *label, int32_t length,
                   UChar *dest, int32_t capacity,
                   UIDNAInfo *pInfo, UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uidna_labelToUnicode(const UIDNA *idna,
                     const UChar *label, int32_t length,
                     UChar *dest, int32_t capacity,
                     UIDNAInfo *pInfo, UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uidna_nameToASCII(const UIDNA *idna,
                  const UChar *name, int32_t length,
                  UChar *dest, int32_t capacity,
                  UIDNAInfo *pInfo, UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uidna_nameToUnicode(const UIDNA *idna,
                    const UChar *name, int32_t length,
                    UChar *dest, int32_t capacity,
                    UIDNAInfo *pInfo, UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uidna_labelToASCII_UTF8(const UIDNA *idna,
                        const char *label, int32_t length,
                        char *dest, int32_t capacity,
                        UIDNAInfo *pInfo, UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uidna_labelToUnicodeUTF8(const UIDNA *idna,
                         const char *label, int32_t length,
                         char *dest, int32_t capacity,
                         UIDNAInfo *pInfo, UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uidna_nameToASCII_UTF8(const UIDNA *idna,
                       const char *name, int32_t length,
                       char *dest, int32_t capacity,
                       UIDNAInfo *pInfo, UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
uidna_nameToUnicodeUTF8(const UIDNA *idna,
                        const char *name, int32_t length,
                        char *dest, int32_t capacity,
                        UIDNAInfo *pInfo, UErrorCode *pErrorCode);
enum {
    UIDNA_ERROR_EMPTY_LABEL=1,
    UIDNA_ERROR_LABEL_TOO_LONG=2,
    UIDNA_ERROR_DOMAIN_NAME_TOO_LONG=4,
    UIDNA_ERROR_LEADING_HYPHEN=8,
    UIDNA_ERROR_TRAILING_HYPHEN=0x10,
    UIDNA_ERROR_HYPHEN_3_4=0x20,
    UIDNA_ERROR_LEADING_COMBINING_MARK=0x40,
    UIDNA_ERROR_DISALLOWED=0x80,
    UIDNA_ERROR_PUNYCODE=0x100,
    UIDNA_ERROR_LABEL_HAS_DOT=0x200,
    UIDNA_ERROR_INVALID_ACE_LABEL=0x400,
    UIDNA_ERROR_BIDI=0x800,
    UIDNA_ERROR_CONTEXTJ=0x1000,
    UIDNA_ERROR_CONTEXTO_PUNCTUATION=0x2000,
    UIDNA_ERROR_CONTEXTO_DIGITS=0x4000
};
typedef enum UBreakIteratorType {
  UBRK_CHARACTER = 0,
  UBRK_WORD = 1,
  UBRK_LINE = 2,
  UBRK_SENTENCE = 3,
  UBRK_COUNT = 5
} UBreakIteratorType;
typedef enum UWordBreak {
    UBRK_WORD_NONE = 0,
    UBRK_WORD_NONE_LIMIT = 100,
    UBRK_WORD_NUMBER = 100,
    UBRK_WORD_NUMBER_LIMIT = 200,
    UBRK_WORD_LETTER = 200,
    UBRK_WORD_LETTER_LIMIT = 300,
    UBRK_WORD_KANA = 300,
    UBRK_WORD_KANA_LIMIT = 400,
    UBRK_WORD_IDEO = 400,
    UBRK_WORD_IDEO_LIMIT = 500
} UWordBreak;
typedef enum ULineBreakTag {
    UBRK_LINE_SOFT = 0,
    UBRK_LINE_SOFT_LIMIT = 100,
    UBRK_LINE_HARD = 100,
    UBRK_LINE_HARD_LIMIT = 200
} ULineBreakTag;
typedef enum USentenceBreakTag {
    UBRK_SENTENCE_TERM = 0,
    UBRK_SENTENCE_TERM_LIMIT = 100,
    UBRK_SENTENCE_SEP = 100,
    UBRK_SENTENCE_SEP_LIMIT = 200
} USentenceBreakTag;
U_STABLE UBreakIterator* U_EXPORT2
ubrk_open(UBreakIteratorType type,
      const char *locale,
      const UChar *text,
      int32_t textLength,
      UErrorCode *status);
U_STABLE UBreakIterator* U_EXPORT2
ubrk_openRules(const UChar *rules,
               int32_t rulesLength,
               const UChar *text,
               int32_t textLength,
               UParseError *parseErr,
               UErrorCode *status);
U_STABLE UBreakIterator * U_EXPORT2
ubrk_safeClone(
          const UBreakIterator *bi,
          void *stackBuffer,
          int32_t *pBufferSize,
          UErrorCode *status);
U_STABLE void U_EXPORT2
ubrk_close(UBreakIterator *bi);
U_STABLE void U_EXPORT2
ubrk_setText(UBreakIterator* bi,
             const UChar* text,
             int32_t textLength,
             UErrorCode* status);
U_STABLE void U_EXPORT2
ubrk_setUText(UBreakIterator* bi,
             UText* text,
             UErrorCode* status);
U_STABLE int32_t U_EXPORT2
ubrk_current(const UBreakIterator *bi);
U_STABLE int32_t U_EXPORT2
ubrk_next(UBreakIterator *bi);
U_STABLE int32_t U_EXPORT2
ubrk_previous(UBreakIterator *bi);
U_STABLE int32_t U_EXPORT2
ubrk_first(UBreakIterator *bi);
U_STABLE int32_t U_EXPORT2
ubrk_last(UBreakIterator *bi);
U_STABLE int32_t U_EXPORT2
ubrk_preceding(UBreakIterator *bi,
           int32_t offset);
U_STABLE int32_t U_EXPORT2
ubrk_following(UBreakIterator *bi,
           int32_t offset);
U_STABLE const char* U_EXPORT2
ubrk_getAvailable(int32_t index);
U_STABLE int32_t U_EXPORT2
ubrk_countAvailable(void);
U_STABLE UBool U_EXPORT2
ubrk_isBoundary(UBreakIterator *bi, int32_t offset);
U_STABLE int32_t U_EXPORT2
ubrk_getRuleStatus(UBreakIterator *bi);
U_STABLE int32_t U_EXPORT2
ubrk_getRuleStatusVec(UBreakIterator *bi, int32_t *fillInVec, int32_t capacity, UErrorCode *status);
U_STABLE const char* U_EXPORT2
ubrk_getLocaleByType(const UBreakIterator *bi, ULocDataLocaleType type, UErrorCode* status);
U_STABLE void U_EXPORT2
ubrk_refreshUText(UBreakIterator *bi,
                       UText *text,
                       UErrorCode *status);
enum UMessagePatternApostropheMode {
    UMSGPAT_APOS_DOUBLE_OPTIONAL,
    UMSGPAT_APOS_DOUBLE_REQUIRED
};
typedef enum UMessagePatternApostropheMode UMessagePatternApostropheMode;
enum UMessagePatternPartType {
    UMSGPAT_PART_TYPE_MSG_START,
    UMSGPAT_PART_TYPE_MSG_LIMIT,
    UMSGPAT_PART_TYPE_SKIP_SYNTAX,
    UMSGPAT_PART_TYPE_INSERT_CHAR,
    UMSGPAT_PART_TYPE_REPLACE_NUMBER,
    UMSGPAT_PART_TYPE_ARG_START,
    UMSGPAT_PART_TYPE_ARG_LIMIT,
    UMSGPAT_PART_TYPE_ARG_NUMBER,
    UMSGPAT_PART_TYPE_ARG_NAME,
    UMSGPAT_PART_TYPE_ARG_TYPE,
    UMSGPAT_PART_TYPE_ARG_STYLE,
    UMSGPAT_PART_TYPE_ARG_SELECTOR,
    UMSGPAT_PART_TYPE_ARG_INT,
    UMSGPAT_PART_TYPE_ARG_DOUBLE
};
typedef enum UMessagePatternPartType UMessagePatternPartType;
enum UMessagePatternArgType {
    UMSGPAT_ARG_TYPE_NONE,
    UMSGPAT_ARG_TYPE_SIMPLE,
    UMSGPAT_ARG_TYPE_CHOICE,
    UMSGPAT_ARG_TYPE_PLURAL,
    UMSGPAT_ARG_TYPE_SELECT,
    UMSGPAT_ARG_TYPE_SELECTORDINAL
};
typedef enum UMessagePatternArgType UMessagePatternArgType;
    ((argType)==UMSGPAT_ARG_TYPE_PLURAL || (argType)==UMSGPAT_ARG_TYPE_SELECTORDINAL)
enum {
    UMSGPAT_ARG_NAME_NOT_NUMBER=-1,
    UMSGPAT_ARG_NAME_NOT_VALID=-2
};
U_STABLE void U_EXPORT2 u_getDataVersion(UVersionInfo dataVersionFillin, UErrorCode *status);
