//Print first 25 prime numbers.

#include<stdio.h>

int main()
{
	int num=1, factor, count=0;

	while (count <= 25)
	{
		for (factor = 2; factor <= num / 2; factor++)
		{
			if (num % factor == 0)
			{
				//printf("\nNot Prime");
				break;
			}
		}
		if (factor > num / 2)
		{
			printf("\n%d ---> %d is Prime\n",count, num);
			count++;
		}
		num++;

	}
}