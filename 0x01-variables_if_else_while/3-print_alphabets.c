#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
char A = "A", a = "a";
while (A <= "Z")
{
putchar(A);
A++;
}
putchar('\n');
while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
