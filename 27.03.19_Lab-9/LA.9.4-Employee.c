#include<stdio.h>
#include<stdlib.h>

struct Employee
{
	char name[50], gender, desig[25], dept[30];
	int pay, grossPay;
};

int main()
{
	struct Employee *e;
	char z;
	int n;
	printf("Input no. of employees: ");
	scanf("%d", &n);
	scanf("%c", &z);
	e=(struct Employee*)malloc(n*sizeof(struct Employee));
	for(int i=0; i<n; ++i)
	{
		printf("\nEmployee %d:\n", i+1);
		printf("Input Name: ");
		scanf("%[^\n]%*c", (e+i)->name);
		printf("Input Gender (M/F): ");
		scanf("%[^\n]%*c", &(e+i)->gender);
		printf("Input Designation: ");
		scanf("%[^\n]%*c", (e+i)->desig);
		printf("Input Department: ");
		scanf("%[^\n]%*c", (e+i)->dept);
		printf("Input Pay: ");
		scanf("%d", &(e+i)->pay);
		scanf("%c", &z);
	}
	for(int i=0; i<n; ++i)
	{
		printf("\nEmployee %d:\n", i+1);
		printf("Name: %s\n", (e+i)->name);
		printf("Gender: %c\n", (e+i)->gender);
		printf("Designation: %s\n", (e+i)->desig);
		printf("Department: %s\n", (e+i)->dept);
		(e+i)->grossPay=(e+i)->pay+((e+i)->pay*0.25)+((e+i)->pay*0.75);
		printf("Gross Pay: %d\n", (e+i)->grossPay);
	}
	return 0;
}
