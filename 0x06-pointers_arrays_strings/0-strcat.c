#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * description - function that concatenates two strings.
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int length_d;
int length_s;

length_d = 0;
while (dest[length_d] != '\0')
{
length_d++;
}
length_s = 0;
while (src[length_s] != '\0')
{
dest[length_d] = src[length_s];
length_d++;
length_s++;
}
dest[length_d] = '\0';
return (dest);
}
