#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	printf("Input the string: ");
	scanf("%[^\n]%*c", str);
	int cntV=0, cntC=0;
	char *ptr;
	ptr=str;
	for(int i=0; i<strlen(str); ++i)
	{
		switch(*ptr)
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				++cntV;
				break;
			case 32:
				break;
			default:
				++cntC;
				break;
		}
		ptr++;
	}
	printf("No. of Vowels:%d\nNo.of Consonants:%d\n", cntV, cntC);
	return 0;
}
