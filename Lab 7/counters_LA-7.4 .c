#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	printf("Input string: ");
	scanf("%[^\n]%*c", str);
	int l=strlen(str), cntA=0, cntT=0, cntN=0, cntWord=1, cntC=0, cntV=0, cntD=0;
			//Alphabets, tabs, newlines, words, consonants, vowels, digits
	for(int i=0; i<l; ++i)
	{
		if(isalpha(str[i]))
			++cntA;
		if(str[i]=='\t')
			++cntT;
		else if(str[i]=='\n')
			++cntN;
		else if(str[i]==32)
			++cntWord;
		else if(str[i]>=48 && str[i]<=57)
			++cntD;
		else if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='U' || str[i]=='U')
			++cntV;
		else
			++cntC;
	}
	printf("No. of characters:\t%d\n", l);
	printf("No. of alphabets:\t%d\n", cntA);
	printf("No. of Tabs:\t\t%d\n", cntT);
	printf("No. of New Lines:\t%d\n", cntN);
	printf("No. of Words:\t\t%d\n", cntWord);
	printf("No. of Digits:\t\t%d\n", cntD);
	printf("No. of Vowels:\t\t%d\n", cntV);
	printf("No. of Consonants:\t%d\n", cntC);
	return 0;
}
