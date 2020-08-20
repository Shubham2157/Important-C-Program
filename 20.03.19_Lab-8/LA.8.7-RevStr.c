#include<stdio.h>
#include<string.h>

int main()
{
	char str[100], *ptr;
	printf("Input the string: ");
	scanf("%[^\n]%*c", str);
	int l=strlen(str);
	ptr=&str[l-1];
	printf("String in reverse: ");
	for(int i=0; i<l; ++i)
	{
		printf("%c", *ptr);
		ptr--;
	}
	printf("\n");
	return 0;
}
