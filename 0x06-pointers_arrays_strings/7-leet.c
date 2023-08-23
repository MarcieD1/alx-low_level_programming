#include <stdio.h>

/**
 * leet - Encodes a string into 1337speak
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
 char leet_chars[] = "aeotlAEOTL";
 char leet_replacements[] = "430710";

 int i, j;

 for (i = 0; str[i] != '\0'; i++)
 {
 for (j = 0; leet_chars[j] != '\0'; j++)
 {
 if (str[i] == leet_chars[j])
 {
 str[i] = leet_replacements[j];
 break;
 }
 }
 }

return str;
}
