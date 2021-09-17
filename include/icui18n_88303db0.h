#include "icucommon.h"
        
#pragma message("The wchar_t versions of the ICU headers are no longer being updated, please use the char16_t based header icu.h instead; see https://go.microsoft.com/fwlink/?linkid=851033 for more info. To suppress this warning, define the macro SUPPRESS_LEGACY_ICU_HEADER_WARNINGS before including this header.")
U_CDECL_BEGIN
typedef enum UAlphabeticIndexLabelType {
    U_ALPHAINDEX_NORMAL = 0,
    U_ALPHAINDEX_UNDERFLOW = 1,
    U_ALPHAINDEX_INFLOW = 2,
    U_ALPHAINDEX_OVERFLOW = 3
} UAlphabeticIndexLabelType;
struct UHashtable;
U_CDECL_END
U_CDECL_BEGIN
typedef enum UTimeZoneNameType {
    UTZNM_UNKNOWN = 0x00,
    UTZNM_LONG_GENERIC = 0x01,
    UTZNM_LONG_STANDARD = 0x02,
    UTZNM_LONG_DAYLIGHT = 0x04,
    UTZNM_SHORT_GENERIC = 0x08,
    UTZNM_SHORT_STANDARD = 0x10,
    UTZNM_SHORT_DAYLIGHT = 0x20,
    UTZNM_EXEMPLAR_LOCATION = 0x40
} UTimeZoneNameType;
U_CDECL_END
U_CDECL_BEGIN
typedef enum UTimeZoneFormatStyle {
    UTZFMT_STYLE_GENERIC_LOCATION,
    UTZFMT_STYLE_GENERIC_LONG,
    UTZFMT_STYLE_GENERIC_SHORT,
    UTZFMT_STYLE_SPECIFIC_LONG,
    UTZFMT_STYLE_SPECIFIC_SHORT,
    UTZFMT_STYLE_LOCALIZED_GMT,
    UTZFMT_STYLE_LOCALIZED_GMT_SHORT,
    UTZFMT_STYLE_ISO_BASIC_SHORT,
    UTZFMT_STYLE_ISO_BASIC_LOCAL_SHORT,
    UTZFMT_STYLE_ISO_BASIC_FIXED,
    UTZFMT_STYLE_ISO_BASIC_LOCAL_FIXED,
    UTZFMT_STYLE_ISO_BASIC_FULL,
    UTZFMT_STYLE_ISO_BASIC_LOCAL_FULL,
    UTZFMT_STYLE_ISO_EXTENDED_FIXED,
    UTZFMT_STYLE_ISO_EXTENDED_LOCAL_FIXED,
    UTZFMT_STYLE_ISO_EXTENDED_FULL,
    UTZFMT_STYLE_ISO_EXTENDED_LOCAL_FULL,
    UTZFMT_STYLE_ZONE_ID,
    UTZFMT_STYLE_ZONE_ID_SHORT,
    UTZFMT_STYLE_EXEMPLAR_LOCATION
} UTimeZoneFormatStyle;
typedef enum UTimeZoneFormatGMTOffsetPatternType {
    UTZFMT_PAT_POSITIVE_HM,
    UTZFMT_PAT_POSITIVE_HMS,
    UTZFMT_PAT_NEGATIVE_HM,
    UTZFMT_PAT_NEGATIVE_HMS,
    UTZFMT_PAT_POSITIVE_H,
    UTZFMT_PAT_NEGATIVE_H,
    UTZFMT_PAT_COUNT = 6
} UTimeZoneFormatGMTOffsetPatternType;
typedef enum UTimeZoneFormatTimeType {
    UTZFMT_TIME_TYPE_UNKNOWN,
    UTZFMT_TIME_TYPE_STANDARD,
    UTZFMT_TIME_TYPE_DAYLIGHT
} UTimeZoneFormatTimeType;
typedef enum UTimeZoneFormatParseOption {
    UTZFMT_PARSE_OPTION_NONE = 0x00,
    UTZFMT_PARSE_OPTION_ALL_STYLES = 0x01,
    UTZFMT_PARSE_OPTION_TZ_DATABASE_ABBREVIATIONS = 0x02
} UTimeZoneFormatParseOption;
U_CDECL_END
typedef void* UCalendar;
enum UCalendarType {
  UCAL_TRADITIONAL,
  UCAL_DEFAULT = UCAL_TRADITIONAL,
  UCAL_GREGORIAN
};
typedef enum UCalendarType UCalendarType;
enum UCalendarDateFields {
  UCAL_ERA,
  UCAL_YEAR,
  UCAL_MONTH,
  UCAL_WEEK_OF_YEAR,
  UCAL_WEEK_OF_MONTH,
  UCAL_DATE,
  UCAL_DAY_OF_YEAR,
  UCAL_DAY_OF_WEEK,
  UCAL_DAY_OF_WEEK_IN_MONTH,
  UCAL_AM_PM,
  UCAL_HOUR,
  UCAL_HOUR_OF_DAY,
  UCAL_MINUTE,
  UCAL_SECOND,
  UCAL_MILLISECOND,
  UCAL_ZONE_OFFSET,
  UCAL_DST_OFFSET,
  UCAL_YEAR_WOY,
  UCAL_DOW_LOCAL,
  UCAL_EXTENDED_YEAR,
  UCAL_JULIAN_DAY,
  UCAL_MILLISECONDS_IN_DAY,
  UCAL_IS_LEAP_MONTH,
  UCAL_FIELD_COUNT,
  UCAL_DAY_OF_MONTH=UCAL_DATE
};
typedef enum UCalendarDateFields UCalendarDateFields;
enum UCalendarDaysOfWeek {
  UCAL_SUNDAY = 1,
  UCAL_MONDAY,
  UCAL_TUESDAY,
  UCAL_WEDNESDAY,
  UCAL_THURSDAY,
  UCAL_FRIDAY,
  UCAL_SATURDAY
};
typedef enum UCalendarDaysOfWeek UCalendarDaysOfWeek;
enum UCalendarMonths {
  UCAL_JANUARY,
  UCAL_FEBRUARY,
  UCAL_MARCH,
  UCAL_APRIL,
  UCAL_MAY,
  UCAL_JUNE,
  UCAL_JULY,
  UCAL_AUGUST,
  UCAL_SEPTEMBER,
  UCAL_OCTOBER,
  UCAL_NOVEMBER,
  UCAL_DECEMBER,
  UCAL_UNDECIMBER
};
typedef enum UCalendarMonths UCalendarMonths;
enum UCalendarAMPMs {
  UCAL_AM,
  UCAL_PM
};
typedef enum UCalendarAMPMs UCalendarAMPMs;
enum USystemTimeZoneType {
    UCAL_ZONE_TYPE_ANY,
    UCAL_ZONE_TYPE_CANONICAL,
    UCAL_ZONE_TYPE_CANONICAL_LOCATION
};
typedef enum USystemTimeZoneType USystemTimeZoneType;
U_STABLE UEnumeration* U_EXPORT2
ucal_openTimeZoneIDEnumeration(USystemTimeZoneType zoneType, const char* region,
                                const int32_t* rawOffset, UErrorCode* ec);
U_STABLE UEnumeration* U_EXPORT2
ucal_openTimeZones(UErrorCode* ec);
U_STABLE UEnumeration* U_EXPORT2
ucal_openCountryTimeZones(const char* country, UErrorCode* ec);
U_STABLE int32_t U_EXPORT2
ucal_getDefaultTimeZone(UChar* result, int32_t resultCapacity, UErrorCode* ec);
U_STABLE void U_EXPORT2
ucal_setDefaultTimeZone(const UChar* zoneID, UErrorCode* ec);
U_STABLE int32_t U_EXPORT2
ucal_getDSTSavings(const UChar* zoneID, UErrorCode* ec);
U_STABLE UDate U_EXPORT2
ucal_getNow(void);
U_STABLE UCalendar* U_EXPORT2
ucal_open(const UChar* zoneID,
          int32_t len,
          const char* locale,
          UCalendarType type,
          UErrorCode* status);
U_STABLE void U_EXPORT2
ucal_close(UCalendar *cal);
U_STABLE UCalendar* U_EXPORT2
ucal_clone(const UCalendar* cal,
           UErrorCode* status);
U_STABLE void U_EXPORT2
ucal_setTimeZone(UCalendar* cal,
                 const UChar* zoneID,
                 int32_t len,
                 UErrorCode* status);
U_STABLE int32_t U_EXPORT2
ucal_getTimeZoneID(const UCalendar *cal,
                   UChar *result,
                   int32_t resultLength,
                   UErrorCode *status);
enum UCalendarDisplayNameType {
  UCAL_STANDARD,
  UCAL_SHORT_STANDARD,
  UCAL_DST,
  UCAL_SHORT_DST
};
typedef enum UCalendarDisplayNameType UCalendarDisplayNameType;
U_STABLE int32_t U_EXPORT2
ucal_getTimeZoneDisplayName(const UCalendar* cal,
                            UCalendarDisplayNameType type,
                            const char* locale,
                            UChar* result,
                            int32_t resultLength,
                            UErrorCode* status);
U_STABLE UBool U_EXPORT2
ucal_inDaylightTime(const UCalendar* cal,
                    UErrorCode* status );
U_STABLE void U_EXPORT2
ucal_setGregorianChange(UCalendar *cal, UDate date, UErrorCode *pErrorCode);
U_STABLE UDate U_EXPORT2
ucal_getGregorianChange(const UCalendar *cal, UErrorCode *pErrorCode);
enum UCalendarAttribute {
  UCAL_LENIENT,
  UCAL_FIRST_DAY_OF_WEEK,
  UCAL_MINIMAL_DAYS_IN_FIRST_WEEK,
  UCAL_REPEATED_WALL_TIME,
  UCAL_SKIPPED_WALL_TIME
};
typedef enum UCalendarAttribute UCalendarAttribute;
enum UCalendarWallTimeOption {
    UCAL_WALLTIME_LAST,
    UCAL_WALLTIME_FIRST,
    UCAL_WALLTIME_NEXT_VALID
};
typedef enum UCalendarWallTimeOption UCalendarWallTimeOption;
U_STABLE int32_t U_EXPORT2
ucal_getAttribute(const UCalendar* cal,
                  UCalendarAttribute attr);
U_STABLE void U_EXPORT2
ucal_setAttribute(UCalendar* cal,
                  UCalendarAttribute attr,
                  int32_t newValue);
U_STABLE const char* U_EXPORT2
ucal_getAvailable(int32_t localeIndex);
U_STABLE int32_t U_EXPORT2
ucal_countAvailable(void);
U_STABLE UDate U_EXPORT2
ucal_getMillis(const UCalendar* cal,
               UErrorCode* status);
U_STABLE void U_EXPORT2
ucal_setMillis(UCalendar* cal,
               UDate dateTime,
               UErrorCode* status );
U_STABLE void U_EXPORT2
ucal_setDate(UCalendar* cal,
             int32_t year,
             int32_t month,
             int32_t date,
             UErrorCode* status);
U_STABLE void U_EXPORT2
ucal_setDateTime(UCalendar* cal,
                 int32_t year,
                 int32_t month,
                 int32_t date,
                 int32_t hour,
                 int32_t minute,
                 int32_t second,
                 UErrorCode* status);
U_STABLE UBool U_EXPORT2
ucal_equivalentTo(const UCalendar* cal1,
                  const UCalendar* cal2);
U_STABLE void U_EXPORT2
ucal_add(UCalendar* cal,
         UCalendarDateFields field,
         int32_t amount,
         UErrorCode* status);
U_STABLE void U_EXPORT2
ucal_roll(UCalendar* cal,
          UCalendarDateFields field,
          int32_t amount,
          UErrorCode* status);
U_STABLE int32_t U_EXPORT2
ucal_get(const UCalendar* cal,
         UCalendarDateFields field,
         UErrorCode* status );
