#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: string
 * @s2: string
 * Return: s1[length] - s2[length]
 */
int _strcmp(char *s1, char *s2)
{
int length = 0;
while (s1[length] != '\0' && s2[length] != '\0')
{
if (s1[length] != s2[length])
{
return (s1[length] - s2[length]);
}
length++;
}
return (0);
}
