#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints the alphabet in lower case, followed by a new line
*
* Return: Always 0 (success)
*/
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
	if (al != 'q' && al != 'e')
		putchar(al);
	}

	putchar(10);

	return (0);
}
