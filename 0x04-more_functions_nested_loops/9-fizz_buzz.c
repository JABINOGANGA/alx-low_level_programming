#include <stdio.h>
/**
 * main - execution start point
 *
 * Description: prints FizzBuzz
 *
 * Return: no value
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 5 == 0) && (n % 3 == 0))
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
