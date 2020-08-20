#include<stdio.h>

int fact(int);

int main()
{
	int n, r;
	printf("Enter value of n and r:\n");
	scanf("%d%d", &n, &r);
	int a, b, c;		//a=n!, b=r!, c=(n-r)!;    nCr=a/(b*c)
	a=fact(n);
	b=fact(r);
	c=fact(n-r);
	float x=a/(b*c);
	printf("nCr=%f\n", x);
	return 0;
}

int fact(int n)
{
	int fact=1;
	for(int i=2; i<=n; ++i)
		fact*=i;
	return fact;
}
