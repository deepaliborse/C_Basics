//Accept a number from user n display until user enters 0

#include<stdio.h>

int main()
{
	int num = 1;

	while (num != 0)
	{
		printf("\nEnter the number: ");
		scanf("%d", &num);

		printf("Entered number is: %d\n", num);
	}

	printf("Loop close..!!");
}
