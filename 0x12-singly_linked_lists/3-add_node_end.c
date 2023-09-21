#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function
 * @head: pointer
 * @str: pointer
 * Return: value
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node_end = malloc(sizeof(list_t));
list_t *node = *head;

if (!head || !node_end)
return (NULL);
if (str)
{
node_end->str = strdup(str);
if (!node_end->str)
{
free(node_end);
return (NULL);
}
node_end->len = strlen(node_end->str);
}
if (node)
{
while (node->next)
{
node = node->next;
}
node->next = node_end;
}
else
*head = node_end;
return (node_end);
}
