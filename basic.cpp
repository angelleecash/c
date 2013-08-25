#include "util.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	int const a = 1;

	const int* ip1 = &a;
	int const* ip2 = &a;
	//won't compile cause casting from const int* to int*
	//int* const ip3 = &a;
	const int* const ip4 = &a;

	const char* c[] = {
					"helloworld",
					"thank you",
					"please"
				};

	P("sizeof(c)=%d\n", sizeof(c));
	for(int i=0;i < sizeof(c)/sizeof(char*);i++)
	{
		P("c[%d]=%s len=%d\n", i, c[i], strlen(c[i]));
	}

	char const* const* cp = &c[0];
	P("before assigning ...\n");
	//cp[0][0] = 'a';
	for(int i=0; i < 3; i++)
	{
		P("c[%i]=%s \n", i, *cp);
		cp++;
	}

	//char* const* cp2 = cp;
	//*cp2 = (char*)0;
	//const char* *cp3 = &c[0];

#ifdef WIN32
	getchar();
#endif
	return 0;
}
