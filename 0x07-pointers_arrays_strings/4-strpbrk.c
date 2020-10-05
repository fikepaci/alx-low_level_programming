#include "holberton.h"
#include <stdio.h>

/**
* _strpbrk -  searches a string for any of a set of bytes.
* @s: string
* @accept: string comparing string to.
*
* Return: NULL if nothing matches
*/

char *_strpbrk(char *s, char *accept)
{
int a, b;

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
return (s + a);
}
}
return (NULL);
}
