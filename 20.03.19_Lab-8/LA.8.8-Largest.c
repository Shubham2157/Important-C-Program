#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, *ptr, max=0;
	printf("Input size of array: ");
	scanf("%d", &n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("Input array:\n");
	for(int i=0; i<n; ++i)
	{
		scanf("%d", ptr);
		if(*ptr>max)
			max=*ptr;
		ptr++;
	}
	printf("Largest element in array is: %d\n", max);
	return 0;
}
