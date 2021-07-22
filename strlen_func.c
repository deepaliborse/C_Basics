//Simulate string lengh (strlen) function.

#include<stdio.h>

int stringlenght(char[]);

int main()
{
	char str[10];
	int len;
	printf("Enter the string: ");
	gets(str);
	//printf("\nEntered string is: %s");
	len = stringlengh(str);
	printf("\nLenght of string is: %d", len);
}

int stringlengh(char str[10])
{
	int i=0, len=0;
	while (str[i] != 0)
	{
		len++;
		i++;
	}
	return len;
}
