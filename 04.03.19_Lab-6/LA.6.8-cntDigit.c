#include<stdio.h>

int cntDigit(int);

int main()
{
	int n;
	printf("Input the no.: ");
	scanf("%d", &n);
	int c=0;
	c+=cntDigit(n);
	printf("No of digits in %d is: %d\n", n, c);
	return 0;
}

int cntDigit(int n)
{
	if(n==0)
		return 0;
	else
		return 1+cntDigit(n/10);
}
