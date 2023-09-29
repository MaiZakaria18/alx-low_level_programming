#include "main.h"
#include <stdio.h>

/**
 * get_bit - function
 * @n: int
 * @index: int
 * Return: result
 */

int get_bit(unsigned long int n, unsigned int index)
{
int val;
if (index > 63)
return (-1);
val = (n >> index) & 1;
return (val);
}
