//Accept the marks of 5 subjects for a student and display average marks.

#include<stdio.h>

int main()
{
	int marks[5];
	int i, sum=0, avg;

	for (i = 0; i < 5; i++)
	{
		printf("\nEnter the marks: ");
		scanf("%d", &marks[i]);
	}

	for (i = 0; i < 5; i++)
	{
		sum = sum + marks[i];
	}

	avg = sum / 5;
	printf("\n\nAverage marks of staudent: %d", avg);
}
