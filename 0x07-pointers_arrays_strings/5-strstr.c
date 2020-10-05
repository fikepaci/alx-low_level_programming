#include "holberton.h"

/**
* _strstr - locates a substring.
* @haystack: string that is being compared.
* @needle: substring that is being located
* Return: NULL is nothing found
*/

char *_strstr(char *haystack, char *needle)
{
unsigned int a = 0, b = 0;
while (hystack[a])
{
while (needle[b] && (haystack[a] == needle[0]))
{
if (haystack[a + b] == needle[b])
b++;
else
break;
}
if (needle[b])
{
a++;
b = 0;
}
else
return (haystack + i);
}
return (0);
}
