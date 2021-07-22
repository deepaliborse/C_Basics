//Accept rainfall of one week and display average rainfall.

#include<stdio.h>

int main()
{
	float rainfall[7];
	float sum = 0, avg;
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("\nEnter the rainfall in mm: ");
		scanf("%f", &rainfall[i]);
	}

	for (i = 0; i < 7; i++)
	{
		sum = sum + rainfall[i];
	}

	avg = sum / 7;
	printf("\n\nAverage rainfall of week: %f", avg);
}
