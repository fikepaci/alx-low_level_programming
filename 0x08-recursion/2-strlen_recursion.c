#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: string to be counted it's length
* Return: length of the string..
*/

int _strlen_recursion(char *s)
{

int c = 0;
if (*s == NULL)
return (c);
else
{
c++;
return (_strlen_recursion(++s));
}
}
