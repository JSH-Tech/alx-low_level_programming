#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - is function entry
 *
 *@argc : a parameter
 *@argv : a parameter type char
 *Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
