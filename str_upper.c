//Convert lower case string into upper case.

#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	int i, len = 0;

	printf("Enter string: ");
	gets(str);

	printf("\nString in lower case: %s", str);

	len = strlen(str);

	for (i = 0; i <= len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z') //can use ascii values directly.
		{
			str[i] = str[i] - 32;
		}
	}
	printf("\n\nString in upper case: %s", str);
}