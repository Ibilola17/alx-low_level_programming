#include "main.h"
/**
 * _strncpy - C function that copies a string, including the
 * terminating null byte, using an inputed number of byte
 * if the lenght of the source string is less han the maximum byte number,
 * the remainder of the destination string is filed with null bytes
 * works identically to the standard library function 'strncpy'
 * @dest: buffer storing string copy
 * @src: the source string
 * @n :max number of byte coiped
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

