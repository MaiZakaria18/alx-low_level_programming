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
int size1 = (s1 != NULL) ? strlen(s1) : 0;
int size2 = (s2 != NULL) ? strlen(s2) : 0;
conc = malloc((size1 + size2 + 1) * sizeof(char));
if (conc == 0)
{
return (NULL);
}
for (i = 0; i < size1; i++)
{
if (s1 == NULL)
s1 = " ";
conc[i] = s1[i];
for (i = 0; i < size2; i++)
{
conc[size1 + i] = s2[i];
}
}
conc[size1 + size2] = '\0';
return (conc);
}
