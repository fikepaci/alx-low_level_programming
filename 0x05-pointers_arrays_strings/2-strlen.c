#include "holberton.h"

/**
*  _strlen - returns the length of a string.
* @s: The string to get the length of.
*
* Return: The length of @s.
*/

int _strlen(char *s)
{

int length = 0;

while (*s++)
length++;

return (length);

}
