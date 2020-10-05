#include "holberton.h"

/**
* _strstr - locates a substring.
* @haystack: string that is being compared.
* @needle: substring that is being located
* Return: NULL is nothing found
*/

char *_strstr(char *haystack, char *needle)
{
char *start;
char *search;

while (*haystack != '\0')
{
start = haystack;
search = needle;
while (*search == *haystack && *haystack != 0
&& *searxh != 0)
{
haystack++;
search++;
}
if (*search == 0)
return (start);
haystack = start + 1;
}
return (0);
}
