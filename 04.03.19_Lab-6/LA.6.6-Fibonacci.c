#include<stdio.h>

int Fibonacci(int);

int main()
{
	int n;
	printf("Input the no.: ");
	scanf("%d", &n);
	Fibonacci(n);
	printf("\n");
	return 0;
}

int Fibonacci(int n)
{
	printf("0 ");
	int a=1, add=0, last_a;
	while(n-1!=0)
	{
		printf("%d ", a);
		last_a=a;
		a+=add;
		add=last_a;
		--n;
	}
}
