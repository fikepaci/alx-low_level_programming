#include "holberton.h"
#include "string.h"

/**
* _print_rev_recursion - prints a string in reverse.
* @s: a string to be reversed.
*/

void _print_rev_recursion(char *s)
{

int begin, end;
char c;

if (begin >= end)
return;

c = *(s + begin);
*(s + begin) = *(s + end);
*(s + end) = c;

reverse(s, ++begin, --end);
}
