#include "main.h"
/**
 * print_last_digit - print last digit of a number
 *
 * @number: takes number input
 *
 * Return: last_digit
 */
int print_last_digit(int number)
{
int last_digit;
if (number < 0)
{
last_digit = (n % 10) * -1;
}
else
{
last_digit = (n % 10);
}
_putchar(last_digit + 'o');
return (last_digit);
}
