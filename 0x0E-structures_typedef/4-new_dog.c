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
newdog = malloc(sizeof(dog_t));
if (newdog==NULL)
return (NULL);
strcpy(newdog->name, name);
newdog->age = age;
strcpy(newdog->owner, owner);
return (newdog);
}
