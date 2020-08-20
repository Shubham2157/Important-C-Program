#include<stdio.h>
#include<math.h>

int Power(int, int);

int main()
{	
	int x, y;
	printf("Input value of x and y:\n");
	scanf("%d%d", &x, &y);
	int pow=Power(x, y);
	printf("x^y=%d\n", pow);
	return 0;
}

int Power(int x, int y)
{
	return pow(x, y);
}
