#include <stdio.h>
#include "main.h"
/**
* main - Entry point of the program
* Description:prints the alphabet, in lowercase
* Return: 0 on success
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
