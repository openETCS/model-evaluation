#ifndef _SMUTYPES_H_
#define _SMUTYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Conversion version */
typedef enum {
    Scv43,
    Scv612,
    _ScvLast /* bounds checking */
} SimConvVersion;

/* Runtime version */
typedef enum {
    Srtv43,
    Srtv50,
    Srtv51,
    Srtv6,
    Srtv601,
    Srtv61,
    Srtv612,
    Srtv62,
    _SrtvLast	/* bounds checking */
} SimRtVersion;

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

typedef enum {
    SbFalse,
    SbTrue
} SimBool;

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

struct FilterUtils_Struct;

typedef struct TypeUtils_Struct {
    const char* (*m_pfnTypeToString)(const void*);
    int (*m_pfnCheckString)(const char*);
    int (*m_pfnStringToType)(const char*, void*);
    int (*m_pfnAllowDoubleConvertion)();
    int (*m_pfnTypeToDouble)(double * nValue, const void*);
    int (*m_pfnCompareType)(int*, const char*, const void*);
    const char* (*m_pfnGetSignature)();
    struct FilterUtils_Struct (*m_pfnGetFilteredUtils)(const char*, void*);
    unsigned int m_nSize;
    const char ** m_FilterValues;
} TypeUtils;

typedef struct FilterUtils_Struct {
    TypeUtils* m_pTypeUtils;
    void* m_pHandle;
} FilterUtils;

typedef struct ControlUtils_Struct {
    int (*m_pfnIsActive)(void*);
} ControlUtils;

typedef struct StructSimValue_Struct {
    void * m_pPtr;
    TypeUtils * m_pTypeUtils;
    char* m_pszName;
} StructSimValue;

