#ifndef __UTIL_C__
#define __UTIL_C__

#include <stdio.h>

#define VERBOSE 1
#define EMPTY printf("%s", "")
#define VERBOSE_HEADER ""

#define STACK_DUMP(L) (VERBOSE ? (stack_dump(L)) : (EMPTY))
#define P(format, args...) (VERBOSE ? fprintf(stderr, VERBOSE_HEADER format , ## args) : (EMPTY))


void dump(char* p, int n);

#endif
