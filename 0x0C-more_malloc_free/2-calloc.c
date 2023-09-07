#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - function
 * @nmemb: int
 * @size: int
 * Return: array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *s;
size_t total_size;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
total_size = nmemb * size;
s = malloc(total_size);
if (s != NULL)
memset(s, 0, total_size);
return (s);
}
