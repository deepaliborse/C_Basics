//Accept number from user and display whether it is positive number or negative number

#include<stdio.h>

int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);

	if (num > 0)
	{
		printf("\nPositive Number..!!");
	}
	else
	{
		printf("\nNegative Number..!!");
	}
}