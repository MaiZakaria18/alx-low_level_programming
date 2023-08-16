#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Description - function that prints the 9 times table, starting with 0
 * Return: Always 0.
 */
void times_table(void)
{
int i = 0;
while (i <= 9)
{
int j = 0;
while (j <= 9)
{
putchar(',');
putchar(' ');
int result = i * j;
if (result <= 9)
{
putchar(' ');
}
else
{
putchar(result / 10 + '0');
putchar(result % 10 + '0');
putchr('\n');
}
j++;
}
i++;
}
