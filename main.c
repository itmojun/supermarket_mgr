#include <stdio.h>


int sum(int n);


int main()
{
	printf("hello, world...\n");

	printf("%d\n", sum(100));

	return 0;
}


int sum(int n)
{
	return n * (n + 1) / 2;
}
