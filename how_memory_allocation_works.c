#include "malloc.h"

#include "util.h"
#include "unistd.h"

int main()
{
	P("sizeof(int)=%ld, sizeof(char)=%ld, pagesize=%d\n", sizeof(int), sizeof(char), getpagesize());

	int* ip = (int*) malloc(sizeof(int));
	long* lp = (long*) malloc(sizeof(long));
	short* sp = (short*) malloc(sizeof(short));

	P("ip=%p,lp=%p,sp=%p\n", ip, lp, sp);

	return 0;
}
