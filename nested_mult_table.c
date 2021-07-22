//Peint multiplication table of 2-5.

#include<stdio.h>

int main()
{
	int i, num;

	for (num = 2; num <= 5; num++)
	{
		printf("\n\n_____ Multiplication table of %d _____\n", num);

		for (i = 1; i <= 10; i++)
		{
			printf("\n%d * %d = %d", num, i, (num*i));
		}
	}
}