//Accept 5 integers in array and replace every even no. with 0.

#include<stdio.h>

int main()
{
	int i;
	int array[5];

	for (i = 0; i < 5; i++)
	{
		printf("\nEnter the element of array: ");
		scanf("%d", &array[i]);
	}

	printf("\n\n_______ Array Before Replacement_______: \n");

	for (i = 0; i < 5; i++)
	{
		printf("\t %d", array[i]);
	}

	for (i = 0; i < 5; i++)
	{
		if (array[i] % 2 == 0)
		{
			array[i] = 0;
		}
	}

	printf("\n\n_______ Array After Replacement_______: \n");

	for (i = 0; i < 5; i++)
	{
		printf("\t %d", array[i]);
	}
}