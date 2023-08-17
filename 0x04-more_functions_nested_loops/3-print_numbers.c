#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Description - function that prints the numbers, from 0 to 9
 *
 * Return: 0 on success
 */
void print_numbers(void)
{
char number = 0;
while (number >= 0 && number <10)
{
_putchar(number + '0');
number++;
_putchar('\n');
}
}
