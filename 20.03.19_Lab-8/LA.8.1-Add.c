#include<stdio.h>

int Add(int*, int*);

int main()
{
	int a, b;
	printf("Input the numbers:\n");
	scanf("%d%d", &a, &b);
	int c=Add(&a, &b);
	printf("Sum= %d\n", c);
	return 0;
}

int Add(int *a, int *b)
{
	return *a+*b;
}
	
