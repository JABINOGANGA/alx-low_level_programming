#include "main.h"
#include <string.h>
/**
 * print_array - starting point of a function
 *
 * @a: first value
 *
 * @n: second value
 *
 * Description: prints a string in reverse
 *
 * Return: Return nothing
 */

void print_array(int *a, int n )
{
int i;

i = 0;
while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}

i++;
}

printf("\n")
;
}

