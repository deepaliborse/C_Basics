//Accept 10 intergers in array and dispaly even numbers in array

#include<stdio.h>

int main()
{
	int array[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("\nEnter elements of array:: ");
		scanf("%d", &array[i]);
	}

	printf("\nThe even numbers in array are:\n");
	for (i = 0; i < 10; i++)
	{
		if (array[i] % 2 == 0)
		{
			printf("\t%d,", array[i]);
		}
	}
}




