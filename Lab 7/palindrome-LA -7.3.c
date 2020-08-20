#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	printf("Enter the string : ");
	scanf("%[^\n]%*c",a);
	int t1 = strlen(a),c=0;
	for(int i=t1-1;i>=0;i--)
	{
		b[c]=a[i];
		c++;
	}
	c=strcasecmp(a,b);
	if(c==0)
		printf("\nPalindrome Word\n");
	else
		printf("\nNot a Palindrome Word\n");
}