typedef struct Simulator_Struct {
    void* m_pSimulator;
    void (*m_pfnAddSensor)(struct Simulator_Struct*, const char*, const TypeUtils*, void*);
    void (*m_pfnSetRoot)(struct Simulator_Struct*, const char*, void*, void* (*pfnGetHandle)(void*, int, int*, int));
    void (*m_pfnAddInput)(struct Simulator_Struct*, const char*, const TypeUtils*, int, int (*pfnValid)(void *), int nClockHandleIdent, int (*pfnClockActive)(void*));
    void (*m_pfnAddOutput)(struct Simulator_Struct*, const char*, const TypeUtils*, int, int (*pfnValid)(void *), int nClockHandleIdent, int (*pfnClockActive)(void*));
    void (*m_pfnAddProbe)(struct Simulator_Struct*, const char*, const TypeUtils*, int, int (*pfnValid)(void *), int nClockHandleIdent, int (*pfnClockActive)(void*));
    void (*m_pfnAddLocal)(struct Simulator_Struct*, const char*, const TypeUtils*, int, int (*pfnValid)(void *), int nClockHandleIdent, int (*pfnClockActive)(void*));
    
    void (*m_pfnPushInstance)(struct Simulator_Struct*, const char*, const char*, int nHandleIdent, void* (*pfnGetHandle)(void*, int, int*, int),
			      int nClockHandleIdent, int (*pfnClockActive)(void*));
    void (*m_pfnPopInstance)(struct Simulator_Struct*);
    void (*m_pfnFinalizeMapping)(struct Simulator_Struct*);
    /* Print functions */
    /* Array */
    const char* (*m_pfnArrayToString)(const void**, const char* (*pfnTypeToString)(const void*), int, void* (*pfnTypeProjection)(void**, int));
    int (*m_pfnArrayFromString)(const char *, void**, int (*pfnStringToType)(const char*, void*), int, void* (*pfnTypeProjection)(void**, int));
    const char* (*m_pfnArraySignature)(const char* (*pfnGetSignature)(), int);
    FilterUtils (*m_pfnGetArrayFilterUtils)(TypeUtils*, const char*, void**, int, void* (*pfnTypeProjection)(void**, int));
    /* Char Arrays (Strings) */
    const char* (*m_pfnCharArrayToString)(const void**, const char* (*pfnTypeToString)(const void*), int, void* (*pfnTypeProjection)(void**, int));
    int (*m_pfnCharArrayFromString)(const char *, void**, int (*pfnStringToType)(const char*, void*), int, void* (*pfnTypeProjection)(void**, int));
    /* Structure */
    const char* (*m_pfnStructureToString)(const StructSimValue *, int);
    int (*m_pfnStructureFromString)(const char * strValue, StructSimValue *, int);
    const char* (*m_pfnStructureSignature)(const StructSimValue *, int);
    FilterUtils (*m_pfnGetStructureFilterUtils)(const StructSimValue*, int, const char*);
    /* Predefined */
    int (*m_pfnStringToInt)(const char * strValue, int*);
    int (*m_pfnStringToBool)(const char * strValue, int*);
    int (*m_pfnStringToReal)(const char * strValue, double*);
    int (*m_pfnStringToChar)(const char * strValue, char*);
    const char* (*m_pfnIntToString)(int);
    const char* (*m_pfnBoolToString)(int);
    const char* (*m_pfnRealToString)(double);
    const char* (*m_pfnCharToString)(char);
    /* Control */
    void (*m_pfnPushStateMachine)(struct Simulator_Struct*, const char*);
    void (*m_pfnPopStateMachine)(struct Simulator_Struct*);
    void (*m_pfnPushState)(struct Simulator_Struct*,const char*, const ControlUtils*, int);
    void (*m_pfnPopState)(struct Simulator_Struct*);
    void (*m_pfnPushStrongTransition)(struct Simulator_Struct*, const char*, const ControlUtils*, int);
    void (*m_pfnPopStrongTransition)(struct Simulator_Struct*);
    void (*m_pfnPushWeakTransition)(struct Simulator_Struct*, const char*, const ControlUtils*, int);
    void (*m_pfnPopWeakTransition)(struct Simulator_Struct*);
    void (*m_pfnPushActivateIf)(struct Simulator_Struct*, const char*);
    void (*m_pfnPopActivateIf)(struct Simulator_Struct*);
    void (*m_pfnPushActivateWhen)(struct Simulator_Struct*, const char*);
    void (*m_pfnPopActivateWhen)(struct Simulator_Struct*);
    void (*m_pfnPushMatch)(struct Simulator_Struct*, const char*, const ControlUtils*, int);
    void (*m_pfnPopMatch)(struct Simulator_Struct*);
    void (*m_pfnPushBranch)(struct Simulator_Struct*, const char*, const ControlUtils*, int);
    void (*m_pfnPopBranch)(struct Simulator_Struct*);
    /**/
    void (*m_pfnAddSignal)(struct Simulator_Struct*, const char*, const ControlUtils*, int, int (*pfnValid)(void*), int nClockHandleIdent, int (*pfnClockActive)(void*));
    void (*m_pfnAddAssume)(struct Simulator_Struct*, const char*, const ControlUtils*, int, int (*pfnValid)(void*), int nClockHandleIdent, int (*pfnClockActive)(void*));
    void (*m_pfnAddGuarantee)(struct Simulator_Struct*, const char*, const ControlUtils*, int, int (*pfnValid)(void*), int nClockHandleIdent, int (*pfnClockActive)(void*));
    /* Iterator */
    void (*m_pfnPushIterator)(struct Simulator_Struct*, const char*, int , int);
    void (*m_pfnPopIterator)(struct Simulator_Struct*);
    /* Comparison */
    int (*m_pfnArrayComparison)(int*, const char *, const void**, int (*m_pfnCompareType)(int*, const char*, const void*), int, void* (*pfnTypeProjection)(void**, int));
    int (*m_pfnStructureComparison)(int*, const char * strValue, StructSimValue *, int);
    /* Control */
    void (*m_pfnRefresh)(struct Simulator_Struct*);
    void (*m_pfnAcquireValueMutex)(struct Simulator_Struct*);
    void (*m_pfnReleaseValueMutex)(struct Simulator_Struct*);
} ScSimulator;

extern void SimInit();
extern int SimStep();
extern void SimStop();

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* _SMUTYPES_H_ */
