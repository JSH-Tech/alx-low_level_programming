#include "main.h"
#include <stdio.h>

/**
 *more_numbers - function that prints 10 times the numbers from 0 to 14
 *
 *
 */

void more_numbers(void)
{
int i;
int j;
for (j = 1; j <= 10; j++)
{
for (i = '0'; i <= "14"; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
