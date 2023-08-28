#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: string
 * @needle: string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
int x;
int y;
for (x = 0; haystack[x] != '\0'; x++)
{
for (y = 0; needle[y] == haystack[x + y]; y++)
if (needle[y + 1] == '\0')
return (haystack + x);
}
return (0);
}
