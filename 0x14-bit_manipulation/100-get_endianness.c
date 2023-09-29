#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function
 * Return: result
 */
int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *)&x;
return (*c);
}
