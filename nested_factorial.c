// Print factorials of 2-7.

#include<stdio.h>

int main()
{
	int num, count, factorial;

	for (num = 2; num <= 7; num++)
	{
		factorial = 1;
		for (count = num; count >= 1; count--)
		{
			factorial = factorial * count;
		}
		printf("Factorial of %d is %d\n\n", num, factorial);
	}
}