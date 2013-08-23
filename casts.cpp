#include "util.h"

class A
{
	public:
		int a;
	private:
		char c;
};

class B:public A
{
	public:
		B()
		{
			P("B() called\n");
		}
		B(const B& b)
		{
			P("B(B&) called\n");
		}
		B(const A& a):c(9)
		{
			P("const B(A&) called\n");
		}

		B(A& a):c(90)
		{
			P("B(A&) called\n");
		}
		int* k;
		int c;
		//for dynamic_cast<> to work
		virtual void f(){}
};

B f(B b)
{
	P("1\n");
	B br ;//= b;
	P("2\n");
	return br;
}

int main(int argc, char** argv)
{
	double d = 3.14141414;
	int a = (int) d;
	P("a=%d\n", a);
	a = static_cast<int>(d);
	P("a=%d\n", a);

	A a2;
	B b = static_cast<B>(a2);
	
	P("b.c=%d\n", b.c);
	P("--------------------------------------\n");
	B b2;
	P("A\n");
	B b3 = f(b2);
	P("B\n");

	void* vp = dynamic_cast<void*>(&b2);
	P("vp=%p,bp=%p\n", vp, &b2);

	int* ip = reinterpret_cast<int*>(1000);
	P("ip=%p\n", ip);

    ip = reinterpret_cast<int*>(&b2);

	P("ip=%p\n", ip);

	char* cp = "hello world";
	cp[0] = 't';
#ifdef WIN32
	getchar();
#endif
	return 0;
}
