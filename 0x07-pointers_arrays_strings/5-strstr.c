#include "holberton.h"

/**
* _strstr - locates a substring.
* @haystack: string that is being compared.
* @needle: substring that is being located
* Return: NULL is nothing found
*/

char *_strstr(char *haystack, char *needle)
{
char *start, *p, *t;

start = haystack;

while (*start != 0)
{
p = start;
t = needle;

if (*t == 0)
return (start);

while (*p != 0)
{
if (*t != *p)
break;
t++;
p++;
if (*t == 0)
return (start);
}
start++;
}
return (0);
}
