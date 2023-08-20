#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
int num = 1;
while (num > 0 && num <= 100)
{ 
if (num % 3 == 0 && num % 5 == 0)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar('B');
putchar('u');
putchar('z');
putchar('z');
}
else if (num % 3 == 0)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
}
else if (num % 5 == 0)
{
putchar('B');
putchar('u');
putchar('z');
putchar('z');
}
else
{
if(num > 9)
{
putchar(num / 10 + '0');
putchar(num % 10 +'0');
} 
else
{
putchar(num + '0');
}
}
num++;
putchar(' ');
}
return (0);
}
