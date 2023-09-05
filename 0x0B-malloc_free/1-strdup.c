#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function
 * @str: array
 * Return: array
 */
char *_strdup(char *str)
{
char *s;
unsigned int size;
unsigned int x;
if (str == 0)
{
return (NULL);
}
else
{
for (size = 0; *str != '\0'; size++)
{
s = malloc(size * sizeof(char) + 1);
if (s == 0)
{
return (NULL);
}
else
{
for (x = 0; x < size; x++)
{
s[x] = str[x];
}
}
}
}
return (s);
}
