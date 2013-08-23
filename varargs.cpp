#include "util.h"
#include <stdarg.h>

void fun(int p, ...)
{
	va_list ap;
	va_start(ap, p);
	int p1 = va_arg(ap, int);
	P("p1=%d\n", p1);
	va_end(ap);
}


int main(int argc, char** argv)
{
	fun(3,4,5,6);

#ifdef WIN32
	getchar();
#endif
	return 0;
}
