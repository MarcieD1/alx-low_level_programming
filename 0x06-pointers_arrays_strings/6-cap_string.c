#include <stdio.h>

/**
 * is_separator - Checks if a character is a word separator
 * @c: The character to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return 1;
}
}

return 0;
}

/**
 * cap_string - Capitalizes all words in a string
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;

while (str[i] != '\0')
{
if (is_separator(str[i]))
{
capitalize_next = 1;
}
else if (capitalize_next)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
capitalize_next = 0;
}
else
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] = str[i] + ('a' - 'A');
}
}

i++;
}

return str;
}
