#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  executes a function given as a parameter
 * @size: size of the array
 * @array: pointer
 * @action: function to pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;
if (array == NULL || action == NULL)
return;
for (x = 0; x < size; x++)
{
action(array[x]);
}
}
