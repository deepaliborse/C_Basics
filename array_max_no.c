//Accept 5 integers in array and display the maximum number in array.
#include<stdio.h>

int main()
{
	int array[5];
	int i, max=0;

	for (i = 0; i < 5; i++)
	{
		printf("\nEnter elements of array:: ");
		scanf("%d", &array[i]);
	}

	printf("\nThe maximum numbers in array is: ");
	for (i = 0; i < 5; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	printf("%d", max);
}




