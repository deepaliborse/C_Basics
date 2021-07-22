//Accept a string from user and display its lenght.

#include<stdio.h>
#include<string.h>

int main()
{
	int len, i;
	char str[10];

	printf("Enter the string: ");
	//scanf("%s", str);
	gets(str);

	printf("String is: %s", str);

	len = strlen(str);
	printf("\nLenght of string is: %d", len);
}