#ifndef __UTIL_C__
#define __UTIL_C__

#include <stdio.h>

#define VERBOSE 1
#define EMPTY printf("%s", "")
#define VERBOSE_HEADER ""

#define STACK_DUMP(L) (VERBOSE ? (stack_dump(L)) : (EMPTY))

#ifdef WIN32

#include "windows.h"
char _utilBuffer[1024];

#define P(format, ...) \
	{\
		sprintf(_utilBuffer,format,__VA_ARGS__);\
		OutputDebugString((_utilBuffer));\
	}
#else
#define P(format, ...) (VERBOSE ? fprintf(stderr, VERBOSE_HEADER format , ## __VA_ARGS__) : (EMPTY))
#endif



void dump(char* p, int n);

#endif
