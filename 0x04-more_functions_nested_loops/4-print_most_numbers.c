#include "holberton.h"

/**
* print_most_numbers - printsfrom 0 - 9 except 2 and 4, followed by a new line.
*/

void print_most_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
if (a != 2 && a != 4)
_putchar((a % 10) + '0');
}
_putchar('\n');
}
