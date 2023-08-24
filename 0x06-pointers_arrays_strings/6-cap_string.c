#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @string: string
 * Return: capital string
 */
char *cap_string(char *string)
{
int index, x;

char ch[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
for (index = 0; string[index] != '\0'; index++)
{
if (index == 0 && string[index] >= 'a' && string[index] <= 'z')
string[index] -= 32;
for (x = 0; x < 13; x++)
{
if (string[index] == ch[x])
{
if (string[index + 1] >= 'a' && string[index + 1] <= 'z')
{
string[index + 1] -= 32;
}
}
}
}
return (string);
}
