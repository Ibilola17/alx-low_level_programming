#include <unistd.h>

/**
 * _puchar -  writes the character to stdout
 * @c: The character to print
 * 
 * Return: On success 1
 * On error, -1 is returned as error is set apprioprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

