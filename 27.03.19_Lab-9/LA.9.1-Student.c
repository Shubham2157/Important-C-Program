#include<stdio.h>
#include<stdlib.h>

struct Student 
{
	int roll_no, marks[5], totMarks;
	char name[50], gender;
};

int main()
{
	int n;
	char z;
	printf("Input no. of students: ");
	scanf("%d", &n);
	scanf("%c", &z);
	struct Student *s;
	s=(struct Student*)malloc(n*sizeof(struct Student));
	for(int i=0; i<n; ++i)
	{
		printf("\nStudent %d:\n", i+1);
		printf("Input Name: ");
		scanf("%[^\n]%*c", (s+i)->name);
		printf("Input Roll No.: ");
		scanf("%d", &(s+i)->roll_no);
		scanf("%c", &z);
		printf("Input Gender (M/F): ");
		scanf("%[^\n]%*c", &(s+i)->gender);
		printf("Input marks in 5 subjects:\n");
		s[i].totMarks=0;
		for(int j=0; j<5; ++j)
		{
			scanf("%d", &(s+i)->marks[j]);
			(s+i)->totMarks+=(s+i)->marks[j];
		}
		scanf("%c", &z);
	}
	for(int i=0; i<n; ++i)
	{
		printf("\nName: %s\n", (s+i)->name);
		printf("Roll No.: %d\n", (s+i)->roll_no);
		printf("Gender: %c\n", (s+i)->gender);
		printf("Total Marks: %d\n", (s+i)->totMarks);
	}
	printf("\nList of students who failed:\n");
	for(int i=0; i<5; ++i)
		for(int j=0; j<n; ++j)
			if((s+j)->marks[i]<40)
				printf("%s failed in subject %d.\n", (s+j)->name, j+1);
	return 0;
}
