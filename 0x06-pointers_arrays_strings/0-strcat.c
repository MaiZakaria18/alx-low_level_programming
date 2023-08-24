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
char *string = dest;

while (*string != '\0')
{
*string++;
}
while (*src != '\0')
{
*string = *src;
string++;
src++;
}
*string = '\0';
return (dest);
}