U_STABLE void U_EXPORT2
ucal_set(UCalendar* cal,
         UCalendarDateFields field,
         int32_t value);
U_STABLE UBool U_EXPORT2
ucal_isSet(const UCalendar* cal,
           UCalendarDateFields field);
U_STABLE void U_EXPORT2
ucal_clearField(UCalendar* cal,
                UCalendarDateFields field);
U_STABLE void U_EXPORT2
ucal_clear(UCalendar* calendar);
enum UCalendarLimitType {
  UCAL_MINIMUM,
  UCAL_MAXIMUM,
  UCAL_GREATEST_MINIMUM,
  UCAL_LEAST_MAXIMUM,
  UCAL_ACTUAL_MINIMUM,
  UCAL_ACTUAL_MAXIMUM
};
typedef enum UCalendarLimitType UCalendarLimitType;
U_STABLE int32_t U_EXPORT2
ucal_getLimit(const UCalendar* cal,
              UCalendarDateFields field,
              UCalendarLimitType type,
              UErrorCode* status);
U_STABLE const char * U_EXPORT2
ucal_getLocaleByType(const UCalendar *cal, ULocDataLocaleType type, UErrorCode* status);
U_STABLE const char * U_EXPORT2
ucal_getTZDataVersion(UErrorCode* status);
U_STABLE int32_t U_EXPORT2
ucal_getCanonicalTimeZoneID(const UChar* id, int32_t len,
                            UChar* result, int32_t resultCapacity, UBool *isSystemID, UErrorCode* status);
U_STABLE const char * U_EXPORT2
ucal_getType(const UCalendar *cal, UErrorCode* status);
U_STABLE UEnumeration* U_EXPORT2
ucal_getKeywordValuesForLocale(const char* key,
                               const char* locale,
                               UBool commonlyUsed,
                               UErrorCode* status);
