#include<stdio.h>
#include<string.h>

int main()
{
	char s[50];
	printf("Input string: ");
	scanf("%[^\n]%*c", s);
	int l=strlen(s);
	for(int i=0; i<l-1; ++i)
		for(int j=0; j<l-i-1; ++j)
		{
			if(s[j+1]==32)
			{
				j+=2;
				continue;
			}
			char a = tolower(s[j]);
			char b = tolower(s[j+1]);
			if(a>b)
			{
				char c=s[j];
				s[j]=s[j+1];
				s[j+1]=c;
			}
		}
	printf("Sorted string: %s\n", s);
	return 0;
}
