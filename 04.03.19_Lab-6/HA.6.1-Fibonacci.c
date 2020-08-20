#include<stdio.h>

int Fibonacci(int);

int main()
{
	int n;
	printf("Input the no.: ");
	scanf("%d", &n);
	if(n==0)
	{
		printf("0 is in the Fibonacci sequence.\n");
		return 0;
	}
	int flag=Fibonacci(n);
	if(flag==1)
		printf("%d is in the Fibonacci sequence.\n", n);
	else 
		printf("%d is not in the Fibonacci sequence.\n", n);
	return 0;
}

int Fibonacci(int n)
{
	int a=1, add=0, last_a;
	for(int i=0; ; ++i)
	{
		if(a==n)
			return 1;
		else if(a>n)
			return 0;
		last_a=a;
		a+=add;
		add=last_a;
	}
}
