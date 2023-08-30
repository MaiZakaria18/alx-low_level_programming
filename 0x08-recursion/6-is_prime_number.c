#include "main.h"
/**
 * recursive - helper function
 * @n: number
 * @divisor: number
 * Return: function
 */
int recursive(int n, int divisor)
{
if (divisor <= 1)
{
return (0);
}
else if (n % divisor == 0 && divisor > 1)
{
return (0);
}
else if ((n / divisor) < divisor)
{
return (recursive(n, divisor - 1));
}
}
/**
 * is_prime_number - function returns prime number
 * @n: number
 * Return: function
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (recursive(n, 1));
}
