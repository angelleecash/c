#include "util.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	const char c = 'a';
	const char* cp = &c;
	//char* cp2 = &c; won't compile
	
	char char_array[] = "hello";

	char* const cp3 = &char_array[0];
	char* const * cp4 = &cp3;

	*cp4 = 0;
	
	P("cp3=%p\n", cp3);

	const char* ca[] = {
		  			       "how",
						   "are",
						   "you"
					   };

	for(int i=0;i < sizeof(c)/sizeof(char*);i++)
	{
		P("ca[%d]=%s len=%d\n", i, ca[i], strlen(ca[i]));
	}

	char const* const* cpp = &ca[0];
	for(int i=0; i < 3; i++)
	{
		P("ca[%i]=%s \n", i, *cpp);
		cpp++;
	}

#ifdef WIN32
	getchar();
#endif
	return 0;
}
