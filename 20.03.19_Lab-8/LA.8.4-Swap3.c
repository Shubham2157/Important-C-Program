#include<stdio.h>

int SWAP(int*, int*, int*);

int main()
{
	int a, b, c;
	printf("Input values of a, b, c:\n");
	scanf("%d%d%d", &a, &b, &c);
	SWAP(&a, &b, &c);
	printf("After Swapping:\na=%d\nb=%d\nc=%d\n", a, b, c);
	return 0;
}

int SWAP(int *a, int *b, int *c)
{
	int x=*c;
	*c=*b;
	*b=*a;
	*a=x;
}
