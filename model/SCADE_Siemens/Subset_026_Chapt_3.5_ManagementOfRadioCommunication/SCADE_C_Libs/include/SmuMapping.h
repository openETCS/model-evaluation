#ifndef _SMU_MAPPING_H_
#define _SMU_MAPPING_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "NewSmuTypes.h"

enum EntryKind_t {
    MAP_SENSOR,

    MAP_ROOT,
    MAP_INSTANCE,
    MAP_EXPANDED,

    MAP_INPUT,
    MAP_OUTPUT,
    MAP_LOCAL,

    MAP_WHEN,
    MAP_MATCH,
    MAP_ACTION,
    MAP_IF,

    MAP_AUTOMATON,
    MAP_STATE,
    MAP_FORK,
    MAP_TRANSITION,

    MAP_FIELD,
    MAP_ARRAY
};
typedef enum EntryKind_t EntryKind;

struct MappingIterator_t {
    int size;
    const struct MappingIterator_t* parent;
};
typedef struct MappingIterator_t MappingIterator;

struct MappingScope_t;

struct MappingEntry_t {
    EntryKind nKind;
    const char* name;
    const struct MappingIterator_t* iterator;
    int size;
    int offset;
    const TypeUtils* pTypeUtils;
    const struct MappingEntry_t* pClockEntry;
    int (*isActiveFct)(void*);
    const struct MappingScope_t* pScope;
};
typedef struct MappingEntry_t MappingEntry;

struct MappingScope_t {
    const char* name;
    const MappingEntry* entries;
    int nbOfEntries;
};
typedef struct MappingScope_t MappingScope;

struct Iterator_t;


int GetObservableFromPath(const char* pPath, const MappingScope* pTop,
    void** pRetHandle, const MappingEntry** pRetMappingEntry,
    void** pRetClockHandle, int (**pRetIsActiveFct)(void*), const MappingEntry** pRetClockMappingEntry,
    void** pRetParentHandle, const MappingEntry** pRetParentMappingEntry);

int GetObservableFromHandle(void* pHandle, int nSize, const MappingScope* pTop,
    const MappingEntry** pRetMappingEntry,
    void** pRetClockHandle, int (**pRetIsActiveFct)(void*), const MappingEntry** pRetClockMappingEntry,
    int (*pfnStrAppend)(const char *str, void *pData), void *pData,
    void** pRetParentHandle, const MappingEntry** pRetParentMappingEntry);

int ListAllObservables(const MappingScope* pScope, int bInFork,
    int (*pfnStrAppend)(const char *str, void *pData),
    char* (*pfnGetPtr)(void *pData),
    void (*pfnSetPtr)(char* ptr, void *pData),
    void (*pfnFlush)(),
    void *pData);

const MappingEntry* FindEntry(const MappingScope* pScope,
                               const char* pPath, int nTokenLen);

extern const MappingScope* pTop;

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* _SMU_MAPPING_H_ */

