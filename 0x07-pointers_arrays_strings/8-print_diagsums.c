#include "holberton.h"

/**
* print_diagsums - prints the sum of the two diagonals
*                  of a square matrix of integers.
* @a: array
* @size: size
*/

void print_diagsums(int *a, int size)
{
int primc, sum1, sum2, diagc1, diagc2, row;

primc = 0, sum1 = 0, sum2 = 0, diagc1 = 0, diagc2 = 0, row = 0;
while (primc < size * size)
{
if (primc == diagc1 + (row * size))
sum1 += a[primc];
if (primc == (size - diagc2 - 1) + (row * size))
sum2 += a[primc];
if (((primc + 1) % size) == 0)
row++, diagc1++, diagc2++;
primc++;
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
