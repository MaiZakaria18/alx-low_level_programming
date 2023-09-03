#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int x = atoi(argv[1]);
int y = atoi(argv[2]);
int result = x * y;
printf("%d\n", result);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
