#include <stdio.h>

/**
 * main - where all the excetion begins
 *
 * Description: the function prints alphabets in lower case
 *
 * Return: 0 out
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
