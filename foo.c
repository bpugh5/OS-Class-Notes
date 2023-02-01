#include <stdio.h>	// printf
#include <unistd.h>	// open, close, read, write

void foo(int *x)	// x = a
{
	x[2] = 99;

	*(x+2) = 99;

	// *(2+x) = 99;

	// 2[x] = 99;
}

void addone(int *x)
{
	*x = *x + 1;
}

int main(void)
{
	int b = 12;
	addone(&b);

	printf("%d\n", b);
}

