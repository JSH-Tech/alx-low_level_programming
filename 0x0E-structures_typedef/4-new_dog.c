#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to copy
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */


dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
strcpy(newdog->name,name);
newdog->age=age;
strcpy(newdog->owner,owner);
return(newdog);
if(newdog==NULL)
return(NULL);
}
