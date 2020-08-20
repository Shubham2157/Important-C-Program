#include<stdio.h>
#include<math.h>

int fact(int);

int main()
{
	int x, n;
	printf("Enter value of x and n:\n");
	scanf("%d%d", &x, &n);
	int flag=-1;
	float ans=1;
	for(int i=1; i<n; ++i)
	{
		ans+=(flag*pow(x, 2*i))/fact(2*i);
		flag*=-1;
	}
	printf("Value of expansion of cosx is: %f\n", ans);
	return 0;
}

int fact(int n)
{
	int f=1;
	for(int i=1; i<=n; ++i)
		f*=i;
	return f;
}
