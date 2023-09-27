#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function
 * @h: pointer
 * Return: result
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
