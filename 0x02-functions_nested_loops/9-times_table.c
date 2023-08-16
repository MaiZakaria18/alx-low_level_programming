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
int num = 0;
while (num <= 9)
{
{
int result = i * num;
if (result >= 10)
{
putchar(result / 10 + '0');
putchar(result % 10 + '0');
}
else
{
putchar(result + '0');
}
if (num != 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar('$');
}
num++;
}
putchar('\n');
i++;
}
}
}
