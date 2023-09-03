#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: int
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc == 2)
{
int x;
int l_c = 0;
int money = atoi(argv[1]);
int coins[] = {25, 10, 5, 2, 1};
for (x = 0; x < 5; x++)
{
if (money >= coins[x])
{
l_c += money / coins[x];
money = money % coins[x];
if (money % coins[x] == 0)
{
break;
}
}
}
printf("%d\n", l_c);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
