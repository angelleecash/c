#include "util.h"

void dump(char* p, int n)
{
	for(int i=0; i < n; i++)
	{
		P("0x%02x ", *(p+i) & 0xff);
		if(i > 0 && (i&0x7) == 7)
		{
			P("\n");
		}
	}

	P("\n");
}
