#include "main.h"
#include <stdio.h>
/**
 *  _isupper - function that checks for uppercase character.
 *
 * Description - function that checks for uppercase character.
 *
 * @c: input for alphabet
 *
 * Return: 1 if c is uppercase Returns 0 otherwise
 */
int _isupper(int c)
{
char c;
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
