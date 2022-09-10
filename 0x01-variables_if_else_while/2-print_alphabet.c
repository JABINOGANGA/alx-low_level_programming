#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints the alphabet in lowercase
*
* Return: 0 for success
*/
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
	putchar(l);
	l++;
	}
	putchar('\n');
	return (0);
}
