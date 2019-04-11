#include <stdio.h>

int fun(int x);

int main()
{
	int x;

	printf("hello world \n");

	x = fun(10);

	printf("%d\n", x);

	return 0;
}

int fun(int x)
{
	return x + 10;
}

