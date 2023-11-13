#include <stdio.h>
#include "main.h"

/**
  * main - this is the entry point of the program
  *
  * Return: Alway 0 (Success)
  */
int main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";
	char dest[100];
	int result;

	printf("Length of str1: %d\n", _strlen(str1));
	printf("Length of str2: %d\n", _strlen(str2));

	_strcpy(dest, str1);
	printf("Copied string: %s\n", dest);

	_strcat(dest, str2);
	printf("Concatenated string: %s\n", dest);

	result = _strcmp(str1, str2);

	if (result < 0)
	printf("%s is less than %s\n", str1, str2);
	else if (result > 0)
	printf("%s is greater than %s\n", str1, str2);
	else
	printf("%s is equal to %s\n", str1, str2);

	return (0);
}
