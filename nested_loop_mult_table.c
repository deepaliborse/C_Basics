//Print multiplication table of 2-5

#include<stdio.h>

int main()
{
	int num, i;
	
	for (num = 2; num <= 7; num++);
	{
		printf("\n");

		for (i = 1; i <= 10; i++)
		{
			printf("\n %d * %d = %d", num, i, (num*i));
		}
	}
}
