#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, *ptr, *backup;
	printf("Input size of array: ");
	scanf("%d", &n);
	ptr=(int*)malloc(n*sizeof(int));
	backup=ptr;
	for(int i=0; i<n; ++i)
	{
		scanf("%d", ptr);
		ptr++;
	}
	int x=*(ptr-1);
	for(int i=0; i<n; ++i)
	{
		ptr--;
		*ptr=*(ptr-1);
	}
	*ptr=x;
	ptr=backup;
	printf("Sorted array:\n");
	for(int i=0; i<n; ++i)
	{
		printf("%d ", *ptr);
		ptr++;
	}
	printf("\n");
	return 0;
}
