#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - unction
 * @head: pointer
 */

void free_list(list_t *head)
{
list_t *list = malloc(sizeof(list_t);
while (head)
{
list = head->str;
free(head->str);
free(head);
head = temp;
}
}
