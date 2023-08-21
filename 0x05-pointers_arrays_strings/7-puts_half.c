#include "main.h"
/**
 * puts_half - Write a function that prints half of a string
 * Description - Write a function that prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
int length;
int index;
int n;
for (length = 0; str[length] != '\0'; length++)

if (length % 2 == 0)
{
index = length / 2;
}
else
{
index = (length + 1) / 2;
}
for (n = index; n < length; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
