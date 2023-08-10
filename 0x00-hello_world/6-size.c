#include <stdio.h>
/**
*main - entry point
*Return: always 0 (success)
*/
int main(void)
{
printf("Sizeofchar:%dbytes(s)", sizeof(char));
printf("Sizeofint:%dbyte(s)", sizeof(int));
printf("Sizeofalongint:%dbyte(s)", sizeof(long int));
printf("Sizeofalonglongint:%dbyte(s)", sizeof(long long int));
printf("Sizeofafloat:%dbyte(s)", sizeof(float));
return (0);
