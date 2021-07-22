//Display count of vowels in string


#include <stdio.h>
int main()
{
    int i = 0;
    int count = 0;
    char str[10];

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        i++;
    }

    printf("\nCount of vowels in the string: %d", count);

    return 0;
}