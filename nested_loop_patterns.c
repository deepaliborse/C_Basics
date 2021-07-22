/*Print the following patterns: 

pattern-1	pattern-2	pattern-3	pattern-4
1234		1111		1			1
1234		2222		22			12
1234		3333		333			123
1234		4444		4444		1234
*/


#include<stdio.h>

int main()
{
	int c, r;

	/*
	printf("Pattern-1:");
	for (c = 1; c <= 4; c++)
	{
		printf("\n");
		for (r = 1; r <= 4; r++)
		{
			printf("%d", r);
		}
	}
	*/


	/*
	printf("Pattern-2:");
	for (c = 1; c <= 4; c++)
	{
		printf("\n");
		for (r = 1; r <= 4; r++)
		{
			printf("%d", c);
		}
	}
	*/

	
	printf("Pattern-3:");
	for (c = 1; c <= 4; c++)
	{
		printf("\n");
		for (r = 1; r <= c; r++)
		{
			printf("%d", c);
		}
	}
	

	/*
	printf("Pattern-3:");
	for (c = 1; c <= 4; c++)
	{
		printf("\n");
		for (r = 1; r <= c; r++)
		{
			printf("%d", r);
		}
	}
	*/
}
