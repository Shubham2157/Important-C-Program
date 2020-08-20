#include<stdio.h>

int EvenSum(int);

int main()
{
	int n;
	printf("Input the no.: ");
	scanf("%d", &n);
	printf("Sum of even digits in %d is: %d\n", n, EvenSum(n));
	return 0;
}

int EvenSum(int n)
{
	static int sum=0;
	if(n==0)
		return 0;
	else 
	{
		if(n%2==0)
			return sum+(n%10)+EvenSum(n/10);
		else if(n%2!=0)
			return EvenSum(n/10);
	}
	return sum;
}
