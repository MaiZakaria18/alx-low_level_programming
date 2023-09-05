#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size
 * @c: char
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
char *x;
unsigned int y;
x = malloc(size * sizeof(char));
if (size == 0 || x == NULL)
{
return ('\0');
}
else
{
for (y = 0; y < size; y++)
{
x[y] = c;
}
return (x);
}
}
