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
	int i, s = 0;
	for(i = 1; i <= n; i++)
		s += i;

	return s;
}
