#include "main.h"
/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
int x;
int y;
for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; accept[y] != '\0'; y++)
{
if (s[x] == accept[y])
return (s + x);
}
}
return ('\0');
}
