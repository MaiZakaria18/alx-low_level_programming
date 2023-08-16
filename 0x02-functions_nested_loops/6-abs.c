#include "main.h"
/**
 * _abs - function that Computes the absolute value of an integer.
 *
 * Description - demonstrates how to compute the absolute value of an integer.
 *
 * @number - takes an integer for which to calculate the absolute value.
 * Return: 0 on success
 */
int _abs(int number)
{
if (number < 0)
{
number *= (-1);
}
return (number);
}
