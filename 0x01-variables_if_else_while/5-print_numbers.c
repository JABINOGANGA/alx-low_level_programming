#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single digit number of base 10 starting from zero
 * followed by a new line
 * Return: 0 if success
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
