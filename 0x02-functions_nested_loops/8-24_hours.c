#include "main.h"

/**
 * @jack_bauer - function that prints every minute of the day
 *
 * short description - function that prints every minute of the day of Jack Bauer
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int hour = 0, min = 0;
while (hour <= 23)
{
hour++;
while (min <= 59)
{
min++;
_putchar(hour / 10  + '0');
_putchar(hour % 10  + '0');
_putchar(':');
_putchar(min / 10  + '0');
_putchar(min % 10  + '0');
_putchar('\n');
}
}
}
