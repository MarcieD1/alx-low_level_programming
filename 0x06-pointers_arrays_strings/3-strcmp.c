#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Negative value if s1 is less than s2, positive value if s1 is greater than s2,
 *         and 0 if s1 is equal to s2
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}

if (*s1 != '\0')
{
return (*s1);
}
else if (*s2 != '\0')
{
return -(*s2);
}
return (0);
}
