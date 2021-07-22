//Accept a number from user and check whether number is palindrome or not and display the result in main.

#include<stdio.h>

int palindrom(int);

int main()
{
	int num, result;
	printf("Enter any number: ");
	scanf("%d", &num);

	result = palindrom(num);
	if (result == 1)
	{
		printf("\nPalindrome", num);
	}
	else
	{
		printf("\nNot Palindrome", num);
	}
}


int palindrom(int num)
{
	int temp, rnum = 0, digit = 0, result;

	temp = num;
	while (temp != 0)
	{
		digit = temp % 10;
		rnum = (rnum * 10) + digit;
		temp = temp / 10;
	}
	if (rnum == num)
	{
		//printf("\nPalindrome", num);
		result = 1;
	}
	else
	{
		//printf("\nNot Palindrome", num);
		result = 0;
	}
	return result;
}
