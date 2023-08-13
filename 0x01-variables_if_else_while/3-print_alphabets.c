#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
char a = 'a', A = 'A';
while (a <= 'z')
{
putchar(a);
a++;
}
char A = 'A', a = 'a';
while (A <= 'Z')
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}
