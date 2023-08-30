#include "main.h"
/**
 * _sqr - helper function that calculates square root
 * @x: number
 * @n: number
 * Return: number
 */
int _sqr(int n, int x)
{
int sqr = x * x;
if (sqr > n)
{
return (-1);
}
else if (sqr == n)
{
return (x);
}
return (_sqr(n, x + 1));
}
/**
 * _sqrt_recursion - function that returns the natural
 *  square root of a number
 * @n: number
 * Return: number
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (_sqr(n, 1));
}
}
