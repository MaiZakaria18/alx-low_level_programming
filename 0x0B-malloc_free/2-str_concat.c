#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - function
 * @s1: array
 * @s2: array
 * Return: array
 */
char *str_concat(char *s1, char *s2)
{
int i;
char *conc;
int size1 = strlen(s1);
int size2 = strlen(s2);
conc = malloc((size1 + size2 + 1) * sizeof(char));
if (s1 == NULL)
{
s1 = "\0";
}
if (s2 == NULL)
{
s2 = "\0";
}
if (conc == 0)
{
return (NULL);
}
for (i = 0; i <= size1 + size2; i++)
{
if (i < size1)
{
conc[i] = s1[i];
}
else
{
conc[i] = s2[i - size1];
}
}
conc[i] = '\0';
return (conc);
}
