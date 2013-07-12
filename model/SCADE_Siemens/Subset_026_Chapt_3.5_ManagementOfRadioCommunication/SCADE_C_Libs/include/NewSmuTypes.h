#ifndef _NEWSMUTYPES_H_
#define _NEWSMUTYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Conversion version */
typedef enum {
    Scv43,
    Scv612,
    _ScvLast /* bounds checking */
} SimConvVersion;

/* Conversion types */
typedef enum {
    SptNone,
    SptString,
    SptChar,
    SptShort,
    SptLong,
    SptFloat,
    SptDouble,
    SptBool,
    _SptLast	/* bounds checking */
} SimConvType;

struct SimTypeVTable {
    /*
    * version of the table
    */
    SimConvVersion m_version; 
    /*
    * non zero if both nTo and nFrom are provided
    * (SptNone is considered as beeing always provided)
    */
    int (*m_pfnGetConvInfo)(SimConvType nTo, SimConvType nFrom);
    /*
    * serializes a value
    * returns the address of the value (non NULL if successful)
    */
    const void* (*m_pfnToType)(SimConvType, const void* pT);
    /*
    * compiles a value (non zero if successful)
    */
    int (*m_pfnFromType)(SimConvType, const void* pType, void* pT);
    /*
    * compares two values (non zero if successful)
    */
    int (*m_pfnCompare)(int* result, const void* pValue1, const void* pValue2);
};

typedef struct TypeUtils_Struct {
    int (*m_pfnTypeToString)(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
    int (*m_pfnCheckString)(const char *str, const char** endptr);
    int (*m_pfnStringToType)(const char *str, void *pValue, const char** endptr);
    int (*m_pfnAllowDoubleConvertion)();
    int (*m_pfnTypeToDouble)(const void *pValue, double *nValue);
    int (*m_pfnCompareType)(int *nRet, const void *pValue1, const void *pValue2, void *pData);
    int (*m_pfnGetSignature)(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
    int (*m_pfnSetDefaultValue)(void *pValue);
    int m_nSize;
} TypeUtils;

typedef struct FieldUtils_Struct {
    const char* m_name;
    unsigned int m_nOffset;
    TypeUtils* m_pTypeUtils;
} FieldUtils;

typedef struct EnumValUtils_Struct {
    const char* m_name;
    int m_nVal;
} EnumValUtils;

typedef int (*SimAppendCallback)(const char* str, void* pData);

typedef struct Converter_Struct {
    /* Int */
    int (*m_pfnStringToInt)(const char *str, int *pValue, const char** endptr);
    int (*m_pfnIntToString)(int nValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
    int (*m_pfnIntComparison)(int *nRet, int nValue1, int nValue2, void *pData);

    /* Bool */
    int (*m_pfnStringToBool)(const char *str, int *pValue, const char** endptr);
    int (*m_pfnBoolToString)(int bValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
    int (*m_pfnBoolComparison)(int *nRet, int bValue1, int bValue2, void *pData);

    /* Real */
    int (*m_pfnStringToReal)(const char *str, double *pValue, const char** endptr);
    int (*m_pfnRealToString)(double rValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
    int (*m_pfnRealComparison)(int *nRet, double rValue1, double rValue2, void *pData);

    /* Char */
    int (*m_pfnStringToChar)(const char *str, char *pValue, const char** endptr);
    int (*m_pfnCharToString)(char cValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
    int (*m_pfnCharComparison)(int *nRet, char cValue1, char cValue2, void *pData);

    /* Array */
    int (*m_pfnArrayToString)(const void *pValue,
            int (*pfnTypeToString)(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData),
            int nSize, int nCellSize, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
    int (*m_pfnStringToArray)(const char *str, void *pValue,
            int (*pfnStringToType)(const char *str, void *pValue, const char** endptr),
            int nSize, int nCellSize, const char** endptr);
    int (*m_pfnArrayComparison)(int *nRet, const void *pValue1, const void *pValue2,
	    int (*pfnCompareType)(int *nRet, const void *pValue1, const void *pValue2, void *pData),
	    int nSize, int nCellSize, void *pData);

    /* Char Array (String) */
    int (*m_pfnCharArrayToString)(const void *pValue,
            int (*pfnTypeToString)(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData),
            int nSize, int nCellSize, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
    int (*m_pfnCharArrayFromString)(const char *str, void *pValue,
            int (*pfnStringToType)(const char *str, void *pValue, const char** endptr),
            int nSize, int nCellSize, const char** endptr);

    /* Structure */
    int (*m_pfnStructureToString)(const void *pValue, const FieldUtils *pFields, int nSize,
	    int (*pfnStrAppend)(const char *str, void *pData), void *pData);
    int (*m_pfnStringToStructure)(const char *str, void *pValue, const FieldUtils *pFields,
            int nSize, const char** endptr);
    int (*m_pfnStructureComparison)(int *nRet, const void *pValue1, const void *pValue2,
	   const FieldUtils *pFields, int nSize, void *pData);
    /* Enum */
    int (*m_pfnEnumToString)(int nValue, const EnumValUtils *pEnumVals, int nSize,
	   int (*pfnStrAppend)(const char *str, void *pData), void *pData);
    int (*m_pfnStringToEnum)(const char* str, int* pValue, const EnumValUtils *pEnumVals,
           int nSize, const char** endptr);
    int (*m_pfnEnumComparison)(int *nRet, int nValue1, int nValue2, const EnumValUtils *pEnumVals, int nSize, void *pData);

    /* Parameters */
    int RealPrecision;

} ScConverter;

extern ScConverter* pConverter;

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* _NEWSMUTYPES_H_ */

