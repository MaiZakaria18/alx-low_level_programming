#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: charachter
 * Return: pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
int x;
for (x = 0; s[x] >= '\0'; x++)
{
if (s[x] == c)
return (s + x);
}
return ('\0');
}
