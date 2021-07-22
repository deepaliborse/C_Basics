//Accept age from user and display whether he/she is eligible for voting or not 

#include<stdio.h>

int main()
{
	int age;
	printf("Enter age of the person: ");
	scanf("%d", &age);

	if (age >= 18)
	{
		printf("\nYou are eligible for voting");
	}
	else 
	{
		printf("\nYou are not eligible for voting");
	}
}