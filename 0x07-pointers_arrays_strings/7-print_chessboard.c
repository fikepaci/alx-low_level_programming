#include "holberton.h"

/**
* print_chessboard - prints the chessboard.
* @a: takes in array
*/

void print_chessboard(char (*a)[8])
{
int subc, primc = 0;

while (primc < 8)
{
subc = 0;
while (subc < 8)
_putchar(a[primc][subc++]);
_putchar('\n');
primc++;
}
}
