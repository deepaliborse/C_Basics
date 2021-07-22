//Accept two arrays (of 5 elements each) from user and merge them.

#include<stdio.h>

int main()
{
	int array1[10], array2[5];
	int i,j;

	for (i = 0; i < 5; i++)
	{
		printf("\nEnter elements of array1: ");
		scanf("%d", &array1[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("\nEnter elements of array2: ");
		scanf("%d", &array2[i]);
	}

	printf("\n\n________ Elements of array1 are: _______\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", array1[i]);
	}

	printf("\n\n________ Elements of array2 are: _______\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", array2[i]);
	}

	for (i = 5, j = 0; i < 10; i++, j++)
	{
		array1[i] = array2[j];
	}
	printf("\n\n________ Arrays after Merging: _______\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", array1[i]);
	}
}