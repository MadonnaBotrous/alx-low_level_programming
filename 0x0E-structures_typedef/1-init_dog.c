#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializing a variable of type struct dog
 * @d:a pointer to struct dog to initialize
 * @name:the name
 * @age:the age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
