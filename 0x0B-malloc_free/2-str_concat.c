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
unsigned int x = strlen(s1) + strlen(s2);
conc = malloc((x + 1) * sizeof(char));
if (conc == 0)
{
return (NULL);
}
strcpy(conc, s1);
strcat(conc, s2);
return (conc);
}
