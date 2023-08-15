#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a newline.
 *
 * Description: This function prints the lowercase alphabet characters from
 * 'a' to 'z'
 * followed by a newline character.
 */
void print_alphabet(void)
{
char alphabet = 'a';
for (char alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
for (int i; i <= 10; i++)
{
_putchar(i);
}
}
}
