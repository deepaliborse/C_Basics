//Accept a number and display the sum of its digits.

#include<stdio.h>

int sumdigit(int);

int sumdigit(int num)
{
	if(num == 0)
	{
		return 0;
	}
	else
	{
		return num % 10 + sumdigit(num / 10);
	}
}

int main()
{
	int num, sum;
	printf("Enter the number: ");
	scanf("%d", &num);

	sum = sumdigit(num);
	printf("\The sum of %d is %d.", num, sum);
	return 0;
}