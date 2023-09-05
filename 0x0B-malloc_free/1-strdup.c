#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - function
 * @str: array
 * Return: array
 */
char *_strdup(char *str)
{
char *p;
unsigned int x;
if (str == 0)
{
return (NULL);
}
p = malloc((strlen(str) * sizeof(char)) + 1);
if (p == 0)
{
return (NULL);
}
for (x = 0; x < strlen(str); x++)
{
p[x] = str[x];
}
return (p);
}
