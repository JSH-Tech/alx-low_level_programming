#include <stdio.h>
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
(void)argv;
printf("%d\n", (argc - 1));
return (0);
}
