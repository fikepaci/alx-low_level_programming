#include "holberton.h"
#include <string.h>

/**
* _strncpy - copies a string.
* @dest: Pointer to the destination array where the content is to be copied.
* @src: it is a pointer to source string which will be copied.
* @n: the first n character copied from src to dest.
*
*Return: returns a pointer to the destination string.
*/

char *_strncpy(char *dest, char *src, int n)
{

if ((dest == NULL) && (src == NULL))
return (NULL);

char *start = dest;

while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (start);
}
