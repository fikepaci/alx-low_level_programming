#include "holberton.h"
#include <string.h>

/**
* _strncat - concatenates two strings.use n bytes from src.
* @dest: Destination string.
* @src: Source string which is appended at the end of @dest
* @n: number of characters of source string that needs to be appended
* Return: returns the pointer to the destination string dest.
*/

char *_strncat(char *dest, char *src, int n)
{

int i, j;

for (i = 0; dest[i] != '\0'; i++)

for (j = 0; src[j] != '\0' && j < n; j++)
dest[i + j] = src[j];

dest[i + j] = '\0';

return (dest);

}
