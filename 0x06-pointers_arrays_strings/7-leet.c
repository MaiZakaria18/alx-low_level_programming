#include "main.h"
/**
 *leet - that encodes a string into 1337.
 *@string: string
 * Return: string.
 */
char *leet(char *string)
{
char *ptr = string;
while (*ptr)
{
char x = *ptr;
if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
{
if (x == 'a' || x == 'A')
{
*ptr = '4';
}
else if (x == 'e' || x == 'E')
{
*ptr = '3';
}
else if (x == 'o' || x == 'O')
{
*ptr = '0';
}
else if (x == 't' || x == 'T')
{
*ptr = '7';
}
else if (x == 'l' || x == 'L')
{
*ptr = '1';
}
ptr++;
}
return (string);
}
}
