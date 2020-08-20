#include<stdio.h>
#include<math.h>

int fact(int);

int main()
{
	int n, x;
	printf("Input value of n and x:\n");
	scanf("%d%d", &n, &x);
	int p, d;
	float eX=1;
	for(int i=2; i<=n; ++i)
	{
		int p=i-1;
		int d=fact(i-1);
		eX+=pow(x, p)/d;
	}
	printf("Value of expansion of e^x= %f\n", eX);
	return 0;
}

int fact(int n)
{
	int f;
	for(int i=1; i<=n; ++i)
		f*=i;
	return f;
}
