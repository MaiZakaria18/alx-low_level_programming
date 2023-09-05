#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * alloc_grid - func
 * @width: int
 * @height: int
 * Return: array
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **func;
if (width <= 0 || height <= 0)
{
return (NULL);
}
func = malloc(sizeof(*func) * height);
if (func == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
func[i] = malloc(sizeof(**func) * width);
if (func[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(func[j]);
}
free(func);
return (NULL);
}
for (j = 0; j < width; j++)
{
func[i][j] = 0;
}
}
return (func);
}
