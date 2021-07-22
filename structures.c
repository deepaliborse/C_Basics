#include<stdio.h>

typedef struct Student
{
	int rollno;
	char name[10];
	float marks;
}stud;

void accept(stud*);
void display(stud);
int main()
{
	struct Student s1 = { 100,"john",56 };

	accept(&s1);
	display(s1);
}
void accept(stud* sptr)
{
	printf("\n ENter the details::");
	scanf("%d %s %f", &sptr->rollno, sptr->name, &sptr->marks);
}

void display(stud s1)
{
	printf("\n The details are %d %s %f", s1.rollno, s1.name, s1.marks);
}



