//Print first 10 natural numbers using recursion function in decreasing oreder.

#include<stdio.h>

int naturalnum(int);


int main()
{
	int num;
	for (num = 10; num >= 1; num--)
	{
		printf("\n%d", naturalnum(num));
	}
}


int naturalnum(int num)
{
	if (num != 0)
	{
		return naturalnum(num - 1);
	}
}





