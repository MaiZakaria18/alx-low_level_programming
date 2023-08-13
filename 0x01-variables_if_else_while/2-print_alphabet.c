#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
