#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
char hex_digit = '0';
while (hex_digit <= '9')
{
putchar(hex_digit);
hex_digit++;
}
hex_digit = 'a';
while (hex_digit <= 'f')
{
putchar(hex_digit);
hex_digit++;
}
putchar('\n');
return (0);
}
