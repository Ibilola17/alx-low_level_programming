#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns length as integer;
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

/**
 * cap_string - function that capitalizes first characterof a word
 * @str: string to capitalize
 * Return: returns the capitalized string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a') && (str[index] <= 'z'))

			if (str[index - 1] == ' ' ||
					str[index - 1] == '\t' ||
					str[index - 1] == '\n' ||
					str[index - 1] == ',' ||
					str[index - 1] == '.' ||
					str[index - 1] == '!' ||
					str[index - 1] == '?' ||
					str[index - 1] == '"' ||
					str[index - 1] == '(' ||
					str[index - 1] == ')' ||
					str[index - 1] == '{' ||
					str[index - 1] == '}')
				str[index -= 32;
	}

	retuen (str);
}

