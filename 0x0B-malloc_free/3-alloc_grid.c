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
if (width <= 0 || height <= 0)
{
return (NULL);
}
char **func;
func = malloc(sizeof(*func) * height);
if (func == NULL)
{
return (NULL);
}
for (int i = 0; i < height; i++)
{
func[i] = malloc(sizeof(**func) * width);
if (func[i] == NULL)
{
for (int j = 0; j < i; j++)
{
free(func[j]);
}
free(func);
return (NULL);
}
for (int j = 0; j < width; j++)
{
func[i][j] = 0;
}
}
return (func);
}
