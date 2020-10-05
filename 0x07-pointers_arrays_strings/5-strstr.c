#include "holberton.h"

/**
* _strstr - locates a substring.
* @haystack: string that is being compared.
* @needle: substring that is being located
* Return: NULL is nothing found
*/

char *_strstr(char *haystack, char *needle)
{
int a, b, c;

for (a = 0; haystack[a] != '\0'; i++)
{
for (b = a, b = 0; needle[b] != '\0'; c++, b++)
{
if (needleb[b] != haystack[c] || haystack[c] == '\0')
break;
}
if (needle[b] == '\0')
return (haystack + i);
}
return (NULL);
}
