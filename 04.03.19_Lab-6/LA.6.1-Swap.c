#include<stdio.h>

int SWAP(int *a, int *b)
{
	int x=*a;
	*a=*b;
	*b=x;
	return 0;
}

int main()
{
	int a, b;
	printf("Enter the two no.s:\n");
	scanf("%d%d", &a, &b);
	printf("Before swap:\na=%d\tb=%d\n", a, b);
	SWAP(&a, &b);
	printf("After swap:\na=%d\tb=%d\n", a, b);
	return 0;
}
