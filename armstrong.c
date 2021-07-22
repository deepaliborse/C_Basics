//Check whether entered number is armstrong or not.

#include<stdio.h>

int main()
{
	int num, digit, sum=0, temp;

	printf("Enter the number: ");
	scanf("%d", &num);

	temp = num;

	while (num > 0)
	{
		digit = num % 10;
		sum = sum + (digit * digit * digit);
		num = num / 10;
	}

	if (temp == sum)
	{
		printf("\nArmstrong Number!");
	}
	else
	{
		printf("\nNot Armstrong Number!");
	}
}