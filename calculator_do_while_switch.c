//Perform arithmetic operation (Menu Driven) using do-while loop.

#include<stdio.h>

int main()
{
	int num1, num2, result, choice;
	char wish;

	do
	{
		printf("Please enter any two numbers:\n");
		scanf("%d %d", &num1, &num2);

		printf("\nChoose operation you want to perform:\n1.ADDITION \n2.SUBTRACTION \n3.MULTIPLICATION \n4.DIVISION\n");
		printf("\nYour choice is: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			result = num1 + num2;
			printf("Addition is: %d\n", result);
			break;

		case 2:
			result = num1 - num2;
			printf("Subtraction is: %d\n", result);
			break;

		case 3:
			result = num1 * num2;
			printf("Multiplication is: %d\n", result);
			break;

		case 4:
			result = num1 / num2;
			printf("Division is: %d\n", result);
			break;

		default:
			printf("\nInvalid choice..!!\n");
		}

		printf("\nDo you wish to countinue(Y/N): ");
		scanf(" %c", &wish);

	} while (wish == 'Y' || wish == 'y');

	printf("\nBye..!!!");
}