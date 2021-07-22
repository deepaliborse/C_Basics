//Accept and display square of number until user wish to stop

#include<stdio.h>

int main()
{
	int num;
	char wish;

	do
	{
		printf("\nEnter the number: ");
		scanf("%d", &num);

		printf("Sqaure of %d is %d", num, num * num);

		printf("\nDo you wish to continue(Y/N): ");
		scanf(" %c", &wish);
	} while (wish == 'Y' || wish == 'y');
	printf("\nYou exited the loop..!!!");
}