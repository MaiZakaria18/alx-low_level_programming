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
char *conc;
int size1 = strlen(s1);
int size2 = strlen(s2);
conc = malloc((size1 + size2 + 1) * sizeof(char));
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (conc == 0)
{
return (NULL);
}
conc += '\0'
strcat(conc, s1);
strcat(conc, s2);
return (conc);
}
