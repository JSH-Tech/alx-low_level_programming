#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_strlen - function that returns the length of a string
 *
 *@s : is a parameter
 *
 *Return: Always length (Success)
 */

int _strlen(char *s)
{
int length = 0;
while (*s++)
length++;
return (length);
}
