#include<stdio.h>

int main()
{
	const int n=10;
	int *p;
	p=&n;
	printf("Value of constant integer: %d\n", *p);
	*p=20;
	printf("Value of constant integer after change: %d\n", *p);
	return 0;
}
