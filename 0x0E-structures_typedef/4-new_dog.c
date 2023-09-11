#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog structure
 * @name: pointer
 * @age: number
 * @owner: pointer
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *nDog;
nDog = (dog_t *)malloc(sizeof(dog_t));
if (nDog == NULL)
return (NULL);
nDog->name = malloc(sizeof(char) * (strlen(name) + 1));
if (nDog->name == NULL)
{
free(nDog->name);
return (NULL);
}
strcpy(nDog->name, name);
nDog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (nDog->owner == NULL)
{
free(nDog->owner);
return (NULL);
}
strcpy(nDog->owner, owner);
nDog->age = age;
return (nDog);
}
