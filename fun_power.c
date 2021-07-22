//Accept base and power values in main and calculate power in main and display result in main.

/* -Hint:	
	Base: 4, Power: 4, result = ?
	(4 ^ 3)--> (4 * 4 * 4) = (16 * 4) = 64 
	(r)--> (b * b * b) = (r * b)
*/


#include<stdio.h>

int powers(int);

int main()
{
	int base, power, result;
	printf("Enter base and power: \n");
	scanf("%d %d", &base, &power);
	result = powers(base, power);
	printf("Result is: %d", result);
}

int powers(int base, int power)
{
	int result = 1;
	while (power > 0)
	{
		result = result * base;
		power--;
	}
	return result;
}


//We don't have any starting condition here, but we have stopping condition.
//The number of iteration of loop is uncertain. Hence use while loop.
