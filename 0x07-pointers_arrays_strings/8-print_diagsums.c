#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - unction that prints the sum of the two diagonals
 * @a: row
 * @size: int
 */
void print_diagsums(int *a, int size)
{
int x;
int sum_1 = 0;
int sum_2 = 0;
for (int x = 0; x < size; x++)
{
sum_1 += a[x];
sum_2 += a[(size - 1 - x)];
a += size;
}
printf("%d\n", sum_1);
printf("%d\n", sum_2);
}
