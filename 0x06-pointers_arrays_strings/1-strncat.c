#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * description - a function concatenates two strings
 * @src: string
 * @dest: string
 * @n: bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int length_d;
int length_s;

length_d = 0;
while (dest[length_d] != '\0')
{
length_d++;
}
length_s = 0;
while (src[length_s] != '\0' && n > 0)
{
dest[length_d++] = src[length_s];
length_s++;
}
dest[length_d] = '\0';
return (dest);
}
