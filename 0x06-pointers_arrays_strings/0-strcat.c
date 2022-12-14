#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: variable to the first value
 * @src: variable to the second value
 * Description: the idea is to add the src string to the dest string
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, len2 = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}

	while (len2 >= 0)
	{
		*(dest + len) = *(src + len2);
		if (*(src + len2) == '\0')
			break;
		len++;
		len2++;
	}
	return (dest);
}
