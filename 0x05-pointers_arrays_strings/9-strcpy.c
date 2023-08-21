#include "main.h"
/**
 * _strcpy - a fiunction that copies the string pointed to by src
 * to the buffer pointed to by dest
 * Description -function that copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: string
 * @src: string
 * retuen: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *dest_pointer = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest_pointer);
}
