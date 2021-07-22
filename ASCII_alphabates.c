//Print all the alphabates i.e. lower case and upper case along with their ASCII value.

#include<stdio.h>

int main()
{
	char counter;
	printf("The alphabates with ASCII values are:\n\n");
	printf("\Alphabate\tASCII Value\n");

	for (counter = 'A'; counter <= 'Z'; counter++)
	{
		printf("\t%c\t\t %d\n", counter, counter);
	}
	for (counter = 'a'; counter <= 'z'; counter++)
	{
		printf("\t%c\t\t %d\n", counter, counter);
	}
}