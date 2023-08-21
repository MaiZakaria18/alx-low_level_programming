#include "main.h"
/**
 * rev_string - function that reverses a string.
 * Description - function that reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
int length;
int rev_str;

for (length = 0; s[length] != '\0'; length++)
{
}

for (rev_str = length - 1; rev_str >= 0; rev_str--)
{
_putchar(s[rev_str]);
}
}
