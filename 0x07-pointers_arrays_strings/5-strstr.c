#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: string
 * @needle: string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *y = haystack;
char *x = needle;
while (*x != '\0' && *y == *x)
{
y++;
x++;
}
if (*x == '\0')
return (haystack);
haystack++;
}
return ('\0');
}
