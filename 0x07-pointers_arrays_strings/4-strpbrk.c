#include "main.h"
#include <stdio.h>

/**
* *_strpbrk - searches a string for any of a set of bytes
* @s: string to search
* @accept: string containing the bytes to look for
*
* Return: pointer to the bytes in s that matches one of the bytes to look for
* or NULL if no such bytes is found
*/
char *_strpbrk(char *s, char *accept)
{
int a, b;

for (a = 0; *s != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (*s == accept[b])
{
return (s);
}
}
s++;
}

return (NULL);
}
