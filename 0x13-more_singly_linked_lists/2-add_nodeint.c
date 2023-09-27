#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function
 * @head: pointer
 * @n: int
 * Return: result
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));

if (!head || !ptr)
return (NULL);

ptr->next = NULL;
ptr->n = n;

if (*head)
ptr->next = *head;
*head = ptr;
return (ptr);
}
