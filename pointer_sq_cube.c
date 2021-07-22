//Accept a number and write a single function to calculate square and cube using function and 
//display result in main.


#include<stdio.h>

void calculate(int, int*, int*);

int main()
{
	int num, square = 0, cube = 0;
	printf("\n Enter the number: ");
	scanf("%d", &num);

	calculate(num, &square, &cube);

	printf("\n\nThe sqaure is %d", square);

	printf("\n\nThe cube is %d", cube);
}
void calculate(int num, int* sq, int* cube)
{
	*sq = num*num;

	*cube = num*num*num;
}