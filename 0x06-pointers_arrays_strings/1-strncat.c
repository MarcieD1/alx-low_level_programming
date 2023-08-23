#include <stdio.h>

/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_end = dest;
int i;

while (*dest_end != '\0')
{
dest_end++;
}

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest_end[i] = src[i];
}

dest_end[i] = '\0';

return dest;
}
