/*	$Id: peace.h,v 1.1.1.1 2003/04/28 18:06:55 nonaka Exp $	*/

#ifndef	__NP2_PEACE_H__
#define	__NP2_PEACE_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned int u_int;
#define bzero(a, b) memset(a, 0, b)

DWORD	WINAPI GetTickCount(void);

BOOL	WINAPI ReadFile(HANDLE, PVOID, DWORD, PDWORD, LPOVERLAPPED);
BOOL	WINAPI WriteFile(HANDLE, PCVOID, DWORD, PDWORD, LPOVERLAPPED);
HANDLE	WINAPI CreateFile(LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES,
		DWORD, DWORD, HANDLE);
DWORD	WINAPI SetFilePointer(HANDLE, LONG, PLONG, DWORD);
BOOL	WINAPI CloseHandle(HANDLE);
DWORD	WINAPI GetFileAttributes(LPCSTR);

HLOCAL	WINAPI LocalAlloc(UINT, UINT);
HLOCAL	WINAPI LocalFree(HLOCAL);
PVOID	WINAPI LocalLock(HLOCAL);
BOOL	WINAPI LocalUnlock(HLOCAL);

HGLOBAL WINAPI GlobalAlloc(UINT, DWORD);
HGLOBAL	WINAPI GlobalFree(HGLOBAL);
LPVOID	WINAPI GlobalLock(HGLOBAL);
BOOL	WINAPI GlobalUnlock(HGLOBAL);
HGLOBAL	WINAPI GlobalHandle(PCVOID);

DWORD	WINAPI GetPrivateProfileString(LPCSTR, LPCSTR, LPCSTR, LPSTR,
		DWORD, LPCSTR);
UINT	WINAPI GetPrivateProfileInt(LPCSTR, LPCSTR, INT, LPCSTR);

#ifdef __cplusplus
};
#endif

#endif	/* __NP2_PEACE_H__ */
