#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string
 * Return: (x * sign)
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int x = 0;
int sum;
do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
x = (x * 10) + (*s - '0');
else if (x > 0)
break;
}
while (*s++);
{
}
sum = x *sign;
return (sum);
}
