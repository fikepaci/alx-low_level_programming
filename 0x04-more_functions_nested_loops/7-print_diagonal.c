#include "holberton.h"

/**
* print_diagonal -  draws a diagonal line on the terminal.
*@n: show the number of \ characters to be printed.
*/

void print_diagonal(int n)
{
int line, steps;

if (n > 0)
{
for (line = 0; line < n; line++)
{
for (steps = 0; steps < line; steps++)
_putchar(' ');
_putchar('\\');

if (line == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
