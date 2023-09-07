#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - func
 * @min: int
 * @max: int
 * return:array
 */
int *array_range(int min, int max)
{
int x;
int *result;
if (min > max)
{
return (NULL);
}
result = malloc(sizeof(int) * (max - min + 1));
if (result == NULL)
{
return (NULL);
}
for (x = min; x <= max; x++)
{
result[x - min] = x;
}
return (result);
}
