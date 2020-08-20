#include<stdio.h>
#include<math.h>

int LCM(int, int);

int main()
{	
	int x, y;
	printf("Input the numbers:\n");
	scanf("%d%d", &x, &y);
	printf("LCM of %d and %d is: %d\n", x, y, LCM(x, y));
	return 0;
}

int LCM(int x, int y)
{
	int p=1;
	for(int i=2; i<=fmax(x, y); ++i)
	{
		if(x%i==0 && y%i==0)
			while(x%i==0 && y%i==0)
			{
				p*=i;
				x/=i;
				y/=i;
			}
		if(x==1 || y==1)
			break;
	}
	return p;
}
	
