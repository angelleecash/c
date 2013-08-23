#include "util.h"
#include <stdarg.h>

int main(int argc, char** argv)
{
	char c[4];
	P("c=%p,&c=%p,&c[0]=%p.\n", c, &c, &c[0]);
#ifdef WIN32
	getchar();
#endif
	return 0;
}
