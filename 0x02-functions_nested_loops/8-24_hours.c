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
int hour = 0, min = 0;
while (hour < 24)
{
while (min < 60)
{
_putchar(hour / 10  + '0');
_putchar(hour % 10  + '0');
_putchar(':');
_putchar(min / 10  + '0');
_putchar(min % 10  + '0');
_putchar('\n');
min++;
}
min = 0;
hour++;
}
}
