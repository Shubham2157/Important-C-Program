#include<stdio.h>

union ABC
{
	char a;
	int b;
	double c;
};

int main()
{
	union ABC s;
	char z;
	printf("Input a: ");
	scanf("%c", &s.a);
	printf("a: %c\n", s.a);
	printf("Input b: ");
	scanf("%d", &s.b);
	printf("b: %d\n", s.b);
	printf("Input c: ");
	scanf("%lf", &s.c);
	printf("c: %lf\n", s.c);
	printf("\nNow input a, b, c together:\n");
	scanf("%c%c%d%lf", &s.a, &z, &s.b, &s.c);
	printf("a: %c\nb: %d\nc: %lf\n", s.a, s.b, s.c);
	return 0;
}
