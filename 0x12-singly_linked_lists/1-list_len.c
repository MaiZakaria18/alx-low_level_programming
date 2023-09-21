#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: list
 * Return: value
 */
size_t list_len(const list_t *h)
{
size_t x = 0;
while (h)
{
h = h->next;
x++;
}
return (x);
}
