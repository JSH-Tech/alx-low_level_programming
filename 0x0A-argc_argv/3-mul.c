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
int mul;
if ((argc - 1) < 2)
{
printf("Error\n");
return (1);
}
else
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
return (0);
}
