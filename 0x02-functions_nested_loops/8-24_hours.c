#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 *
 * short description - function that prints every minute of the day
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int hour, min;
for (int hour = 0; hour <= 23; hour++)
{
for (int min = 0; min <= 59; min++)
{
_putchar(hour / 10  + '0');
_putchar(hour % 10  + '0');
_putchar(':');
_putchar(min / 10  + '0');
_putchar(min % 10  + '0');
_putchar('\n');
}
}
}
