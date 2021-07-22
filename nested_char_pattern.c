//Print following pattern.
/*AAAA
  BBB
  CC
  D*/

#include<stdio.h>

int main()
{
	char r, c;
	for (r = 'A'; r <= 'D'; r++)
	{
		printf("\n");
		for (c = 'D'; c >= r; c--)
		{
			printf("%c", r);
		}
	}
}