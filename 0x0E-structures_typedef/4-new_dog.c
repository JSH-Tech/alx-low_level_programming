#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if function fails
 */


dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
strcpy(newdog->name, name);
newdog->age = age;
strcpy(newdog->owner, owner);
return (newdog);
if (newdog == NULL)
return (NULL);
}
