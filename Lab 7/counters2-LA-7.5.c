#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	printf("Input string: ");
	scanf("%[^\n]%*c", str);
	int l=strlen(str), v[5]={0, 0, 0, 0, 0}, cntC=0;
	for(int i=0; i<l; ++i)
	{
		switch(str[i])
		{
			case 'a':
			case 'A':
				v[0]++;
				break;
			case 'e':
			case 'E':
				v[1]++;
				break;
			case 'i':
			case 'I':
				v[2]++;
				break;
			case 'o':
			case 'O':
				v[3]++;
				break;
			case 'u':
			case 'U':
				v[4]++;
				break;
			case 32:
				break;
			default:
				cntC++;
				break;
		}
	}
	printf("No. of a: %d\n", v[0]);
	printf("No. of e: %d\n", v[1]);
	printf("No. of i: %d\n", v[2]);
	printf("No. of o: %d\n", v[3]);
	printf("No. of u: %d\n", v[4]);
	printf("No. of consonants: %d\n", cntC);
	return 0;
}
