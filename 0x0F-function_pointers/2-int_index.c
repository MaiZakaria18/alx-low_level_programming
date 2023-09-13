#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: pointer
 * @size: size of array
 * @cmp: pointer to function
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (x = 0; x < size; x++)
{
if (cmp(array[x]))
return (x);
}
return (-1);
}
