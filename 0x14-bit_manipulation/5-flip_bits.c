#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function
 * @n: pointer
 * @m: int
 * Return: result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int x, c = 0;
unsigned long int y;
unsigned long int z = n ^ m;
for (x = 63; x >= 0; x--)
{
y = z >> x;
if (y & 1)
c++;
}
return (c);
}
