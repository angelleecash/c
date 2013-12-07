int printf(const char*, ...);

int global_init_var=84;
int global_uninit_var;

void fun(int i)
{
	printf("%dabcd\n", i);
}

int main()
{
	static int static_var = 85;
	static int static_var2;

	int a = 1;
	int b;

	fun(static_var + static_var2 + a + b);

	return 0;
}
