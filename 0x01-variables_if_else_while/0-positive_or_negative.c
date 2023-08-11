#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Check for number if it is positive or negative'
  *Return: always 0
  */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%dispositive\n", n);
}
else if (n == 0)
{
printf("%diszero\n", n);
}
else
{
printf("%disnegative\n", n);
}
return (0);
}
