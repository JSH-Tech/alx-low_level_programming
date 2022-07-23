#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - is function entry
 *
 *@argc : a parameter
 *@argv : a parameter type char
 *return (0) : always success
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", (argc - 1));

return (0);
}
