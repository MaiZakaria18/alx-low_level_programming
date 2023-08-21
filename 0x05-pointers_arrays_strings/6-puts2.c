#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * Description - function that prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
int num;
for (num = 0; str[num] != '\0'; num++)
{
if (num % 2 == 0)
{
_putchar(str[num]);
}
_putchar('\n');
}
}
