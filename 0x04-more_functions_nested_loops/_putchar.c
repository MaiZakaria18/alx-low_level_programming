#include <unistd.h>
#include "main.h"
/**
 * _putchar - write char c to stdout
 *
 * @c: on sucsses 1. and error -1
 */ 
int _putchar(char c)
{
return (write(1, &c, 1));
}
