#include "main.h"
#include <stdio.h> /* Include the <stdio.h> header */

/**
* print_line - straight -line
* @n: No of times
* Return:no return
*/
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
putchar ('_');
}
putchar ('\n');
}
