#include <unistd.h>

/**
* _putchar - write the character of c to stdout
* @c: the character to print
*
* Return: On success 1.
* On error, -1 is returned, and error js set apprioprately 
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
