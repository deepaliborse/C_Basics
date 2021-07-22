//Accept a number and display whether it is EVEN or ODD

#include<stdio.h>

int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("\nThe Number is EVEN!!", num);
	}
	else
	{
		printf("\nThe Number is ODD!!", num);
	}
}