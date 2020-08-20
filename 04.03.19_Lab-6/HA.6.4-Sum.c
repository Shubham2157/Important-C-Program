#include<stdio.h>

int Add(int a[], int);

int main()
{
	int n;
	printf("Input size of array: ");
	scanf("%d", &n);
	int a[n];
	printf("Input array:\n");
	for(int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	int sum=Add(a, n);
	printf("Sum= %d\n", sum);
	return 0;
}

int Add(int a[], int n)
{
	if(n==0)
		return 0;
	else 
		return Add(a, n-1)+a[n-1];
}
