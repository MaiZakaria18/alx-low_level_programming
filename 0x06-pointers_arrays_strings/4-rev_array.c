#include "main.h"
/**
 * reverse_array - function that reverses the content of
 * an array of integers
 * @a: intger
 * @n: intger
 * Return: no return
 */
void reverse_array(int *a, int n)
{
int rev;
int x;
int z;
for (x = 0, z = (n - 1); x < z ; x++, z--)
{
rev = a[x];
a[x] = a[z];
a[z] = rev;
}
}
