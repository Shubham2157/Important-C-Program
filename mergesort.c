#include<stdio.h>
#include<stdlib.h>
//Time Complexity O(n2)
	void merge(int a[],int l,int m,int r)
	{
		int i=l,j=m+1,k=0;
		int *b;
		b=(int *)malloc((l-r+1)*sizeof(int));
				
			while(i<=m && j<=r)
			{
			  if(a[i]<a[j])
			  {
			  	b[k]=a[i];
			  	k++;
			  	i++;
			  	}
			  else
			  {
			  	b[k]=a[j];
			  	k++;
			  	j++;
			  }
			 }
		if(i<=m)
			{
			while(i<=m)
			{
				b[k]=a[i];
				k++;
				i++;
				}
			}
		
		if(j<=r)
			{
			while(j<=r)
			{
				b[k]=a[i];
				k++;
				j++;
				}
			}
		k=0;
		for(i=l;i<=r;i++)
		{
		 a[i]=b[k];
		 k++;
		 }
	}
			
	
	void mergesort(int a[],int l,int r)
	{	
	if(l<r)
	 	{
	 		int m=l+(r-1)/2;
	 		mergesort(a,l,m);
	 		mergesort(a,m+1,r);
	 		merge(a,l,m,r);
	 	
	 	}
	 }
	 	
	 	
	int main()
	{
	 	printf("Enter total elements in array::");
	 	int n;
	 	scanf("%d",&n);
	 	int *ar=(int *)malloc(n*sizeof(int));
	 	
	 	printf("\nThe Array is::");
	 		for(int i=0;i<n;i++)
	 			scanf("%d",&ar[i]);
	 	mergesort(ar,0,n-1);
	 	//print
	 	printf("\nThe Array is::");
	 		for(int i=0;i<n;i++)
	 			printf(" %d",ar[i]);
	 			
	return 0;
	}
