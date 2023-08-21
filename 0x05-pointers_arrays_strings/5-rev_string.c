#include "main.h"
/**
 * rev_string - function that reverses a string.
 * Description - function that reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
int length;
for (length = 0; s[length] != '\0'; length++)
{
int normal_str;
for (normal_str = 0; s[length] != '\0'; normal_str++)
{
_putchar(s[normal_str]);
}
}
{
int rev_str;
for (rev_str = length - 1; rev_str >= 0; rev_str++)
{
_putchar(s[rev_str]);
}
}
_putchar('\n');
}
