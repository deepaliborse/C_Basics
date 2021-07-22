//Accept a number from user and display it's fibonacci series.
//firstterm = 0, secondterm = 1.
//nextterm = firstterm + secondterm.

#include<stdio.h>

int main()
{
	int num, count, firstterm = 0, secondterm = 1, nextterm;

	printf("Enter the number:  ");
	scanf("%d", &num);

	printf("The Fibonaccy series of number is: \n");

	for (count = 0; count <= num; count++)
	{
		printf("%d\n", firstterm);
		nextterm = firstterm + secondterm;
		firstterm = secondterm;
		secondterm = nextterm;
	}
}