#ifndef DOG_H
#define DOG_H
/**
 *struct dog - describes the sweet boy or girl
 *
 *@name:dog's name
 *@age:The dog's age
 *@owner: The owner of the dog
 */


struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
