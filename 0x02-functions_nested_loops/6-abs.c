#include "main.h"

/**
 * _abs - where the excecution begins
 *
 * @n: interger to be computed to it's absolute value
 *
 * Description: computes interger to it's absolute value
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
