#include <stdio.h>

/**
 * string_toupper - Converts lowercase letters to uppercase in a string
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
           
str[i] = str[i] - ('a' - 'A');
}
i++;
}

return str;
}
