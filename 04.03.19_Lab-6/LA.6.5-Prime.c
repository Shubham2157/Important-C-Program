#include<stdio.h>

int isPrime(int);

int main()
{
	int n;
	printf("Input the no.: ");
	scanf("%d", &n);
	for(int i=2; i<=n; ++i)
		if(isPrime(i)==0)
			printf("%d ", i);
	printf("\n");
	return 0;
}

int isPrime(int n)
{
	int flag=0;
	for(int i=2; i<=n/2; ++i)
		if(n%i==0)
		{
			flag=1;
			break;
		}
	return flag;
}
		
