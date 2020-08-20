#include<stdio.h>

struct Distance
{
	float totDist;
};

int main()
{
	struct Distance d[3];
	printf("Input both distances (in meter):\n");
	for(int i=0; i<2; ++i)
		scanf("%f", &d[i].totDist);
	d[2].totDist=d[0].totDist+d[1].totDist;
	printf("Total Distance: %dkm %fm\n", (int)d[2].totDist/1000, (d[2].totDist/1000-(int)d[2].totDist/1000)*1000);
	return 0;
}
