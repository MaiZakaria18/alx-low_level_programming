#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: Write a function that computes the absolute value of an integer
 *
 * Return: 0 on success
 */
int _abs(int number)
{
if (number < 0)
{
number = -number;
}
return (number);
}
