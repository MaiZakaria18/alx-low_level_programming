#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @string: string
 * Return: capital string
 */
char *cap_string(char *string)
{int length = 0;
while (string[length])
{
while (!string[length] >= 'a' && string[length] <= 'z')
length++;

if (string[length - 1] == ' ' ||
string[length - 1] == '"' ||
string[length - 1] == '\n' ||
string[length - 1] == '\t' ||
string[length - 1] == '(' ||
string[length - 1] == ')' ||
string[length - 1] == '{' ||
string[length - 1] == '}' ||
string[length - 1] == '?' ||
string[length - 1] == '!' ||
string[length - 1] == '.' ||
string[length - 1] == ';' ||
string[length - 1] == ',' ||
length == 0)
string[length] -= 32;
length++;
}
return (string);
}
