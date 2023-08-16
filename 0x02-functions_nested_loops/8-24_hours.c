#include "main.h"

/**
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
_putchar(min / 10  + '0');
_putchar(min % 10  + '0');
}
hour++;
}
}
