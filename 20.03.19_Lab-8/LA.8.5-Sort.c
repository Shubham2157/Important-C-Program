#include<stdio.h>

int main()
{
	int n;
	printf("Input size of array: ");
	scanf("%d", &n);
	int a[n];
	printf("Input array:\n");
	for(int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	for(int i=0; i<n-1; ++i)		//Bubble Sort in Pointers
		for(int j=0; j<n-i-1; ++j)
			if(*(a+j)>*(a+j+1))
			{
				int x=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=x;
			}
	printf("Sorted array:\n");
	for(int i=0; i<n; ++i)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
