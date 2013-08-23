#include "util.h"

class F
{
	public:
		template<class T>
			void fun(T& value)
			{
			}
};

int main(int argc, char** argv)
{
	F f;
	f.fun("string");
#ifdef WIN32
	getchar();
#endif
	return 0;
}
