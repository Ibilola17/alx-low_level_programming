#include "main.h"

/**
 * string_touper - chnages all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Retrurn: address to the string
 */

charc*string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

