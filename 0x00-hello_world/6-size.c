#include <stdio.h>
/**
*main - entry point
*Return: always 0 (success)
*/
int main(void)
{
printf("Size of char: %d bytes(s)", sizeof(char));
printf("Size of int: %d byte(s)", sizeof(int));
printf("Size of a long int: %d byte(s)", sizeof(long int));
printf("Size of a long long int: %d byte(s)", sizeof(long long int));
printf("Size of a float: %d byte(s)", sizeof(float));
return (0);
