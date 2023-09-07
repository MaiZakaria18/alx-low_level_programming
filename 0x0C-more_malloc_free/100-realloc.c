#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function
 * @ptr: string
 * @old_size: int
 * @new_size: int
 * Return: string
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int m_size;
void *s;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
m_size = (old_size < new_size) ? old_size : new_size;
s = malloc(new_size);
if (s == NULL)
{
return (NULL);
}
memcpy(s, ptr, m_size);
free(ptr);
return (s);
}
