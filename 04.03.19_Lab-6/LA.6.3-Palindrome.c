#include<stdio.h>

int Reverse(int n);

int main()
{
	int n;
	printf("Input the no.: ");
	scanf("%d", &n);
	int rev=Reverse(n);
	if(n==rev)
		printf("%d is a Palindrome no.\n", n);
	else 
		printf("%d is not a Palindrome no.\n", n);
	return 0;
}

int Reverse(int n)
{
	int rev=0;
	while(n!=0)
	{
		rev=rev*10+(n%10);
		n/=10;
	}
	return rev;
}		
