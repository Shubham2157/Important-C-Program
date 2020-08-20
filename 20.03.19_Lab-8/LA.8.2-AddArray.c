#include<stdio.h>

int main()
{
	int n;
	printf("Input size of array: ");
	scanf("%d", &n);
	int a[n], *x, sum=0;
	x=a;
	for(int i=0; i<n; ++i)
	{
		scanf("%d", x);
		sum+=*x;
		x++;
	}
	printf("Sum=%d\n", sum);
	return 0;
}
