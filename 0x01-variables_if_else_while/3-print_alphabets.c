#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}
