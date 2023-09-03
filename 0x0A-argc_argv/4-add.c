#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adding
 * @argc: int
 * @argv: array
 * Return: 0
 */
int main(int argc, const char *argv[])
{
int sum = 0;
int i;
unsigned int y;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
const char *a = argv[i];
for (y = 0; y < strlen(a); y++)
{
if (a[y] < '0' || a[y] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(a);
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
