#include<stdio.h>

int main()
{
	int n;
	printf("Input size of array: ");
	scanf("%d", &n);
	int a[n], *ptr;
	printf("Input array:\n");
	for(int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	printf("Array in reverse order:\n");
	ptr=&a[n-1];
	for(int i=0; i<n; ++i)
	{
		printf("%d ", *ptr);
		ptr--;
	}
	printf("\n");
	return 0;
}
