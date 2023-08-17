#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that prints the numbers
 * Description - function that prints the numbers
 * Return: 0 on success
 */
void print_numbers(void)
{
char number = '0';
while (number <= '9')
{
_putchar(number);
number++;
}
_putchar('\n');
}
