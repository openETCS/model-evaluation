#ifndef _SMX_CONVERTER_H_36F54408_32EB_4004_9ABE_5856DBA09F82_
#define _SMX_CONVERTER_H_36F54408_32EB_4004_9ABE_5856DBA09F82_

// for inlined conversion
class CBuffer {
public:
	char* m_pszBase;	// data area
	size_t m_nLength;	// current string length
	size_t m_nSize;		// current buffer size
	size_t m_nGrowSize;	// reallocation size
public:
	// destructor
	~CBuffer();
public:
	//constructor
	CBuffer(int nGrowSize = 512);
public:
	// Clear du buffer courant (en conservant sa taille)
	inline void Empty();
	// return the string value of the current buffer (with \0 at end)
	inline operator const char*();
	// return the last character of the current buffer
	inline char operator[] (size_t nIndex);
	// concat buffer to current buffer
	void operator +=(const char* pszValue);
};

inline void CBuffer::Empty()
{ *(m_pszBase) = '\0'; m_nLength = 0; }

inline CBuffer::operator const char*()
{ return m_pszBase; }

inline char CBuffer::operator[] (size_t nIndex)
{ return m_pszBase[nIndex]; }

#endif	// _SMX_CONVERTER_H_36F54408_32EB_4004_9ABE_5856DBA09F82_
