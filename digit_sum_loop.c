//Accept a number and display the sum of its digits.
//We don't know how many times the loop will execute.
//Hence we will use 'While' loop

#include<stdio.h>

int main()
{
	int num, temp, digit, sum = 0;

	printf("Enter any number: ");
	scanf("%d", &num);

	temp = num;

	while (temp != 0)
	{
		digit = temp % 10;
		sum = sum + digit;
		temp = temp / 10;
	}

	printf("\nSum of digits of number %d is %d\n", num, sum);
}