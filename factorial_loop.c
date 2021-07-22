//Accept a number from user and display it's factorial.

#include<stdio.h>

int main()
{
	int num, count, factorial = 1;
	printf("Enter any number:");
	scanf("%d", &num);

	for (count=num; count>=1; count--)
	{
		factorial = factorial * count;
	}
	printf("\nThe factorial of number %d is: %d", num, factorial);
}