#include<stdio.h>
#include<string.h>

int main()
{
	char s[50];
	printf("Input string: ");
	scanf("%[^\n]%*c", s);
	int l=strlen(s);
	s[0]=toupper(s[0]);
	for(int i=0; i<l; ++i)
		if(s[i]==32)
			s[i+1]=toupper(s[i+1]);
	printf("New string: %s\n", s);
	return 0;
}
