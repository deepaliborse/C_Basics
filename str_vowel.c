//Accept strings from user and display counts of vowels in string.

#include<stdio.h>

int main()
{
	char string[10];
	int i=0, count=0;

	printf("Enter the string: ");
	//scanf("%s", str);
	gets(string);

	printf("\nString is: %s", string);

	while (string[i] != "\0")
	{
		if (string[i] == "a" || string[i] == "e" || string[i] == "i" || string[i] == "o" || string[i] == "u")
		{
			count++;
		}
		i++;
	}

	printf("\nCount of vowel in string is: %d", count);

	return 0;
}
