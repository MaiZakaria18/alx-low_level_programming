#include "main.h"
/**
 * time_table - a function that prints the 9 times table, starting with 0
 *
 * Description - a function that prints the 9 times table, starting with 0
 *
 * Return: 0 on success
 */
void times_table(void)
{
int i = 0;
while (i <= 9)
{
int j = 0;
while (j <= 9)
{
int result = i * j;
if (result >= 10)
{
putchar(result / 10 + '0');
putchar(result % 10 + '0');
}
else
{
putchar(result + '0');
}
if (j != 9)
{
putchar(',');
putchar(' ');
}
j++;
}
putchar('\n');
i++;
}
}
