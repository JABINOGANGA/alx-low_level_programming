#include <stdio.h>
#include <stdiolib.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 *
 * Return: 0 for (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
	putchar(num);
	}
	putchar(10);

	return (0);
}
