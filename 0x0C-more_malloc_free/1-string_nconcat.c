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
size_t l1 = strlen(s1);
size_t l2 = strlen(s2);
result = malloc(l1 + n + 1);
if (n >= l2)
n = l2;
if (result == NULL)
return (NULL);
strcpy(result, s1);
strncat(result, s2, n);
return (result);
}
