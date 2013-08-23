#include "stdio.h"

int ga;
const char* gs = "hello";

void f2(int k)
{

	printf("param address of f2 &k%p\n", &k);
	int a = 4;
	printf("address of f2 %p,&a=%p\n", f2,&a);
}

void f1()
{
	int a = 4;
	printf("address of f1 %p,&a=%p\n", f1,&a);
}

int main(int argc, char** argv)
{
	//why is the address of argc lower than the address of a?

	printf("&ga=%p,&gs=%p,gs=%p\n",&ga,&gs,gs);
	printf("address of main %p\n", main);
	int a =3;
	int b = 4;
	int d[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("variables address in main &argc=%p,&a%p,&b%p\n",&argc,&a,&b);
	for(int i=0; i < 10; i++)
	{
		printf("address of d[%d]=%p\n", i, &d[i]);
	}
	f1();
	f1();
	f2(4);
	int i=0;
	while(1<0x7fffffff)
	{
		i++;
	}
	return 0;
}