enum UCalendarWeekdayType {
  UCAL_WEEKDAY,
  UCAL_WEEKEND,
  UCAL_WEEKEND_ONSET,
  UCAL_WEEKEND_CEASE
};
typedef enum UCalendarWeekdayType UCalendarWeekdayType;
U_STABLE UCalendarWeekdayType U_EXPORT2
ucal_getDayOfWeekType(const UCalendar *cal, UCalendarDaysOfWeek dayOfWeek, UErrorCode* status);
U_STABLE int32_t U_EXPORT2
ucal_getWeekendTransition(const UCalendar *cal, UCalendarDaysOfWeek dayOfWeek, UErrorCode *status);
U_STABLE UBool U_EXPORT2
ucal_isWeekend(const UCalendar *cal, UDate date, UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ucal_getFieldDifference(UCalendar* cal,
                        UDate target,
                        UCalendarDateFields field,
                        UErrorCode* status);
enum UTimeZoneTransitionType {
    UCAL_TZ_TRANSITION_NEXT,
    UCAL_TZ_TRANSITION_NEXT_INCLUSIVE,
    UCAL_TZ_TRANSITION_PREVIOUS,
    UCAL_TZ_TRANSITION_PREVIOUS_INCLUSIVE
};
typedef enum UTimeZoneTransitionType UTimeZoneTransitionType;
U_STABLE UBool U_EXPORT2
ucal_getTimeZoneTransitionDate(const UCalendar* cal, UTimeZoneTransitionType type,
                               UDate* transition, UErrorCode* status);
U_STABLE int32_t U_EXPORT2
ucal_getWindowsTimeZoneID(const UChar* id, int32_t len,
                            UChar* winid, int32_t winidCapacity, UErrorCode* status);
U_STABLE int32_t U_EXPORT2
ucal_getTimeZoneIDForWindowsID(const UChar* winid, int32_t len, const char* region,
                                UChar* id, int32_t idCapacity, UErrorCode* status);
struct UCollator;
typedef struct UCollator UCollator;
typedef enum {
  UCOL_EQUAL = 0,
  UCOL_GREATER = 1,
  UCOL_LESS = -1
} UCollationResult ;
typedef enum {
  UCOL_DEFAULT = -1,
  UCOL_PRIMARY = 0,
  UCOL_SECONDARY = 1,
  UCOL_TERTIARY = 2,
  UCOL_DEFAULT_STRENGTH = UCOL_TERTIARY,
  UCOL_CE_STRENGTH_LIMIT,
  UCOL_QUATERNARY=3,
  UCOL_IDENTICAL=15,
  UCOL_STRENGTH_LIMIT,
  UCOL_OFF = 16,
  UCOL_ON = 17,
  UCOL_SHIFTED = 20,
  UCOL_NON_IGNORABLE = 21,
  UCOL_LOWER_FIRST = 24,
  UCOL_UPPER_FIRST = 25,
  UCOL_ATTRIBUTE_VALUE_COUNT
} UColAttributeValue;
 typedef enum {
    UCOL_REORDER_CODE_DEFAULT = -1,
    UCOL_REORDER_CODE_NONE = USCRIPT_UNKNOWN,
    UCOL_REORDER_CODE_OTHERS = USCRIPT_UNKNOWN,
    UCOL_REORDER_CODE_SPACE = 0x1000,
    UCOL_REORDER_CODE_FIRST = UCOL_REORDER_CODE_SPACE,
    UCOL_REORDER_CODE_PUNCTUATION = 0x1001,
    UCOL_REORDER_CODE_SYMBOL = 0x1002,
    UCOL_REORDER_CODE_CURRENCY = 0x1003,
    UCOL_REORDER_CODE_DIGIT = 0x1004,
    UCOL_REORDER_CODE_LIMIT = 0x1005
} UColReorderCode;
typedef UColAttributeValue UCollationStrength;
typedef enum {
     UCOL_FRENCH_COLLATION,
     UCOL_ALTERNATE_HANDLING,
     UCOL_CASE_FIRST,
     UCOL_CASE_LEVEL,
     UCOL_NORMALIZATION_MODE,
     UCOL_DECOMPOSITION_MODE = UCOL_NORMALIZATION_MODE,
     UCOL_STRENGTH,
     UCOL_NUMERIC_COLLATION = UCOL_STRENGTH + 2,
     UCOL_ATTRIBUTE_COUNT
} UColAttribute;
typedef enum {
  UCOL_TAILORING_ONLY,
  UCOL_FULL_RULES
} UColRuleOption ;
U_STABLE UCollator* U_EXPORT2
ucol_open(const char *loc, UErrorCode *status);
U_STABLE UCollator* U_EXPORT2
ucol_openRules( const UChar *rules,
                int32_t rulesLength,
                UColAttributeValue normalizationMode,
                UCollationStrength strength,
                UParseError *parseError,
                UErrorCode *status);
U_STABLE void U_EXPORT2
ucol_getContractionsAndExpansions( const UCollator *coll,
                  USet *contractions, USet *expansions,
                  UBool addPrefixes, UErrorCode *status);
U_STABLE void U_EXPORT2
ucol_close(UCollator *coll);
U_STABLE UCollationResult U_EXPORT2
ucol_strcoll( const UCollator *coll,
        const UChar *source,
        int32_t sourceLength,
        const UChar *target,
        int32_t targetLength);
U_STABLE UCollationResult U_EXPORT2
ucol_strcollUTF8(
        const UCollator *coll,
        const char *source,
        int32_t sourceLength,
        const char *target,
        int32_t targetLength,
        UErrorCode *status);
U_STABLE UBool U_EXPORT2
ucol_greater(const UCollator *coll,
             const UChar *source, int32_t sourceLength,
             const UChar *target, int32_t targetLength);
U_STABLE UBool U_EXPORT2
ucol_greaterOrEqual(const UCollator *coll,
                    const UChar *source, int32_t sourceLength,
                    const UChar *target, int32_t targetLength);
U_STABLE UBool U_EXPORT2
ucol_equal(const UCollator *coll,
           const UChar *source, int32_t sourceLength,
           const UChar *target, int32_t targetLength);
U_STABLE UCollationResult U_EXPORT2
ucol_strcollIter( const UCollator *coll,
                  UCharIterator *sIter,
                  UCharIterator *tIter,
                  UErrorCode *status);
U_STABLE UCollationStrength U_EXPORT2
ucol_getStrength(const UCollator *coll);
U_STABLE void U_EXPORT2
ucol_setStrength(UCollator *coll,
                 UCollationStrength strength);
U_STABLE int32_t U_EXPORT2
ucol_getReorderCodes(const UCollator* coll,
                    int32_t* dest,
                    int32_t destCapacity,
                    UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
ucol_setReorderCodes(UCollator* coll,
                    const int32_t* reorderCodes,
                    int32_t reorderCodesLength,
                    UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucol_getEquivalentReorderCodes(int32_t reorderCode,
                    int32_t* dest,
                    int32_t destCapacity,
                    UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
ucol_getDisplayName( const char *objLoc,
            const char *dispLoc,
            UChar *result,
            int32_t resultLength,
            UErrorCode *status);
U_STABLE const char* U_EXPORT2
ucol_getAvailable(int32_t localeIndex);
U_STABLE int32_t U_EXPORT2
ucol_countAvailable(void);
U_STABLE UEnumeration* U_EXPORT2
ucol_openAvailableLocales(UErrorCode *status);
U_STABLE UEnumeration* U_EXPORT2
ucol_getKeywords(UErrorCode *status);
U_STABLE UEnumeration* U_EXPORT2
ucol_getKeywordValues(const char *keyword, UErrorCode *status);
U_STABLE UEnumeration* U_EXPORT2
ucol_getKeywordValuesForLocale(const char* key,
                               const char* locale,
                               UBool commonlyUsed,
                               UErrorCode* status);
U_STABLE int32_t U_EXPORT2
ucol_getFunctionalEquivalent(char* result, int32_t resultCapacity,
                             const char* keyword, const char* locale,
                             UBool* isAvailable, UErrorCode* status);
U_STABLE const UChar* U_EXPORT2
ucol_getRules( const UCollator *coll,
        int32_t *length);
U_STABLE int32_t U_EXPORT2
ucol_getSortKey(const UCollator *coll,
        const UChar *source,
        int32_t sourceLength,
        uint8_t *result,
        int32_t resultLength);
U_STABLE int32_t U_EXPORT2
ucol_nextSortKeyPart(const UCollator *coll,
                     UCharIterator *iter,
                     uint32_t state[2],
                     uint8_t *dest, int32_t count,
                     UErrorCode *status);
typedef enum {
  UCOL_BOUND_LOWER = 0,
  UCOL_BOUND_UPPER = 1,
  UCOL_BOUND_UPPER_LONG = 2,
  UCOL_BOUND_VALUE_COUNT
} UColBoundMode;
U_STABLE int32_t U_EXPORT2
ucol_getBound(const uint8_t *source,
        int32_t sourceLength,
        UColBoundMode boundType,
        uint32_t noOfLevels,
        uint8_t *result,
        int32_t resultLength,
        UErrorCode *status);
U_STABLE void U_EXPORT2
ucol_getVersion(const UCollator* coll, UVersionInfo info);
U_STABLE void U_EXPORT2
ucol_getUCAVersion(const UCollator* coll, UVersionInfo info);
U_STABLE int32_t U_EXPORT2
ucol_mergeSortkeys(const uint8_t *src1, int32_t src1Length,
                   const uint8_t *src2, int32_t src2Length,
                   uint8_t *dest, int32_t destCapacity);
U_STABLE void U_EXPORT2
ucol_setAttribute(UCollator *coll, UColAttribute attr, UColAttributeValue value, UErrorCode *status);
U_STABLE UColAttributeValue U_EXPORT2
ucol_getAttribute(const UCollator *coll, UColAttribute attr, UErrorCode *status);
U_STABLE void U_EXPORT2
ucol_setMaxVariable(UCollator *coll, UColReorderCode group, UErrorCode *pErrorCode);
U_STABLE UColReorderCode U_EXPORT2
ucol_getMaxVariable(const UCollator *coll);
U_STABLE uint32_t U_EXPORT2 ucol_getVariableTop(const UCollator *coll, UErrorCode *status);
U_STABLE UCollator* U_EXPORT2
ucol_safeClone(const UCollator *coll,
               void *stackBuffer,
               int32_t *pBufferSize,
               UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ucol_getRulesEx(const UCollator *coll, UColRuleOption delta, UChar *buffer, int32_t bufferLen);
U_STABLE const char * U_EXPORT2
ucol_getLocaleByType(const UCollator *coll, ULocDataLocaleType type, UErrorCode *status);
U_STABLE USet * U_EXPORT2
ucol_getTailoredSet(const UCollator *coll, UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ucol_cloneBinary(const UCollator *coll,
                 uint8_t *buffer, int32_t capacity,
                 UErrorCode *status);
U_STABLE UCollator* U_EXPORT2
ucol_openBinary(const uint8_t *bin, int32_t length,
                const UCollator *base,
                UErrorCode *status);
typedef struct UCollationElements UCollationElements;
U_STABLE UCollationElements* U_EXPORT2
ucol_openElements(const UCollator *coll,
                  const UChar *text,
                        int32_t textLength,
                        UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ucol_keyHashCode(const uint8_t* key, int32_t length);
U_STABLE void U_EXPORT2
ucol_closeElements(UCollationElements *elems);
U_STABLE void U_EXPORT2
ucol_reset(UCollationElements *elems);
U_STABLE int32_t U_EXPORT2
ucol_next(UCollationElements *elems, UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ucol_previous(UCollationElements *elems, UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ucol_getMaxExpansion(const UCollationElements *elems, int32_t order);
U_STABLE void U_EXPORT2
ucol_setText( UCollationElements *elems,
             const UChar *text,
                   int32_t textLength,
                   UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ucol_getOffset(const UCollationElements *elems);
U_STABLE void U_EXPORT2
ucol_setOffset(UCollationElements *elems,
               int32_t offset,
               UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ucol_primaryOrder (int32_t order);
U_STABLE int32_t U_EXPORT2
ucol_secondaryOrder (int32_t order);
U_STABLE int32_t U_EXPORT2
ucol_tertiaryOrder (int32_t order);
struct UCharsetDetector;
typedef struct UCharsetDetector UCharsetDetector;
struct UCharsetMatch;
typedef struct UCharsetMatch UCharsetMatch;
U_STABLE UCharsetDetector * U_EXPORT2
ucsdet_open(UErrorCode *status);
U_STABLE void U_EXPORT2
ucsdet_close(UCharsetDetector *ucsd);
U_STABLE void U_EXPORT2
ucsdet_setText(UCharsetDetector *ucsd, const char *textIn, int32_t len, UErrorCode *status);
U_STABLE void U_EXPORT2
ucsdet_setDeclaredEncoding(UCharsetDetector *ucsd, const char *encoding, int32_t length, UErrorCode *status);
U_STABLE const UCharsetMatch * U_EXPORT2
ucsdet_detect(UCharsetDetector *ucsd, UErrorCode *status);
U_STABLE const UCharsetMatch ** U_EXPORT2
ucsdet_detectAll(UCharsetDetector *ucsd, int32_t *matchesFound, UErrorCode *status);
U_STABLE const char * U_EXPORT2
ucsdet_getName(const UCharsetMatch *ucsm, UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ucsdet_getConfidence(const UCharsetMatch *ucsm, UErrorCode *status);
U_STABLE const char * U_EXPORT2
ucsdet_getLanguage(const UCharsetMatch *ucsm, UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ucsdet_getUChars(const UCharsetMatch *ucsm,
                 UChar *buf, int32_t cap, UErrorCode *status);
U_STABLE UEnumeration * U_EXPORT2
ucsdet_getAllDetectableCharsets(const UCharsetDetector *ucsd, UErrorCode *status);
U_STABLE UBool U_EXPORT2
ucsdet_isInputFilterEnabled(const UCharsetDetector *ucsd);
U_STABLE UBool U_EXPORT2
ucsdet_enableInputFilter(UCharsetDetector *ucsd, UBool filter);
struct UDateIntervalFormat;
typedef struct UDateIntervalFormat UDateIntervalFormat;
U_STABLE UDateIntervalFormat* U_EXPORT2
udtitvfmt_open(const char* locale,
              const UChar* skeleton,
              int32_t skeletonLength,
              const UChar* tzID,
              int32_t tzIDLength,
              UErrorCode* status);
U_STABLE void U_EXPORT2
udtitvfmt_close(UDateIntervalFormat *formatter);
U_STABLE int32_t U_EXPORT2
udtitvfmt_format(const UDateIntervalFormat* formatter,
                UDate fromDate,
                UDate toDate,
                UChar* result,
                int32_t resultCapacity,
                UFieldPosition* position,
                UErrorCode* status);
typedef void *UDateTimePatternGenerator;
typedef enum UDateTimePatternField {
    UDATPG_ERA_FIELD,
    UDATPG_YEAR_FIELD,
    UDATPG_QUARTER_FIELD,
    UDATPG_MONTH_FIELD,
    UDATPG_WEEK_OF_YEAR_FIELD,
    UDATPG_WEEK_OF_MONTH_FIELD,
    UDATPG_WEEKDAY_FIELD,
    UDATPG_DAY_OF_YEAR_FIELD,
    UDATPG_DAY_OF_WEEK_IN_MONTH_FIELD,
    UDATPG_DAY_FIELD,
    UDATPG_DAYPERIOD_FIELD,
    UDATPG_HOUR_FIELD,
    UDATPG_MINUTE_FIELD,
    UDATPG_SECOND_FIELD,
    UDATPG_FRACTIONAL_SECOND_FIELD,
    UDATPG_ZONE_FIELD,
    UDATPG_FIELD_COUNT
} UDateTimePatternField;
typedef enum UDateTimePatternMatchOptions {
    UDATPG_MATCH_NO_OPTIONS = 0,
    UDATPG_MATCH_HOUR_FIELD_LENGTH = 1 << UDATPG_HOUR_FIELD,
    UDATPG_MATCH_ALL_FIELDS_LENGTH = (1 << UDATPG_FIELD_COUNT) - 1
} UDateTimePatternMatchOptions;
typedef enum UDateTimePatternConflict {
    UDATPG_NO_CONFLICT,
    UDATPG_BASE_CONFLICT,
    UDATPG_CONFLICT,
    UDATPG_CONFLICT_COUNT
} UDateTimePatternConflict;
U_STABLE UDateTimePatternGenerator * U_EXPORT2
udatpg_open(const char *locale, UErrorCode *pErrorCode);
U_STABLE UDateTimePatternGenerator * U_EXPORT2
udatpg_openEmpty(UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
udatpg_close(UDateTimePatternGenerator *dtpg);
U_STABLE UDateTimePatternGenerator * U_EXPORT2
udatpg_clone(const UDateTimePatternGenerator *dtpg, UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
udatpg_getBestPattern(UDateTimePatternGenerator *dtpg,
                      const UChar *skeleton, int32_t length,
                      UChar *bestPattern, int32_t capacity,
                      UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
udatpg_getBestPatternWithOptions(UDateTimePatternGenerator *dtpg,
                                 const UChar *skeleton, int32_t length,
                                 UDateTimePatternMatchOptions options,
                                 UChar *bestPattern, int32_t capacity,
                                 UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
udatpg_getSkeleton(UDateTimePatternGenerator *unusedDtpg,
                   const UChar *pattern, int32_t length,
                   UChar *skeleton, int32_t capacity,
                   UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
udatpg_getBaseSkeleton(UDateTimePatternGenerator *unusedDtpg,
                       const UChar *pattern, int32_t length,
                       UChar *baseSkeleton, int32_t capacity,
                       UErrorCode *pErrorCode);
U_STABLE UDateTimePatternConflict U_EXPORT2
udatpg_addPattern(UDateTimePatternGenerator *dtpg,
                  const UChar *pattern, int32_t patternLength,
                  UBool override,
                  UChar *conflictingPattern, int32_t capacity, int32_t *pLength,
                  UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
udatpg_setAppendItemFormat(UDateTimePatternGenerator *dtpg,
                           UDateTimePatternField field,
                           const UChar *value, int32_t length);
U_STABLE const UChar * U_EXPORT2
udatpg_getAppendItemFormat(const UDateTimePatternGenerator *dtpg,
                           UDateTimePatternField field,
                           int32_t *pLength);
U_STABLE void U_EXPORT2
udatpg_setAppendItemName(UDateTimePatternGenerator *dtpg,
                         UDateTimePatternField field,
                         const UChar *value, int32_t length);
U_STABLE const UChar * U_EXPORT2
udatpg_getAppendItemName(const UDateTimePatternGenerator *dtpg,
                         UDateTimePatternField field,
                         int32_t *pLength);
U_STABLE void U_EXPORT2
udatpg_setDateTimeFormat(const UDateTimePatternGenerator *dtpg,
                         const UChar *dtFormat, int32_t length);
U_STABLE const UChar * U_EXPORT2
udatpg_getDateTimeFormat(const UDateTimePatternGenerator *dtpg,
                         int32_t *pLength);
U_STABLE void U_EXPORT2
udatpg_setDecimal(UDateTimePatternGenerator *dtpg,
                  const UChar *decimal, int32_t length);
U_STABLE const UChar * U_EXPORT2
udatpg_getDecimal(const UDateTimePatternGenerator *dtpg,
                  int32_t *pLength);
U_STABLE int32_t U_EXPORT2
udatpg_replaceFieldTypes(UDateTimePatternGenerator *dtpg,
                         const UChar *pattern, int32_t patternLength,
                         const UChar *skeleton, int32_t skeletonLength,
                         UChar *dest, int32_t destCapacity,
                         UErrorCode *pErrorCode);
U_STABLE int32_t U_EXPORT2
udatpg_replaceFieldTypesWithOptions(UDateTimePatternGenerator *dtpg,
                                    const UChar *pattern, int32_t patternLength,
                                    const UChar *skeleton, int32_t skeletonLength,
                                    UDateTimePatternMatchOptions options,
                                    UChar *dest, int32_t destCapacity,
                                    UErrorCode *pErrorCode);
U_STABLE UEnumeration * U_EXPORT2
udatpg_openSkeletons(const UDateTimePatternGenerator *dtpg, UErrorCode *pErrorCode);
U_STABLE UEnumeration * U_EXPORT2
udatpg_openBaseSkeletons(const UDateTimePatternGenerator *dtpg, UErrorCode *pErrorCode);
U_STABLE const UChar * U_EXPORT2
udatpg_getPatternForSkeleton(const UDateTimePatternGenerator *dtpg,
                             const UChar *skeleton, int32_t skeletonLength,
                             int32_t *pLength);
struct UFieldPositionIterator;
typedef struct UFieldPositionIterator UFieldPositionIterator;
U_STABLE UFieldPositionIterator* U_EXPORT2
ufieldpositer_open(UErrorCode* status);
U_STABLE void U_EXPORT2
ufieldpositer_close(UFieldPositionIterator *fpositer);
U_STABLE int32_t U_EXPORT2
ufieldpositer_next(UFieldPositionIterator *fpositer,
                   int32_t *beginIndex, int32_t *endIndex);
typedef enum UFormattableType {
  UFMT_DATE = 0,
  UFMT_DOUBLE,
  UFMT_LONG,
  UFMT_STRING,
  UFMT_ARRAY,
  UFMT_INT64,
  UFMT_OBJECT,
  UFMT_COUNT
} UFormattableType;
typedef void *UFormattable;
U_STABLE UFormattable* U_EXPORT2
ufmt_open(UErrorCode* status);
U_STABLE void U_EXPORT2
ufmt_close(UFormattable* fmt);
U_STABLE UFormattableType U_EXPORT2
ufmt_getType(const UFormattable* fmt, UErrorCode *status);
U_STABLE UBool U_EXPORT2
ufmt_isNumeric(const UFormattable* fmt);
U_STABLE UDate U_EXPORT2
ufmt_getDate(const UFormattable* fmt, UErrorCode *status);
U_STABLE double U_EXPORT2
ufmt_getDouble(UFormattable* fmt, UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ufmt_getLong(UFormattable* fmt, UErrorCode *status);
U_STABLE int64_t U_EXPORT2
ufmt_getInt64(UFormattable* fmt, UErrorCode *status);
U_STABLE const void *U_EXPORT2
ufmt_getObject(const UFormattable* fmt, UErrorCode *status);
U_STABLE const UChar* U_EXPORT2
ufmt_getUChars(UFormattable* fmt, int32_t *len, UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ufmt_getArrayLength(const UFormattable* fmt, UErrorCode *status);
U_STABLE UFormattable * U_EXPORT2
ufmt_getArrayItemByIndex(UFormattable* fmt, int32_t n, UErrorCode *status);
U_STABLE const char * U_EXPORT2
ufmt_getDecNumChars(UFormattable *fmt, int32_t *len, UErrorCode *status);
enum UGender {
    UGENDER_MALE,
    UGENDER_FEMALE,
    UGENDER_OTHER
};
typedef enum UGender UGender;
struct UGenderInfo;
typedef struct UGenderInfo UGenderInfo;
U_STABLE const UGenderInfo* U_EXPORT2
ugender_getInstance(const char *locale, UErrorCode *status);
U_STABLE UGender U_EXPORT2
ugender_getListGender(const UGenderInfo* genderinfo, const UGender *genders, int32_t size, UErrorCode *status);
struct ULocaleData;
typedef struct ULocaleData ULocaleData;
typedef enum ULocaleDataExemplarSetType {
    ULOCDATA_ES_STANDARD=0,
    ULOCDATA_ES_AUXILIARY=1,
    ULOCDATA_ES_INDEX=2,
    ULOCDATA_ES_PUNCTUATION=3,
    ULOCDATA_ES_COUNT=4
} ULocaleDataExemplarSetType;
typedef enum ULocaleDataDelimiterType {
    ULOCDATA_QUOTATION_START = 0,
    ULOCDATA_QUOTATION_END = 1,
    ULOCDATA_ALT_QUOTATION_START = 2,
    ULOCDATA_ALT_QUOTATION_END = 3,
    ULOCDATA_DELIMITER_COUNT = 4
} ULocaleDataDelimiterType;
U_STABLE ULocaleData* U_EXPORT2
ulocdata_open(const char *localeID, UErrorCode *status);
U_STABLE void U_EXPORT2
ulocdata_close(ULocaleData *uld);
U_STABLE void U_EXPORT2
ulocdata_setNoSubstitute(ULocaleData *uld, UBool setting);
U_STABLE UBool U_EXPORT2
ulocdata_getNoSubstitute(ULocaleData *uld);
U_STABLE USet* U_EXPORT2
ulocdata_getExemplarSet(ULocaleData *uld, USet *fillIn,
                        uint32_t options, ULocaleDataExemplarSetType extype, UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ulocdata_getDelimiter(ULocaleData *uld, ULocaleDataDelimiterType type, UChar *result, int32_t resultLength, UErrorCode *status);
typedef enum UMeasurementSystem {
    UMS_SI,
    UMS_US,
    UMS_UK,
    UMS_LIMIT
} UMeasurementSystem;
U_STABLE UMeasurementSystem U_EXPORT2
ulocdata_getMeasurementSystem(const char *localeID, UErrorCode *status);
U_STABLE void U_EXPORT2
ulocdata_getPaperSize(const char *localeID, int32_t *height, int32_t *width, UErrorCode *status);
U_STABLE void U_EXPORT2
ulocdata_getCLDRVersion(UVersionInfo versionArray, UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ulocdata_getLocaleDisplayPattern(ULocaleData *uld,
                                 UChar *pattern,
                                 int32_t patternCapacity,
                                 UErrorCode *status);
U_STABLE int32_t U_EXPORT2
ulocdata_getLocaleSeparator(ULocaleData *uld,
                            UChar *separator,
                            int32_t separatorCapacity,
                            UErrorCode *status);
#include <stdarg.h>
U_STABLE int32_t U_EXPORT2
u_formatMessage(const char *locale,
                 const UChar *pattern,
                int32_t patternLength,
                UChar *result,
                int32_t resultLength,
                UErrorCode *status,
                ...);
U_STABLE int32_t U_EXPORT2
u_vformatMessage( const char *locale,
                    const UChar *pattern,
                    int32_t patternLength,
                    UChar *result,
                    int32_t resultLength,
                    va_list ap,
                    UErrorCode *status);
U_STABLE void U_EXPORT2
u_parseMessage( const char *locale,
                const UChar *pattern,
                int32_t patternLength,
                const UChar *source,
                int32_t sourceLength,
                UErrorCode *status,
                ...);
U_STABLE void U_EXPORT2
u_vparseMessage(const char *locale,
                const UChar *pattern,
                int32_t patternLength,
                const UChar *source,
                int32_t sourceLength,
                va_list ap,
                UErrorCode *status);
U_STABLE int32_t U_EXPORT2
u_formatMessageWithError( const char *locale,
                            const UChar *pattern,
                            int32_t patternLength,
                            UChar *result,
                            int32_t resultLength,
                            UParseError *parseError,
                            UErrorCode *status,
                            ...);
U_STABLE int32_t U_EXPORT2
u_vformatMessageWithError( const char *locale,
                            const UChar *pattern,
                            int32_t patternLength,
                            UChar *result,
                            int32_t resultLength,
                            UParseError* parseError,
                            va_list ap,
                            UErrorCode *status);
U_STABLE void U_EXPORT2
u_parseMessageWithError(const char *locale,
                        const UChar *pattern,
                        int32_t patternLength,
                        const UChar *source,
                        int32_t sourceLength,
                        UParseError *parseError,
                        UErrorCode *status,
                        ...);
U_STABLE void U_EXPORT2
u_vparseMessageWithError(const char *locale,
                         const UChar *pattern,
                         int32_t patternLength,
                         const UChar *source,
                         int32_t sourceLength,
                         va_list ap,
                         UParseError *parseError,
                         UErrorCode* status);
typedef void* UMessageFormat;
U_STABLE UMessageFormat* U_EXPORT2
umsg_open( const UChar *pattern,
            int32_t patternLength,
            const char *locale,
            UParseError *parseError,
            UErrorCode *status);
U_STABLE void U_EXPORT2
umsg_close(UMessageFormat* format);
U_STABLE UMessageFormat U_EXPORT2
umsg_clone(const UMessageFormat *fmt,
           UErrorCode *status);
U_STABLE void U_EXPORT2
umsg_setLocale(UMessageFormat *fmt,
               const char* locale);
U_STABLE const char* U_EXPORT2
umsg_getLocale(const UMessageFormat *fmt);
U_STABLE void U_EXPORT2
umsg_applyPattern( UMessageFormat *fmt,
                   const UChar* pattern,
                   int32_t patternLength,
                   UParseError* parseError,
                   UErrorCode* status);
U_STABLE int32_t U_EXPORT2
umsg_toPattern(const UMessageFormat *fmt,
               UChar* result,
               int32_t resultLength,
               UErrorCode* status);
U_STABLE int32_t U_EXPORT2
umsg_format( const UMessageFormat *fmt,
                UChar *result,
                int32_t resultLength,
                UErrorCode *status,
                ...);
U_STABLE int32_t U_EXPORT2
umsg_vformat( const UMessageFormat *fmt,
                UChar *result,
                int32_t resultLength,
                va_list ap,
                UErrorCode *status);
U_STABLE void U_EXPORT2
umsg_parse( const UMessageFormat *fmt,
            const UChar *source,
            int32_t sourceLength,
            int32_t *count,
            UErrorCode *status,
            ...);
U_STABLE void U_EXPORT2
umsg_vparse(const UMessageFormat *fmt,
            const UChar *source,
            int32_t sourceLength,
            int32_t *count,
            va_list ap,
            UErrorCode *status);
U_STABLE int32_t U_EXPORT2
umsg_autoQuoteApostrophe(const UChar* pattern,
                         int32_t patternLength,
                         UChar* dest,
                         int32_t destCapacity,
                         UErrorCode* ec);
typedef void* UNumberFormat;
typedef enum UNumberFormatStyle {
    UNUM_PATTERN_DECIMAL=0,
    UNUM_DECIMAL=1,
    UNUM_CURRENCY=2,
    UNUM_PERCENT=3,
    UNUM_SCIENTIFIC=4,
    UNUM_SPELLOUT=5,
    UNUM_ORDINAL=6,
    UNUM_DURATION=7,
    UNUM_NUMBERING_SYSTEM=8,
    UNUM_PATTERN_RULEBASED=9,
    UNUM_CURRENCY_ISO=10,
    UNUM_CURRENCY_PLURAL=11,
    UNUM_CURRENCY_ACCOUNTING=12,
    UNUM_CASH_CURRENCY=13,
    UNUM_FORMAT_STYLE_COUNT=17,
    UNUM_DEFAULT = UNUM_DECIMAL,
    UNUM_IGNORE = UNUM_PATTERN_DECIMAL
} UNumberFormatStyle;
typedef enum UNumberFormatRoundingMode {
    UNUM_ROUND_CEILING,
    UNUM_ROUND_FLOOR,
    UNUM_ROUND_DOWN,
    UNUM_ROUND_UP,
    UNUM_ROUND_HALFEVEN,
    UNUM_ROUND_HALFDOWN = UNUM_ROUND_HALFEVEN + 1,
    UNUM_ROUND_HALFUP,
    UNUM_ROUND_UNNECESSARY
} UNumberFormatRoundingMode;
typedef enum UNumberFormatPadPosition {
    UNUM_PAD_BEFORE_PREFIX,
    UNUM_PAD_AFTER_PREFIX,
    UNUM_PAD_BEFORE_SUFFIX,
    UNUM_PAD_AFTER_SUFFIX
} UNumberFormatPadPosition;
typedef enum UNumberCompactStyle {
  UNUM_SHORT,
  UNUM_LONG
} UNumberCompactStyle;
enum UCurrencySpacing {
    UNUM_CURRENCY_MATCH,
    UNUM_CURRENCY_SURROUNDING_MATCH,
    UNUM_CURRENCY_INSERT,
    UNUM_CURRENCY_SPACING_COUNT
};
typedef enum UCurrencySpacing UCurrencySpacing;
typedef enum UNumberFormatFields {
    UNUM_INTEGER_FIELD,
    UNUM_FRACTION_FIELD,
    UNUM_DECIMAL_SEPARATOR_FIELD,
    UNUM_EXPONENT_SYMBOL_FIELD,
    UNUM_EXPONENT_SIGN_FIELD,
    UNUM_EXPONENT_FIELD,
    UNUM_GROUPING_SEPARATOR_FIELD,
    UNUM_CURRENCY_FIELD,
    UNUM_PERCENT_FIELD,
    UNUM_PERMILL_FIELD,
    UNUM_SIGN_FIELD,
    UNUM_FIELD_COUNT
} UNumberFormatFields;
U_STABLE UNumberFormat* U_EXPORT2
unum_open( UNumberFormatStyle style,
            const UChar* pattern,
            int32_t patternLength,
            const char* locale,
            UParseError* parseErr,
            UErrorCode* status);
U_STABLE void U_EXPORT2
unum_close(UNumberFormat* fmt);
U_STABLE UNumberFormat* U_EXPORT2
unum_clone(const UNumberFormat *fmt,
       UErrorCode *status);
U_STABLE int32_t U_EXPORT2
unum_format( const UNumberFormat* fmt,
        int32_t number,
        UChar* result,
        int32_t resultLength,
        UFieldPosition *pos,
        UErrorCode* status);
U_STABLE int32_t U_EXPORT2
unum_formatInt64(const UNumberFormat *fmt,
        int64_t number,
        UChar* result,
        int32_t resultLength,
        UFieldPosition *pos,
        UErrorCode* status);
U_STABLE int32_t U_EXPORT2
unum_formatDouble( const UNumberFormat* fmt,
            double number,
            UChar* result,
            int32_t resultLength,
            UFieldPosition *pos,
            UErrorCode* status);
U_STABLE int32_t U_EXPORT2
unum_formatDecimal( const UNumberFormat* fmt,
            const char * number,
            int32_t length,
            UChar* result,
            int32_t resultLength,
            UFieldPosition *pos,
            UErrorCode* status);
U_STABLE int32_t U_EXPORT2
unum_formatDoubleCurrency(const UNumberFormat* fmt,
                          double number,
                          UChar* currency,
                          UChar* result,
                          int32_t resultLength,
                          UFieldPosition* pos,
                          UErrorCode* status);
U_STABLE int32_t U_EXPORT2
unum_formatUFormattable(const UNumberFormat* fmt,
                        const UFormattable *number,
                        UChar *result,
                        int32_t resultLength,
                        UFieldPosition *pos,
                        UErrorCode *status);
U_STABLE int32_t U_EXPORT2
unum_parse( const UNumberFormat* fmt,
        const UChar* text,
        int32_t textLength,
        int32_t *parsePos ,
        UErrorCode *status);
U_STABLE int64_t U_EXPORT2
unum_parseInt64(const UNumberFormat* fmt,
        const UChar* text,
        int32_t textLength,
        int32_t *parsePos ,
        UErrorCode *status);
U_STABLE double U_EXPORT2
unum_parseDouble( const UNumberFormat* fmt,
            const UChar* text,
            int32_t textLength,
            int32_t *parsePos ,
            UErrorCode *status);
U_STABLE int32_t U_EXPORT2
unum_parseDecimal(const UNumberFormat* fmt,
                 const UChar* text,
                         int32_t textLength,
                         int32_t *parsePos ,
                         char *outBuf,
                         int32_t outBufLength,
                         UErrorCode *status);
U_STABLE double U_EXPORT2
unum_parseDoubleCurrency(const UNumberFormat* fmt,
                         const UChar* text,
                         int32_t textLength,
                         int32_t* parsePos,
                         UChar* currency,
                         UErrorCode* status);
U_STABLE UFormattable* U_EXPORT2
unum_parseToUFormattable(const UNumberFormat* fmt,
                         UFormattable *result,
                         const UChar* text,
                         int32_t textLength,
                         int32_t* parsePos,
                         UErrorCode* status);
U_STABLE void U_EXPORT2
unum_applyPattern( UNumberFormat *format,
                            UBool localized,
                    const UChar *pattern,
                            int32_t patternLength,
                            UParseError *parseError,
                            UErrorCode *status
                                    );
U_STABLE const char* U_EXPORT2
unum_getAvailable(int32_t localeIndex);
U_STABLE int32_t U_EXPORT2
unum_countAvailable(void);
typedef enum UNumberFormatAttribute {
  UNUM_PARSE_INT_ONLY,
  UNUM_GROUPING_USED,
  UNUM_DECIMAL_ALWAYS_SHOWN,
  UNUM_MAX_INTEGER_DIGITS,
  UNUM_MIN_INTEGER_DIGITS,
  UNUM_INTEGER_DIGITS,
  UNUM_MAX_FRACTION_DIGITS,
  UNUM_MIN_FRACTION_DIGITS,
  UNUM_FRACTION_DIGITS,
  UNUM_MULTIPLIER,
  UNUM_GROUPING_SIZE,
  UNUM_ROUNDING_MODE,
  UNUM_ROUNDING_INCREMENT,
  UNUM_FORMAT_WIDTH,
  UNUM_PADDING_POSITION,
  UNUM_SECONDARY_GROUPING_SIZE,
  UNUM_SIGNIFICANT_DIGITS_USED,
  UNUM_MIN_SIGNIFICANT_DIGITS,
  UNUM_MAX_SIGNIFICANT_DIGITS,
  UNUM_LENIENT_PARSE,
  UNUM_SCALE = 21,
  UNUM_CURRENCY_USAGE = 23,
  UNUM_MAX_NONBOOLEAN_ATTRIBUTE = 0x0FFF,
  UNUM_FORMAT_FAIL_IF_MORE_THAN_MAX_DIGITS = 0x1000,
  UNUM_PARSE_NO_EXPONENT,
  UNUM_PARSE_DECIMAL_MARK_REQUIRED = 0x1002,
  UNUM_LIMIT_BOOLEAN_ATTRIBUTE = 0x1003
} UNumberFormatAttribute;
U_STABLE int32_t U_EXPORT2
unum_getAttribute(const UNumberFormat* fmt,
          UNumberFormatAttribute attr);
U_STABLE void U_EXPORT2
unum_setAttribute( UNumberFormat* fmt,
            UNumberFormatAttribute attr,
            int32_t newValue);
U_STABLE double U_EXPORT2
unum_getDoubleAttribute(const UNumberFormat* fmt,
          UNumberFormatAttribute attr);
U_STABLE void U_EXPORT2
unum_setDoubleAttribute( UNumberFormat* fmt,
            UNumberFormatAttribute attr,
            double newValue);
typedef enum UNumberFormatTextAttribute {
  UNUM_POSITIVE_PREFIX,
  UNUM_POSITIVE_SUFFIX,
  UNUM_NEGATIVE_PREFIX,
  UNUM_NEGATIVE_SUFFIX,
  UNUM_PADDING_CHARACTER,
  UNUM_CURRENCY_CODE,
  UNUM_DEFAULT_RULESET,
  UNUM_PUBLIC_RULESETS
} UNumberFormatTextAttribute;
U_STABLE int32_t U_EXPORT2
unum_getTextAttribute( const UNumberFormat* fmt,
            UNumberFormatTextAttribute tag,
            UChar* result,
            int32_t resultLength,
            UErrorCode* status);
U_STABLE void U_EXPORT2
unum_setTextAttribute( UNumberFormat* fmt,
            UNumberFormatTextAttribute tag,
            const UChar* newValue,
            int32_t newValueLength,
            UErrorCode *status);
U_STABLE int32_t U_EXPORT2
unum_toPattern( const UNumberFormat* fmt,
        UBool isPatternLocalized,
        UChar* result,
        int32_t resultLength,
        UErrorCode* status);
typedef enum UNumberFormatSymbol {
  UNUM_DECIMAL_SEPARATOR_SYMBOL = 0,
  UNUM_GROUPING_SEPARATOR_SYMBOL = 1,
  UNUM_PATTERN_SEPARATOR_SYMBOL = 2,
  UNUM_PERCENT_SYMBOL = 3,
  UNUM_ZERO_DIGIT_SYMBOL = 4,
  UNUM_DIGIT_SYMBOL = 5,
  UNUM_MINUS_SIGN_SYMBOL = 6,
  UNUM_PLUS_SIGN_SYMBOL = 7,
  UNUM_CURRENCY_SYMBOL = 8,
  UNUM_INTL_CURRENCY_SYMBOL = 9,
  UNUM_MONETARY_SEPARATOR_SYMBOL = 10,
  UNUM_EXPONENTIAL_SYMBOL = 11,
  UNUM_PERMILL_SYMBOL = 12,
  UNUM_PAD_ESCAPE_SYMBOL = 13,
  UNUM_INFINITY_SYMBOL = 14,
  UNUM_NAN_SYMBOL = 15,
  UNUM_SIGNIFICANT_DIGIT_SYMBOL = 16,
  UNUM_MONETARY_GROUPING_SEPARATOR_SYMBOL = 17,
  UNUM_ONE_DIGIT_SYMBOL = 18,
  UNUM_TWO_DIGIT_SYMBOL = 19,
  UNUM_THREE_DIGIT_SYMBOL = 20,
  UNUM_FOUR_DIGIT_SYMBOL = 21,
  UNUM_FIVE_DIGIT_SYMBOL = 22,
  UNUM_SIX_DIGIT_SYMBOL = 23,
  UNUM_SEVEN_DIGIT_SYMBOL = 24,
  UNUM_EIGHT_DIGIT_SYMBOL = 25,
  UNUM_NINE_DIGIT_SYMBOL = 26,
  UNUM_EXPONENT_MULTIPLICATION_SYMBOL = 27,
  UNUM_FORMAT_SYMBOL_COUNT = 28
} UNumberFormatSymbol;
U_STABLE int32_t U_EXPORT2
unum_getSymbol(const UNumberFormat *fmt,
               UNumberFormatSymbol symbol,
               UChar *buffer,
               int32_t size,
               UErrorCode *status);
U_STABLE void U_EXPORT2
unum_setSymbol(UNumberFormat *fmt,
               UNumberFormatSymbol symbol,
               const UChar *value,
               int32_t length,
               UErrorCode *status);
U_STABLE const char* U_EXPORT2
unum_getLocaleByType(const UNumberFormat *fmt,
                     ULocDataLocaleType type,
                     UErrorCode* status);
U_STABLE void U_EXPORT2
unum_setContext(UNumberFormat* fmt, UDisplayContext value, UErrorCode* status);
U_STABLE UDisplayContext U_EXPORT2
unum_getContext(const UNumberFormat *fmt, UDisplayContextType type, UErrorCode* status);
typedef void* UDateFormat;
typedef enum UDateFormatStyle {
    UDAT_FULL,
    UDAT_LONG,
    UDAT_MEDIUM,
    UDAT_SHORT,
    UDAT_DEFAULT = UDAT_MEDIUM,
    UDAT_RELATIVE = (1 << 7),
    UDAT_FULL_RELATIVE = UDAT_FULL | UDAT_RELATIVE,
    UDAT_LONG_RELATIVE = UDAT_LONG | UDAT_RELATIVE,
    UDAT_MEDIUM_RELATIVE = UDAT_MEDIUM | UDAT_RELATIVE,
    UDAT_SHORT_RELATIVE = UDAT_SHORT | UDAT_RELATIVE,
    UDAT_NONE = -1,
    UDAT_PATTERN = -2,
} UDateFormatStyle;
typedef enum UDateFormatField {
    UDAT_ERA_FIELD = 0,
    UDAT_YEAR_FIELD = 1,
    UDAT_MONTH_FIELD = 2,
    UDAT_DATE_FIELD = 3,
    UDAT_HOUR_OF_DAY1_FIELD = 4,
    UDAT_HOUR_OF_DAY0_FIELD = 5,
    UDAT_MINUTE_FIELD = 6,
    UDAT_SECOND_FIELD = 7,
    UDAT_FRACTIONAL_SECOND_FIELD = 8,
    UDAT_DAY_OF_WEEK_FIELD = 9,
    UDAT_DAY_OF_YEAR_FIELD = 10,
    UDAT_DAY_OF_WEEK_IN_MONTH_FIELD = 11,
    UDAT_WEEK_OF_YEAR_FIELD = 12,
    UDAT_WEEK_OF_MONTH_FIELD = 13,
    UDAT_AM_PM_FIELD = 14,
    UDAT_HOUR1_FIELD = 15,
    UDAT_HOUR0_FIELD = 16,
    UDAT_TIMEZONE_FIELD = 17,
    UDAT_YEAR_WOY_FIELD = 18,
    UDAT_DOW_LOCAL_FIELD = 19,
    UDAT_EXTENDED_YEAR_FIELD = 20,
    UDAT_JULIAN_DAY_FIELD = 21,
    UDAT_MILLISECONDS_IN_DAY_FIELD = 22,
    UDAT_TIMEZONE_RFC_FIELD = 23,
    UDAT_TIMEZONE_GENERIC_FIELD = 24,
    UDAT_STANDALONE_DAY_FIELD = 25,
    UDAT_STANDALONE_MONTH_FIELD = 26,
    UDAT_QUARTER_FIELD = 27,
    UDAT_STANDALONE_QUARTER_FIELD = 28,
    UDAT_TIMEZONE_SPECIAL_FIELD = 29,
    UDAT_YEAR_NAME_FIELD = 30,
    UDAT_TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD = 31,
    UDAT_TIMEZONE_ISO_FIELD = 32,
    UDAT_TIMEZONE_ISO_LOCAL_FIELD = 33,
    UDAT_FIELD_COUNT = 38
} UDateFormatField;
U_STABLE UCalendarDateFields U_EXPORT2
udat_toCalendarDateField(UDateFormatField field);
U_STABLE UDateFormat* U_EXPORT2
udat_open(UDateFormatStyle timeStyle,
          UDateFormatStyle dateStyle,
          const char *locale,
          const UChar *tzID,
          int32_t tzIDLength,
          const UChar *pattern,
          int32_t patternLength,
          UErrorCode *status);
U_STABLE void U_EXPORT2
udat_close(UDateFormat* format);
typedef enum UDateFormatBooleanAttribute {
    UDAT_PARSE_ALLOW_WHITESPACE = 0,
    UDAT_PARSE_ALLOW_NUMERIC = 1,
    UDAT_BOOLEAN_ATTRIBUTE_COUNT = 4
} UDateFormatBooleanAttribute;
U_STABLE UBool U_EXPORT2
udat_getBooleanAttribute(const UDateFormat* fmt, UDateFormatBooleanAttribute attr, UErrorCode* status);
U_STABLE void U_EXPORT2
udat_setBooleanAttribute(UDateFormat *fmt, UDateFormatBooleanAttribute attr, UBool newValue, UErrorCode* status);
U_STABLE UDateFormat* U_EXPORT2
udat_clone(const UDateFormat *fmt,
       UErrorCode *status);
U_STABLE int32_t U_EXPORT2
udat_format( const UDateFormat* format,
                        UDate dateToFormat,
                        UChar* result,
                        int32_t resultLength,
                        UFieldPosition* position,
                        UErrorCode* status);
U_STABLE int32_t U_EXPORT2
udat_formatCalendar( const UDateFormat* format,
                        UCalendar* calendar,
                        UChar* result,
                        int32_t capacity,
                        UFieldPosition* position,
                        UErrorCode* status);
U_STABLE int32_t U_EXPORT2
udat_formatForFields( const UDateFormat* format,
                        UDate dateToFormat,
                        UChar* result,
                        int32_t resultLength,
                        UFieldPositionIterator* fpositer,
                        UErrorCode* status);
U_STABLE int32_t U_EXPORT2
udat_formatCalendarForFields( const UDateFormat* format,
                        UCalendar* calendar,
                        UChar* result,
                        int32_t capacity,
                        UFieldPositionIterator* fpositer,
                        UErrorCode* status);
U_STABLE UDate U_EXPORT2
udat_parse(const UDateFormat* format,
           const UChar* text,
                    int32_t textLength,
                    int32_t *parsePos,
                    UErrorCode *status);
U_STABLE void U_EXPORT2
udat_parseCalendar(const UDateFormat* format,
                            UCalendar* calendar,
                   const UChar* text,
                            int32_t textLength,
                            int32_t *parsePos,
                            UErrorCode *status);
U_STABLE UBool U_EXPORT2
udat_isLenient(const UDateFormat* fmt);
U_STABLE void U_EXPORT2
udat_setLenient( UDateFormat* fmt,
                    UBool isLenient);
U_STABLE const UCalendar* U_EXPORT2
udat_getCalendar(const UDateFormat* fmt);
U_STABLE void U_EXPORT2
udat_setCalendar( UDateFormat* fmt,
                    const UCalendar* calendarToSet);
U_STABLE const UNumberFormat* U_EXPORT2
udat_getNumberFormat(const UDateFormat* fmt);
U_STABLE const UNumberFormat* U_EXPORT2
udat_getNumberFormatForField(const UDateFormat* fmt, UChar field);
U_STABLE void U_EXPORT2
udat_adoptNumberFormatForFields( UDateFormat* fmt,
                            const UChar* fields,
                                  UNumberFormat* numberFormatToSet,
                                  UErrorCode* status);
U_STABLE void U_EXPORT2
udat_setNumberFormat( UDateFormat* fmt,
                        const UNumberFormat* numberFormatToSet);
U_STABLE void U_EXPORT2
udat_adoptNumberFormat( UDateFormat* fmt,
                                   UNumberFormat* numberFormatToAdopt);
U_STABLE const char* U_EXPORT2
udat_getAvailable(int32_t localeIndex);
U_STABLE int32_t U_EXPORT2
udat_countAvailable(void);
U_STABLE UDate U_EXPORT2
udat_get2DigitYearStart( const UDateFormat *fmt,
                                    UErrorCode *status);
U_STABLE void U_EXPORT2
udat_set2DigitYearStart( UDateFormat *fmt,
                            UDate d,
                            UErrorCode *status);
U_STABLE int32_t U_EXPORT2
udat_toPattern( const UDateFormat *fmt,
                        UBool localized,
                        UChar *result,
                        int32_t resultLength,
                        UErrorCode *status);
U_STABLE void U_EXPORT2
udat_applyPattern( UDateFormat *format,
                            UBool localized,
                    const UChar *pattern,
                            int32_t patternLength);
typedef enum UDateFormatSymbolType {
    UDAT_ERAS,
    UDAT_MONTHS,
    UDAT_SHORT_MONTHS,
    UDAT_WEEKDAYS,
    UDAT_SHORT_WEEKDAYS,
    UDAT_AM_PMS,
    UDAT_LOCALIZED_CHARS,
    UDAT_ERA_NAMES,
    UDAT_NARROW_MONTHS,
    UDAT_NARROW_WEEKDAYS,
    UDAT_STANDALONE_MONTHS,
    UDAT_STANDALONE_SHORT_MONTHS,
    UDAT_STANDALONE_NARROW_MONTHS,
    UDAT_STANDALONE_WEEKDAYS,
    UDAT_STANDALONE_SHORT_WEEKDAYS,
    UDAT_STANDALONE_NARROW_WEEKDAYS,
    UDAT_QUARTERS,
    UDAT_SHORT_QUARTERS,
    UDAT_STANDALONE_QUARTERS,
    UDAT_STANDALONE_SHORT_QUARTERS,
    UDAT_SHORTER_WEEKDAYS,
    UDAT_STANDALONE_SHORTER_WEEKDAYS,
    UDAT_CYCLIC_YEARS_WIDE,
    UDAT_CYCLIC_YEARS_ABBREVIATED,
    UDAT_CYCLIC_YEARS_NARROW,
    UDAT_ZODIAC_NAMES_WIDE,
    UDAT_ZODIAC_NAMES_ABBREVIATED,
    UDAT_ZODIAC_NAMES_NARROW
} UDateFormatSymbolType;
struct UDateFormatSymbols;
typedef struct UDateFormatSymbols UDateFormatSymbols;
U_STABLE int32_t U_EXPORT2
udat_getSymbols(const UDateFormat *fmt,
                        UDateFormatSymbolType type,
                        int32_t symbolIndex,
                        UChar *result,
                        int32_t resultLength,
                        UErrorCode *status);
U_STABLE int32_t U_EXPORT2
udat_countSymbols( const UDateFormat *fmt,
                            UDateFormatSymbolType type);
U_STABLE void U_EXPORT2
udat_setSymbols( UDateFormat *format,
                    UDateFormatSymbolType type,
                    int32_t symbolIndex,
                    UChar *value,
                    int32_t valueLength,
                    UErrorCode *status);
U_STABLE const char* U_EXPORT2
udat_getLocaleByType(const UDateFormat *fmt,
                     ULocDataLocaleType type,
                     UErrorCode* status);
U_DRAFT void U_EXPORT2
udat_setContext(UDateFormat* fmt, UDisplayContext value, UErrorCode* status);
U_STABLE UDisplayContext U_EXPORT2
udat_getContext(const UDateFormat* fmt, UDisplayContextType type, UErrorCode* status);
enum UMeasureFormatWidth {
    UMEASFMT_WIDTH_WIDE,
    UMEASFMT_WIDTH_SHORT,
    UMEASFMT_WIDTH_NARROW,
    UMEASFMT_WIDTH_NUMERIC,
    UMEASFMT_WIDTH_COUNT = 4
};
typedef enum UMeasureFormatWidth UMeasureFormatWidth;
struct UNumberingSystem;
typedef struct UNumberingSystem UNumberingSystem;
U_STABLE UNumberingSystem * U_EXPORT2
unumsys_open(const char *locale, UErrorCode *status);
U_STABLE UNumberingSystem * U_EXPORT2
unumsys_openByName(const char *name, UErrorCode *status);
U_STABLE void U_EXPORT2
unumsys_close(UNumberingSystem *unumsys);
U_STABLE UEnumeration * U_EXPORT2
unumsys_openAvailableNames(UErrorCode *status);
U_STABLE const char * U_EXPORT2
unumsys_getName(const UNumberingSystem *unumsys);
U_STABLE UBool U_EXPORT2
unumsys_isAlgorithmic(const UNumberingSystem *unumsys);
U_STABLE int32_t U_EXPORT2
unumsys_getRadix(const UNumberingSystem *unumsys);
U_STABLE int32_t U_EXPORT2
unumsys_getDescription(const UNumberingSystem *unumsys, UChar *result,
                       int32_t resultLength, UErrorCode *status);
enum UPluralType {
    UPLURAL_TYPE_CARDINAL,
    UPLURAL_TYPE_ORDINAL,
    UPLURAL_TYPE_COUNT
};
typedef enum UPluralType UPluralType;
struct UPluralRules;
typedef struct UPluralRules UPluralRules;
U_STABLE UPluralRules* U_EXPORT2
uplrules_open(const char *locale, UErrorCode *status);
U_DRAFT UPluralRules* U_EXPORT2
uplrules_openForType(const char *locale, UPluralType type, UErrorCode *status);
U_STABLE void U_EXPORT2
uplrules_close(UPluralRules *uplrules);
U_STABLE int32_t U_EXPORT2
uplrules_select(const UPluralRules *uplrules,
               double number,
               UChar *keyword, int32_t capacity,
               UErrorCode *status);
U_CDECL_BEGIN
struct UHashtable;
typedef struct UHashtable UHashtable;
U_CDECL_END
struct URegularExpression;
typedef struct URegularExpression URegularExpression;
typedef enum URegexpFlag{
    UREGEX_CASE_INSENSITIVE = 2,
    UREGEX_COMMENTS = 4,
    UREGEX_DOTALL = 32,
    UREGEX_LITERAL = 16,
    UREGEX_MULTILINE = 8,
    UREGEX_UNIX_LINES = 1,
    UREGEX_UWORD = 256,
     UREGEX_ERROR_ON_UNKNOWN_ESCAPES = 512
} URegexpFlag;
U_STABLE URegularExpression * U_EXPORT2
uregex_open( const UChar *pattern,
                    int32_t patternLength,
                    uint32_t flags,
                    UParseError *pe,
                    UErrorCode *status);
U_STABLE URegularExpression * U_EXPORT2
uregex_openUText(UText *pattern,
                 uint32_t flags,
                 UParseError *pe,
                 UErrorCode *status);
U_STABLE URegularExpression * U_EXPORT2
uregex_openC( const char *pattern,
                    uint32_t flags,
                    UParseError *pe,
                    UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_close(URegularExpression *regexp);
U_STABLE URegularExpression * U_EXPORT2
uregex_clone(const URegularExpression *regexp, UErrorCode *status);
U_STABLE const UChar * U_EXPORT2
uregex_pattern(const URegularExpression *regexp,
                     int32_t *patLength,
                     UErrorCode *status);
U_STABLE UText * U_EXPORT2
uregex_patternUText(const URegularExpression *regexp,
                          UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_flags(const URegularExpression *regexp,
                    UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_setText(URegularExpression *regexp,
               const UChar *text,
               int32_t textLength,
               UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_setUText(URegularExpression *regexp,
                UText *text,
                UErrorCode *status);
U_STABLE const UChar * U_EXPORT2
uregex_getText(URegularExpression *regexp,
               int32_t *textLength,
               UErrorCode *status);
U_STABLE UText * U_EXPORT2
uregex_getUText(URegularExpression *regexp,
                UText *dest,
                UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_refreshUText(URegularExpression *regexp,
                    UText *text,
                    UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregex_matches(URegularExpression *regexp,
                int32_t startIndex,
                UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregex_matches64(URegularExpression *regexp,
                 int64_t startIndex,
                 UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregex_lookingAt(URegularExpression *regexp,
                 int32_t startIndex,
                 UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregex_lookingAt64(URegularExpression *regexp,
                   int64_t startIndex,
                   UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregex_find(URegularExpression *regexp,
            int32_t startIndex,
            UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregex_find64(URegularExpression *regexp,
              int64_t startIndex,
              UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregex_findNext(URegularExpression *regexp,
                UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_groupCount(URegularExpression *regexp,
                  UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_groupNumberFromName(URegularExpression *regexp,
                           const UChar *groupName,
                           int32_t nameLength,
                           UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_groupNumberFromCName(URegularExpression *regexp,
                            const char *groupName,
                            int32_t nameLength,
                            UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_group(URegularExpression *regexp,
             int32_t groupNum,
             UChar *dest,
             int32_t destCapacity,
             UErrorCode *status);
U_STABLE UText * U_EXPORT2
uregex_groupUText(URegularExpression *regexp,
                  int32_t groupNum,
                  UText *dest,
                  int64_t *groupLength,
                  UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_start(URegularExpression *regexp,
             int32_t groupNum,
             UErrorCode *status);
U_STABLE int64_t U_EXPORT2
uregex_start64(URegularExpression *regexp,
               int32_t groupNum,
               UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_end(URegularExpression *regexp,
           int32_t groupNum,
           UErrorCode *status);
U_STABLE int64_t U_EXPORT2
uregex_end64(URegularExpression *regexp,
             int32_t groupNum,
             UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_reset(URegularExpression *regexp,
             int32_t index,
             UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_reset64(URegularExpression *regexp,
               int64_t index,
               UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_setRegion(URegularExpression *regexp,
                 int32_t regionStart,
                 int32_t regionLimit,
                 UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_setRegion64(URegularExpression *regexp,
                 int64_t regionStart,
                 int64_t regionLimit,
                 UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_setRegionAndStart(URegularExpression *regexp,
                 int64_t regionStart,
                 int64_t regionLimit,
                 int64_t startIndex,
                 UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_regionStart(const URegularExpression *regexp,
                          UErrorCode *status);
U_STABLE int64_t U_EXPORT2
uregex_regionStart64(const URegularExpression *regexp,
                            UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_regionEnd(const URegularExpression *regexp,
                        UErrorCode *status);
U_STABLE int64_t U_EXPORT2
uregex_regionEnd64(const URegularExpression *regexp,
                          UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregex_hasTransparentBounds(const URegularExpression *regexp,
                                   UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_useTransparentBounds(URegularExpression *regexp,
                            UBool b,
                            UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregex_hasAnchoringBounds(const URegularExpression *regexp,
                                 UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_useAnchoringBounds(URegularExpression *regexp,
                          UBool b,
                          UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregex_hitEnd(const URegularExpression *regexp,
                     UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregex_requireEnd(const URegularExpression *regexp,
                         UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_replaceAll(URegularExpression *regexp,
                  const UChar *replacementText,
                  int32_t replacementLength,
                  UChar *destBuf,
                  int32_t destCapacity,
                  UErrorCode *status);
U_STABLE UText * U_EXPORT2
uregex_replaceAllUText(URegularExpression *regexp,
                       UText *replacement,
                       UText *dest,
                       UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_replaceFirst(URegularExpression *regexp,
                    const UChar *replacementText,
                    int32_t replacementLength,
                    UChar *destBuf,
                    int32_t destCapacity,
                    UErrorCode *status);
U_STABLE UText * U_EXPORT2
uregex_replaceFirstUText(URegularExpression *regexp,
                         UText *replacement,
                         UText *dest,
                         UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_appendReplacement(URegularExpression *regexp,
                         const UChar *replacementText,
                         int32_t replacementLength,
                         UChar **destBuf,
                         int32_t *destCapacity,
                         UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_appendReplacementUText(URegularExpression *regexp,
                              UText *replacementText,
                              UText *dest,
                              UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_appendTail(URegularExpression *regexp,
                  UChar **destBuf,
                  int32_t *destCapacity,
                  UErrorCode *status);
U_STABLE UText * U_EXPORT2
uregex_appendTailUText(URegularExpression *regexp,
                       UText *dest,
                       UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_split( URegularExpression *regexp,
                  UChar *destBuf,
                  int32_t destCapacity,
                  int32_t *requiredCapacity,
                  UChar *destFields[],
                  int32_t destFieldsCapacity,
                  UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_splitUText(URegularExpression *regexp,
                  UText *destFields[],
                  int32_t destFieldsCapacity,
                  UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_setTimeLimit(URegularExpression *regexp,
                    int32_t limit,
                    UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_getTimeLimit(const URegularExpression *regexp,
                          UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_setStackLimit(URegularExpression *regexp,
                     int32_t limit,
                     UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uregex_getStackLimit(const URegularExpression *regexp,
                           UErrorCode *status);
U_CDECL_BEGIN
typedef UBool U_CALLCONV URegexMatchCallback (
                   const void *context,
                   int32_t steps);
U_CDECL_END
U_STABLE void U_EXPORT2
uregex_setMatchCallback(URegularExpression *regexp,
                        URegexMatchCallback *callback,
                        const void *context,
                        UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_getMatchCallback(const URegularExpression *regexp,
                        URegexMatchCallback **callback,
                        const void **context,
                        UErrorCode *status);
U_CDECL_BEGIN
typedef UBool U_CALLCONV URegexFindProgressCallback (
                   const void *context,
                   int64_t matchIndex);
U_CDECL_END
U_STABLE void U_EXPORT2
uregex_setFindProgressCallback(URegularExpression *regexp,
                                URegexFindProgressCallback *callback,
                                const void *context,
                                UErrorCode *status);
U_STABLE void U_EXPORT2
uregex_getFindProgressCallback(const URegularExpression *regexp,
                                URegexFindProgressCallback **callback,
                                const void **context,
                                UErrorCode *status);
typedef enum URegionType {
    URGN_UNKNOWN,
    URGN_TERRITORY,
    URGN_WORLD,
    URGN_CONTINENT,
    URGN_SUBCONTINENT,
    URGN_GROUPING,
    URGN_DEPRECATED,
    URGN_LIMIT
} URegionType;
struct URegion;
typedef struct URegion URegion;
U_STABLE const URegion* U_EXPORT2
uregion_getRegionFromCode(const char *regionCode, UErrorCode *status);
U_STABLE const URegion* U_EXPORT2
uregion_getRegionFromNumericCode (int32_t code, UErrorCode *status);
U_STABLE UEnumeration* U_EXPORT2
uregion_getAvailable(URegionType type, UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregion_areEqual(const URegion* uregion, const URegion* otherRegion);
U_STABLE const URegion* U_EXPORT2
uregion_getContainingRegion(const URegion* uregion);
U_STABLE const URegion* U_EXPORT2
uregion_getContainingRegionOfType(const URegion* uregion, URegionType type);
U_STABLE UEnumeration* U_EXPORT2
uregion_getContainedRegions(const URegion* uregion, UErrorCode *status);
U_STABLE UEnumeration* U_EXPORT2
uregion_getContainedRegionsOfType(const URegion* uregion, URegionType type, UErrorCode *status);
U_STABLE UBool U_EXPORT2
uregion_contains(const URegion* uregion, const URegion* otherRegion);
U_STABLE UEnumeration* U_EXPORT2
uregion_getPreferredValues(const URegion* uregion, UErrorCode *status);
U_STABLE const char* U_EXPORT2
uregion_getRegionCode(const URegion* uregion);
U_STABLE int32_t U_EXPORT2
uregion_getNumericCode(const URegion* uregion);
U_STABLE URegionType U_EXPORT2
uregion_getType(const URegion* uregion);
typedef enum UDateRelativeDateTimeFormatterStyle {
  UDAT_STYLE_LONG,
  UDAT_STYLE_SHORT,
  UDAT_STYLE_NARROW,
  UDAT_STYLE_COUNT
} UDateRelativeDateTimeFormatterStyle;
typedef enum UDateRelativeUnit {
    UDAT_RELATIVE_SECONDS,
    UDAT_RELATIVE_MINUTES,
    UDAT_RELATIVE_HOURS,
    UDAT_RELATIVE_DAYS,
    UDAT_RELATIVE_WEEKS,
    UDAT_RELATIVE_MONTHS,
    UDAT_RELATIVE_YEARS,
    UDAT_RELATIVE_UNIT_COUNT
} UDateRelativeUnit;
typedef enum UDateAbsoluteUnit {
    UDAT_ABSOLUTE_SUNDAY,
    UDAT_ABSOLUTE_MONDAY,
    UDAT_ABSOLUTE_TUESDAY,
    UDAT_ABSOLUTE_WEDNESDAY,
    UDAT_ABSOLUTE_THURSDAY,
    UDAT_ABSOLUTE_FRIDAY,
    UDAT_ABSOLUTE_SATURDAY,
    UDAT_ABSOLUTE_DAY,
    UDAT_ABSOLUTE_WEEK,
    UDAT_ABSOLUTE_MONTH,
    UDAT_ABSOLUTE_YEAR,
    UDAT_ABSOLUTE_NOW,
    UDAT_ABSOLUTE_UNIT_COUNT
} UDateAbsoluteUnit;
typedef enum UDateDirection {
    UDAT_DIRECTION_LAST_2,
    UDAT_DIRECTION_LAST,
    UDAT_DIRECTION_THIS,
    UDAT_DIRECTION_NEXT,
    UDAT_DIRECTION_NEXT_2,
    UDAT_DIRECTION_PLAIN,
    UDAT_DIRECTION_COUNT
} UDateDirection;
struct UStringSearch;
typedef struct UStringSearch UStringSearch;
typedef enum {
    USEARCH_OVERLAP = 0,
    USEARCH_ELEMENT_COMPARISON = 2,
    USEARCH_ATTRIBUTE_COUNT = 3
} USearchAttribute;
typedef enum {
    USEARCH_DEFAULT = -1,
    USEARCH_OFF,
    USEARCH_ON,
    USEARCH_STANDARD_ELEMENT_COMPARISON,
    USEARCH_PATTERN_BASE_WEIGHT_IS_WILDCARD,
    USEARCH_ANY_BASE_WEIGHT_IS_WILDCARD,
    USEARCH_ATTRIBUTE_VALUE_COUNT
} USearchAttributeValue;
U_STABLE UStringSearch * U_EXPORT2 usearch_open(const UChar *pattern,
                                              int32_t patternlength,
                                        const UChar *text,
                                              int32_t textlength,
                                        const char *locale,
                                              UBreakIterator *breakiter,
                                              UErrorCode *status);
U_STABLE UStringSearch * U_EXPORT2 usearch_openFromCollator(
                                         const UChar *pattern,
                                               int32_t patternlength,
                                         const UChar *text,
                                               int32_t textlength,
                                         const UCollator *collator,
                                               UBreakIterator *breakiter,
                                               UErrorCode *status);
U_STABLE void U_EXPORT2 usearch_close(UStringSearch *searchiter);
U_STABLE void U_EXPORT2 usearch_setOffset(UStringSearch *strsrch,
                                        int32_t position,
                                        UErrorCode *status);
U_STABLE int32_t U_EXPORT2 usearch_getOffset(const UStringSearch *strsrch);
U_STABLE void U_EXPORT2 usearch_setAttribute(UStringSearch *strsrch,
                                           USearchAttribute attribute,
                                           USearchAttributeValue value,
                                           UErrorCode *status);
U_STABLE USearchAttributeValue U_EXPORT2 usearch_getAttribute(
                                         const UStringSearch *strsrch,
                                               USearchAttribute attribute);
U_STABLE int32_t U_EXPORT2 usearch_getMatchedStart(
                                               const UStringSearch *strsrch);
U_STABLE int32_t U_EXPORT2 usearch_getMatchedLength(
                                               const UStringSearch *strsrch);
U_STABLE int32_t U_EXPORT2 usearch_getMatchedText(const UStringSearch *strsrch,
                                            UChar *result,
                                            int32_t resultCapacity,
                                            UErrorCode *status);
U_STABLE void U_EXPORT2 usearch_setBreakIterator(UStringSearch *strsrch,
                                               UBreakIterator *breakiter,
                                               UErrorCode *status);
U_STABLE const UBreakIterator * U_EXPORT2 usearch_getBreakIterator(
                                              const UStringSearch *strsrch);
U_STABLE void U_EXPORT2 usearch_setText( UStringSearch *strsrch,
                                      const UChar *text,
                                            int32_t textlength,
                                            UErrorCode *status);
U_STABLE const UChar * U_EXPORT2 usearch_getText(const UStringSearch *strsrch,
                                               int32_t *length);
U_STABLE UCollator * U_EXPORT2 usearch_getCollator(
                                               const UStringSearch *strsrch);
U_STABLE void U_EXPORT2 usearch_setCollator( UStringSearch *strsrch,
                                          const UCollator *collator,
                                                UErrorCode *status);
U_STABLE void U_EXPORT2 usearch_setPattern( UStringSearch *strsrch,
                                         const UChar *pattern,
                                               int32_t patternlength,
                                               UErrorCode *status);
U_STABLE const UChar * U_EXPORT2 usearch_getPattern(
                                               const UStringSearch *strsrch,
                                                     int32_t *length);
U_STABLE int32_t U_EXPORT2 usearch_first(UStringSearch *strsrch,
                                           UErrorCode *status);
U_STABLE int32_t U_EXPORT2 usearch_following(UStringSearch *strsrch,
                                               int32_t position,
                                               UErrorCode *status);
U_STABLE int32_t U_EXPORT2 usearch_last(UStringSearch *strsrch,
                                          UErrorCode *status);
U_STABLE int32_t U_EXPORT2 usearch_preceding(UStringSearch *strsrch,
                                               int32_t position,
                                               UErrorCode *status);
U_STABLE int32_t U_EXPORT2 usearch_next(UStringSearch *strsrch,
                                          UErrorCode *status);
U_STABLE int32_t U_EXPORT2 usearch_previous(UStringSearch *strsrch,
                                              UErrorCode *status);
U_STABLE void U_EXPORT2 usearch_reset(UStringSearch *strsrch);
struct USearch;
typedef struct USearch USearch;
struct USpoofChecker;
typedef struct USpoofChecker USpoofChecker;
typedef enum USpoofChecks {
    USPOOF_SINGLE_SCRIPT_CONFUSABLE = 1,
    USPOOF_MIXED_SCRIPT_CONFUSABLE = 2,
    USPOOF_WHOLE_SCRIPT_CONFUSABLE = 4,
    USPOOF_ANY_CASE = 8,
    USPOOF_RESTRICTION_LEVEL = 16,
    USPOOF_INVISIBLE = 32,
    USPOOF_CHAR_LIMIT = 64,
    USPOOF_MIXED_NUMBERS = 128,
    USPOOF_ALL_CHECKS = 0xFFFF,
    USPOOF_AUX_INFO = 0x40000000
    } USpoofChecks;
    typedef enum URestrictionLevel {
        USPOOF_ASCII = 0x10000000,
        USPOOF_SINGLE_SCRIPT_RESTRICTIVE = 0x20000000,
        USPOOF_HIGHLY_RESTRICTIVE = 0x30000000,
        USPOOF_MODERATELY_RESTRICTIVE = 0x40000000,
        USPOOF_MINIMALLY_RESTRICTIVE = 0x50000000,
        USPOOF_UNRESTRICTIVE = 0x60000000,
         USPOOF_RESTRICTION_LEVEL_MASK = 0x7F000000
    } URestrictionLevel;
U_STABLE USpoofChecker * U_EXPORT2
uspoof_open(UErrorCode *status);
U_STABLE USpoofChecker * U_EXPORT2
uspoof_openFromSerialized(const void *data, int32_t length, int32_t *pActualLength,
                          UErrorCode *pErrorCode);
U_STABLE USpoofChecker * U_EXPORT2
uspoof_openFromSource(const char *confusables, int32_t confusablesLen,
                      const char *confusablesWholeScript, int32_t confusablesWholeScriptLen,
                      int32_t *errType, UParseError *pe, UErrorCode *status);
U_STABLE void U_EXPORT2
uspoof_close(USpoofChecker *sc);
U_STABLE USpoofChecker * U_EXPORT2
uspoof_clone(const USpoofChecker *sc, UErrorCode *status);
U_STABLE void U_EXPORT2
uspoof_setChecks(USpoofChecker *sc, int32_t checks, UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uspoof_getChecks(const USpoofChecker *sc, UErrorCode *status);
U_STABLE void U_EXPORT2
uspoof_setRestrictionLevel(USpoofChecker *sc, URestrictionLevel restrictionLevel);
U_STABLE URestrictionLevel U_EXPORT2
uspoof_getRestrictionLevel(const USpoofChecker *sc);
U_STABLE void U_EXPORT2
uspoof_setAllowedLocales(USpoofChecker *sc, const char *localesList, UErrorCode *status);
U_STABLE const char * U_EXPORT2
uspoof_getAllowedLocales(USpoofChecker *sc, UErrorCode *status);
U_STABLE void U_EXPORT2
uspoof_setAllowedChars(USpoofChecker *sc, const USet *chars, UErrorCode *status);
U_STABLE const USet * U_EXPORT2
uspoof_getAllowedChars(const USpoofChecker *sc, UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uspoof_check(const USpoofChecker *sc,
                         const UChar *id, int32_t length,
                         int32_t *position,
                         UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uspoof_checkUTF8(const USpoofChecker *sc,
                 const char *id, int32_t length,
                 int32_t *position,
                 UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uspoof_areConfusable(const USpoofChecker *sc,
                     const UChar *id1, int32_t length1,
                     const UChar *id2, int32_t length2,
                     UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uspoof_areConfusableUTF8(const USpoofChecker *sc,
                         const char *id1, int32_t length1,
                         const char *id2, int32_t length2,
                         UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uspoof_getSkeleton(const USpoofChecker *sc,
                   uint32_t type,
                   const UChar *id, int32_t length,
                   UChar *dest, int32_t destCapacity,
                   UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uspoof_getSkeletonUTF8(const USpoofChecker *sc,
                       uint32_t type,
                       const char *id, int32_t length,
                       char *dest, int32_t destCapacity,
                       UErrorCode *status);
U_STABLE const USet * U_EXPORT2
uspoof_getInclusionSet(UErrorCode *status);
U_STABLE const USet * U_EXPORT2
uspoof_getRecommendedSet(UErrorCode *status);
U_STABLE int32_t U_EXPORT2
uspoof_serialize(USpoofChecker *sc,
                 void *data, int32_t capacity,
                 UErrorCode *status);
typedef enum UDateTimeScale {
    UDTS_JAVA_TIME = 0,
    UDTS_UNIX_TIME,
    UDTS_ICU4C_TIME,
    UDTS_WINDOWS_FILE_TIME,
    UDTS_DOTNET_DATE_TIME,
    UDTS_MAC_OLD_TIME,
    UDTS_MAC_TIME,
    UDTS_EXCEL_TIME,
    UDTS_DB2_TIME,
    UDTS_UNIX_MICROSECONDS_TIME,
    UDTS_MAX_SCALE
} UDateTimeScale;
typedef enum UTimeScaleValue {
    UTSV_UNITS_VALUE = 0,
    UTSV_EPOCH_OFFSET_VALUE=1,
    UTSV_FROM_MIN_VALUE=2,
    UTSV_FROM_MAX_VALUE=3,
    UTSV_TO_MIN_VALUE=4,
    UTSV_TO_MAX_VALUE=5,
    UTSV_MAX_SCALE_VALUE=11
} UTimeScaleValue;
U_STABLE int64_t U_EXPORT2
    utmscale_getTimeScaleValue(UDateTimeScale timeScale, UTimeScaleValue value, UErrorCode *status);
U_STABLE int64_t U_EXPORT2
    utmscale_fromInt64(int64_t otherTime, UDateTimeScale timeScale, UErrorCode *status);
U_STABLE int64_t U_EXPORT2
    utmscale_toInt64(int64_t universalTime, UDateTimeScale timeScale, UErrorCode *status);
typedef void* UTransliterator;
typedef enum UTransDirection {
    UTRANS_FORWARD,
    UTRANS_REVERSE
} UTransDirection;
typedef struct UTransPosition {
    int32_t contextStart;
    int32_t contextLimit;
    int32_t start;
    int32_t limit;
} UTransPosition;
U_STABLE UTransliterator* U_EXPORT2
utrans_openU(const UChar *id,
             int32_t idLength,
             UTransDirection dir,
             const UChar *rules,
             int32_t rulesLength,
             UParseError *parseError,
             UErrorCode *pErrorCode);
U_STABLE UTransliterator* U_EXPORT2
utrans_openInverse(const UTransliterator* trans,
                   UErrorCode* status);
U_STABLE UTransliterator* U_EXPORT2
utrans_clone(const UTransliterator* trans,
             UErrorCode* status);
U_STABLE void U_EXPORT2
utrans_close(UTransliterator* trans);
U_STABLE const UChar * U_EXPORT2
utrans_getUnicodeID(const UTransliterator *trans,
                    int32_t *resultLength);
U_STABLE void U_EXPORT2
utrans_register(UTransliterator* adoptedTrans,
                UErrorCode* status);
U_STABLE void U_EXPORT2
utrans_unregisterID(const UChar* id, int32_t idLength);
U_STABLE void U_EXPORT2
utrans_setFilter(UTransliterator* trans,
                 const UChar* filterPattern,
                 int32_t filterPatternLen,
                 UErrorCode* status);
U_STABLE int32_t U_EXPORT2
utrans_countAvailableIDs(void);
U_STABLE UEnumeration * U_EXPORT2
utrans_openIDs(UErrorCode *pErrorCode);
U_STABLE void U_EXPORT2
utrans_trans(const UTransliterator* trans,
             UReplaceable* rep,
             UReplaceableCallbacks* repFunc,
             int32_t start,
             int32_t* limit,
             UErrorCode* status);
U_STABLE void U_EXPORT2
utrans_transIncremental(const UTransliterator* trans,
                        UReplaceable* rep,
                        UReplaceableCallbacks* repFunc,
                        UTransPosition* pos,
                        UErrorCode* status);
U_STABLE void U_EXPORT2
utrans_transUChars(const UTransliterator* trans,
                   UChar* text,
                   int32_t* textLength,
                   int32_t textCapacity,
                   int32_t start,
                   int32_t* limit,
                   UErrorCode* status);
U_STABLE void U_EXPORT2
utrans_transIncrementalUChars(const UTransliterator* trans,
                              UChar* text,
                              int32_t* textLength,
                              int32_t textCapacity,
                              UTransPosition* pos,
                              UErrorCode* status);
U_STABLE int32_t U_EXPORT2
utrans_toRules( const UTransliterator* trans,
                    UBool escapeUnprintable,
                    UChar* result, int32_t resultLength,
                    UErrorCode* status);
U_STABLE USet* U_EXPORT2
utrans_getSourceSet(const UTransliterator* trans,
                    UBool ignoreFilter,
                    USet* fillIn,
                    UErrorCode* status);
