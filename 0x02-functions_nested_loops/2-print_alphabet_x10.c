#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a newline.
 *
 * Description: This function prints the lowercase alphabet characters from
 * 'a' to 'z'
 * followed by a newline character.
 */
void print_alphabet_x10(void)
{
char alphabet_x10 = 'a';
for (char alphabet_x10 = 'a'; alphabet_x10 <= 'z'; alphabet_x10++)
{
_putchar(alphabet_x10);
for (int i; i <= 10; i++)
{
_putchar(i);
}
}
}
