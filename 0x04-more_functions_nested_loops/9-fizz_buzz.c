#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
int num = 1;
while ( num <= 100)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz");
}
else if (num % 3 == 0)
{
printf("Fizz");
}
else if (num % 5 == 0)
{
printf("Buzz");
}
else
{
if (num != 100)
{
printf("%d", num);
putchar(' ');
}
else
{
printf("%d", num);
putchar('\n');
}
num++;
}
}
return (0);
}
