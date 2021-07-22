//Acept number from user and disply it's multiplication numbers

#include<stdio.h>

int main()
{
	int num, i, multi;
	printf("Enter any number: ");
	scanf("%d", &num);
	printf("\nThe multiplication number of %d are:\n", num);
	for (i= 1; i <= 10; i++)
	{
		multi = num * i;
		printf("%d\n", multi);
	}
}