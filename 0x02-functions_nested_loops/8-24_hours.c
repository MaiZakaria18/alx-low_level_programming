#include "main.h"

/**
 * function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 *
 * jack_bauer a function that prints every minute of the day
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int hour = 0, min = 0;
while (hour <= 23)
{
while (min <= 59)
{
min++;
_putchar(hour / 10  + '0');
_putchar(hour % 10  + '0');
__putchar(':');
_putchar(min / 10  + '0');
_putchar(min % 10  + '0');
_putchar('\n');
}
hour++;
}
}
