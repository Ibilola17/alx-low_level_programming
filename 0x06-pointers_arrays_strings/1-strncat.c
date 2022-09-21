#include "main.h"
/**
 * _strncat - concatenate two strings but add inputed number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at the end of dest
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}

