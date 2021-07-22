//Perform user desired arithmetic operations on the numbers accepted from user using switch case.


#include<stdio.h>

int main()
{
	int n1, n2, result, choice;
	printf("Enter any two numbers: \n");
	scanf("%d %d", &n1, &n2);

	printf("Choose action you want to perform: \n1.ADDITION \n2.SUBTRACTION \n3.MULTIPLICATION \n4.DIVISION\n\n");
	scanf("%d", &choice);
	
	switch (choice)
	{
	case 1:
		result = n1 + n2;
		printf("\nAddition is: %d", result);
		break;

	case 2:
		result = n1 - n2;
		printf("\nSubtraction is: %d", result);
		break;

	case 3:
		result = n1 * n2;
		printf("\nMultiplication is: %d", result);
		break;

	case 4:
		result = n1 / n2;
		printf("\nDivision is: %d", result);
		break;

	default:
		printf("\nInvalid Choice!!!");
		break;
	}
}