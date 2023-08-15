#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description:  prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0 on success
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
}
repetition--;
letter = 'a';
}
_putchar('\n');
}
