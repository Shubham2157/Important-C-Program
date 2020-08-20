#include<stdio.h>

#define MAX 2

struct Time
{
	int h, m, s;
};

void AddTime(struct Time*);

int main()
{
	struct Time t[MAX];
	for(int i=0; i<MAX; ++i)
	{
		printf("Input time %d in hh:mm:ss format:\n", i+1);
		scanf("%d%d%d", &t[i].h, &t[i].m, &t[i].s);
	}
	AddTime(t);
	printf("Added Time: %d:%d:%d\n", t[0].h, t[0].m, t[0].s);
	return 0;
}

void AddTime(struct Time *t)
{
	t[0].s+=t[1].s;
	t[0].m+=t[1].m;
	t[0].h+=t[1].h;
	if(t[0].s>=60)
	{
		t[0].m+=t[0].s/60;
		t[0].s=t[0].s%60;
	}
	if(t[0].m>=60)
	{
		t[0].h+=t[0].m/60;
		t[0].m=t[0].m%60;
	}
}
