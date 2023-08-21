#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string.
 * Description - function that reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
int rev_str;
int str;
char temp;
int length = strlen(s);
for (str = 0, rev_str = length - 1; rev_str > str; str++, rev_str--)
{
temp = s[str];
s[str] = s[rev_str];
s[rev_str] = temp;
}
}
