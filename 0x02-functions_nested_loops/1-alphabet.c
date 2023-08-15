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
int alphabet_lower = 'a';
int z = 'z';
while (alphabet_lower <= z)
{
_putchar(alphabet_lower);
alphabet_lower++;
}
_putchar('\n');
}
