#include "holberton.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: string
* @accept: accept string
*
*Return: count of accept
*/

unsigned int _strspn(char *s, char *accept)
{
int a, b, c = 0;

for (a = 0; s[a] != '\0' ; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
{
c++;
break;
}
}
if (s[a] != accept[b])
break;
}
return (c);
}
