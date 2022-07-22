#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for digit
 *@c: number to enter
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
