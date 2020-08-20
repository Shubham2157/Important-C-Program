#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	printf("Enter 1st string : ");
	scanf("%[^\n]%*c",a);
	printf("Enter 2nd string : ");
	scanf("%[^\n]%*c",b);
	int t1 = strlen(a), t2 = strlen(b);
	char c[t1+t2];
	for(int i=0;i<t1;i++)
		c[i]=a[i];
	int x=t1;
	for(int i=0;i<t2;i++)
	{
		c[x]=b[i];
		x++;
	}
	printf("Concated String : ");
	for(int i=0;i<t1+t2;i++)
		if(c[i]!='\0')	
		 	printf("%c",c[i]);
}
