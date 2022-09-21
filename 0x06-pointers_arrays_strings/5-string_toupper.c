#include "main.h"

/**
 * string_toupper - A function that converts a string too all uppercase
 * @str: The string to be converted
 * Return: Always the converted string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/*Subtracting 32 in ASCII*/
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -=32;
		i++;
	};

	return (str);
}

