#include<stdio.h>
#include<string.h>

int main()
{
	char str[50], ch;
	printf("Input string: ");
	scanf("%[^\n]%*c", str);
	printf("Input the character to replace: ");
	scanf("%c", &ch);
	int l=strlen(str);
	for(int i=0; i<l; ++i)
		if((str[i]==ch)&&(str[i]>'c'))
			str[i]=str[i]-3;
	printf("New string: %s\n", str);
	return 0;
}
