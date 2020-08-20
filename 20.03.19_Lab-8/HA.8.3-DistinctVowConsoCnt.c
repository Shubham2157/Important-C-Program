#include<stdio.h>
#include<string.h>

int main()
{
	char s[100], v[5], c[21];
	printf("Input string: ");
	scanf("%[^\n]%*c", s);
	int l=strlen(s), cntV=0, cntC=0;
	char *p;
	p=s;
	for(int i=0; i<l; ++i)
	{
		int flag=0, j;
		if(*p=='a' || *p=='A' || *p=='e' || *p=='E' || *p=='o' || *p=='O' || *p=='i' || *p=='I' || *p=='u' || *p=='U')
		{
			for(j=0; j<strlen(v); ++j)
				if(*p==v[j])
					flag=1;
			if(flag==0)
			{
				++cntV;
				v[j]=*p;
			}
		}
		else 
		{
			for(j=0; j<strlen(c); ++j)
				if(*p==c[j])
					flag=1;
			if(flag==0)
			{
				++cntC;
				c[j]=*p;
			}
		}
		p++;
	}
	printf("No. of distinct vowels: %d\n", cntV);
	printf("No. of distinct consonants: %d\n", cntC);
	return 0;
}
