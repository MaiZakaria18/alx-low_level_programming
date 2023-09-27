#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - function
 * @h: pointer
 * Return: result
 */

size_t listint_len(const listint_t *h)
{
size_t i;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
