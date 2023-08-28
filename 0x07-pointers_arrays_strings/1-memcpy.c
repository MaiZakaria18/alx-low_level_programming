#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to the memory block
 * @n: bytes from memory area
 * @src: memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
for (x = 0; n > x; x++)
{
src[x] = dest[x];
}
return (dest);
}
