#include "holberton.h"

/**
* print_diagsums - prints the sum of the two diagonals
*                  of a square matrix of integers.
* @a: array
* @size: size
*/

void print_diagsums(int *a, int size)
{
int i, j, leftsum, rightsum;

leftsum = 0;
rightsum = 0;

for (i = 0; i < size * size; i += size + 1)
{
leftsum += a[i];
}
for (j = size - 1; j < (size * size) - 1; j += size - 1)
{
rightsum += a[j];
}
printf("%d, %d\n", leftsum, rightsum);
}
