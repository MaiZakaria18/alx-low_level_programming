#include "dog.h"

/**
 * init_dog - func
 * @struct dog - func
 * @d: string
 * @name: string
 * @age: float
 * @owner: string
 * Description - func
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

d->name = name;
d->age = age;
d->owner = owner;
}
