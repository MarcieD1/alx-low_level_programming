#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Prints the sum of args positive number
* @argc: argument count
* @argc: argument vector
*
* Return: Always zero
*/
int main(int argc, char *argv[])
{
int i;
unsigned int k, sum = 0;
char *e;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
e = argv[i];

for (k = 0; k < strlen(e); k++)
{
if (e[k] < 48 || e[k] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(e);
}

printf("%u\n", sum);
return (0);
}
else
{
printf("0\n");
return (0);
}
}
