#include <stdio.h>
/**
*main - entry point
*Return: always 0 (success)
*/
int main(void)
{
printf("Size of char: %d bytes(s)\n", sizeof(char));
printf("Size of int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
