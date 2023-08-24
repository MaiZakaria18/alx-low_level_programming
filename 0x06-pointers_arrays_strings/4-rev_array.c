#include "main.h"
/**
 * reverse_array - function that reverses the content of
 * an array of integers
 * @a: intger
 * @n: intger
 */
void reverse_array(int *a, int n)
{
int x;
int rev;
int z;
for (x = 0, z = n - 1 ; x > z ; x++, z--)
{
rev = a[x];
a[x] = a[z];
a[z] = rev;
}
}
