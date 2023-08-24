#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * Description - function that encodes a string into 1337.
 * @string: string
 * Return: string value
 */
char *leet(char *string)
{
int x, z;
char string1[] = "aAeEoOTtlL";
char string2[] = "4433007711";
for (x = 0; string[x] != '\0'; x++)
{
for (z = 0; z < 10; z++)
{
if (string[x] == string1[z])
{
string[x] = string2[z];
}
}
}
return (string);
}
