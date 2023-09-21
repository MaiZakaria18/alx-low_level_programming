#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds a new node
 * @head: strucrt
 * @str: char
 * Return: value
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *node = malloc(sizeof(list_t));
if (str == NULL)
return (NULL);

if (node == NULL)
return (NULL);

node->str = strdup(str);

if (node->str == NULL)
free(node);
return (NULL);

node->len = strlen(str);
node->next = *head;
*head = node;
return (node);
}
