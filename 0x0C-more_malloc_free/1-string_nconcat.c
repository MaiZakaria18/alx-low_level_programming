#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function
 * @s1: string
 * @s2: string
 * @n: int
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
size_t l_1, l_2;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
l_1 = strlen(s1);
l_2 = strlen(s2);
result = malloc(l_1 + n + 1);
if (n >= l_2)
n = l_2;
if (result == NULL)
return (NULL);
strcpy(result, s1);
strncat(result, s2, n);
return (result);
}
