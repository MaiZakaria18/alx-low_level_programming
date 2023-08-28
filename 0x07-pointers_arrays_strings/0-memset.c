#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to the memory block
 * @b:  value to which each byte will set
 * @n: num to set
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; n > 0; x++, n--)
{
s[x] = b;
}
return (s);
}
