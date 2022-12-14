#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @c: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *c)
{
	int i;
	unsigned int val = 0;

	if (!c)
i		return (0);

	for (i = 0; c[i]; i++)
	{
		if (c[i] < '0' || c[i] > '1')
			return (0);
		val = 2 * val + (c[i] - '0');
	}

	return (val);
}
