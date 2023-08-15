#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase
 * 10 times followed by a newline.
 *
 * Description: This function prints the lowercase alphabet characters
 * from 'a' to 'z'
 * ten times, each time followed by a newline character.
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int repetition = 10;
while (repetition > 0)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
_putchar('\n');
}
repetition--;
letter = 'a';
}
}
