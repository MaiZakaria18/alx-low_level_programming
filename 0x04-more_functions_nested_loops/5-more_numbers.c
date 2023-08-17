#include "main.h"
#include <stdio.h>
/**
 * more_numbers - function that prints 10 times
 * Description - function that prints 10 times
 * Return: 0 on success
 */
void more_numbers(void)
{
int i = 0;
while (i < 10)
{
int num = 0;
while (num <= 14)
{
if (num >= 10)
_putchar(num / 10 + '0');
_putchar(num % 10 + '0');
num++;
_putchar('\n');
i++;
}
}
}
