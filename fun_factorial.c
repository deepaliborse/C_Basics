//Accept a number in main and calculate its factorial inside function but dispaly result in main.

#include<stdio.h>

int fact(int);

int main()
{
	int num, factorial;
	printf("Enter th number: ");
	scanf("%d", &num);
	factorial = fact(num);
	printf("Factorial of %d is: %d", num, factorial);
}

int fact(int num)
{
	int factorial = 1, count;
	for (count = num; count > 1; count--)
	{
		factorial = factorial * count;
	}
	return factorial;
}