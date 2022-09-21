#include "main.h"

/**
 * cap_string - Capitalizes each word in a string
 * @str: The input string
 * Return: Always the capitalized string
 */

char *cap_string(char *str)
{
	char sprts[13] = "\t\n,;.!?\"(){}";
	int len,
	    i,
	    j;

	len = strlen(str);
	str[0] = toupper(str[0]);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sprts[j])
				str[i + 1] = toupper(str[i + 1]);
		}
	}

	return (str);
}

