#include <stdio.h>

/**
 * string_toupper - Converts lower case letters to upper case in a string
 * @str: In put string
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

return (str);
}
