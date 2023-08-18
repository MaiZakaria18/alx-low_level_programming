#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - a function that prints the numbers
 * Return: Always 0.
 * Description - a function that prints the number
 */
void print_most_numbers(void)
{
for (int num = 48; num <= 57; num++)
{
if (num != 50 && num != 52)
{
_putchar(num + '0');
}
_putchar('\n');
}
}
int main(void)
{
print_most_numbers();
return (0);
}
