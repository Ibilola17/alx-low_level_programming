#include "main.h"
#include <unistd.h>

/**
* _putchar.c - writes the character c to stdout
* @c: The character to print
*
* Return: on success 1
* On error, -1 is returned and error is set apprioprately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
