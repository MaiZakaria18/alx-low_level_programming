#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * description - a function that copies a string.
 * @dest: string
 * @src: string
 * @n: integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int length;
for (length = 0; n < length && src[length] != '\0'; length++)
{
dest[length] = src[length];
}
for (length = 0; length < n; length++)
{
dest[length] = '\0';
}
return (dest);
}
