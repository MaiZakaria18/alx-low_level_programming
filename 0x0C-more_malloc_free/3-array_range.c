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
len = max - min + 1
result = malloc(sizeof(int) * len);
if (result == NULL)
{
return (NULL);
}
for (x = 0; x < len; x++)
{
result[x] = min++;
}
return (result);
}
