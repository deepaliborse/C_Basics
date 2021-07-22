//Accept and display array using functions.

#include<stdio.h>

void accept(int[]);
void display(int[]);

int main()
{
	int array[5];
	accept(array);
	printf("\nElements of array are:\n");
	display(array);
}
void accept(int a[5])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("Enter the element of array: ");
		scanf("%d", &a[i]);
	}
}
void display(int a1[5])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", a1[i]);
	}
}










