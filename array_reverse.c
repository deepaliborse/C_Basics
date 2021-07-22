//Accept 5 integers in array from user and display its reverse.

#include<stdio.h>

int main()
{
	int i, j, temp;
	int array[5];

	for (i = 0; i < 5; i++)
	{
		printf("\nEnter the elements of array: ");
		scanf("%d", &array[i]);
	}
	
	printf("\n\n_______ Original Array _________\n");
	
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", array[i]);
	}

	i = 0, j = 4;

	while (i < j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i++;
		j--;
	}

	printf("\n\n_______ Reverse Array _________\n");

	for (i = 0; i < 5; i++)
	{
		printf("\t%d", array[i]);
	}
}