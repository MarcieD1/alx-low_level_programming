#include "main.h"
#include <stddef.h>

/**
* _strstr - Entry point
* @haystack: input
* @needle: input
* Return: Pointer to the beginning of the located sub string, or
* NULL if the sub string is not found
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;

while (*l == *p && *p != '\0')
{
l++;
p++;
}

if (*p == '\0')
return (haystack);
}

return (0);
}
