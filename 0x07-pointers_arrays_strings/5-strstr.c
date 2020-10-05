#include "holberton.h"

/**
* _strstr - locates a substring.
* @haystack: string that is being compared.
* @needle: substring that is being located
* Return: NULL is nothing found
*/

char *_strstr(char *haystack, char *needle)
{
int index;

if (*needle == 0)
return (haystack);

while (*haystack)
{
index = 0;

if (haystack[index] == needle[index])
{
do {
if (needle[index + 1] == '\0'
return (haystack);

index++;
} while (haystack[index] == needle[index]);
}
haystack++;
}
return ('\0');
}
