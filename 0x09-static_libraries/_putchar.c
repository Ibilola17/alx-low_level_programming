#include <unistd.h>

/**
 * _putchar - write the character of to stdout
 * @c; the chatacter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set apprioprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

