#include<stdio.h>
#include<string.h>

int main()
{
	char s[100], *p;
	printf("Input the string: ");
	scanf("%s", s);
	p=s;
	int l=strlen(s);
	for(int i=0; s[i]!='\0';i+=2)
	{
		if(i==l-1)
			break;
		int x=*p;
		*p=*(p+1);
		*(p+1)=x;
		p+=2;
	}
	printf("New string: %s\n", s);
	return 0;
}
