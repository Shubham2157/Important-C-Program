#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	printf("Enter the sentence : ");
	scanf("%[^\n]%*c",a);
	int t= strlen(a);
	printf("Last characters are : ");
	for(int i=0;i<t;i++)
		if(a[i]==' ')
			printf("%c ",a[i-1]);
	printf("%c\n",a[t-1]);
}
