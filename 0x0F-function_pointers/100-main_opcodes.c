#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - func
 * @argc: int
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char **argv)
{
char *x = (char *)main;
int b;
if (argc != 2)
printf("Error\n"), exit(1);
b = atoi(argv[1]);
if (b < 0)
printf("Error\n"), exit(2);
while (b--)
printf("%02hhx%s", *x++, b ? " " : "\n");
return (0);
}
