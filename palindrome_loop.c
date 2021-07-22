//Accept a number and display its reverse.
//Use same logic to check whether number is palindrom.

#include<stdio.h>

int main()
{
	int num, temp, reverse = 0, digit;
	 
	printf("Enter the number: ");
	scanf("%d", &num);

	temp = num;

	while (temp != 0)
	{
		digit = temp % 10;
		reverse = (reverse * 10) + digit;
		temp = temp / 10;
	}

	printf("\nThe reverse of number %d is: %d\n", num, reverse);
}