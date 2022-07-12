#include "main.h"
#include <string.h>
/**
 *print_rev - function that print a string in reverse
 *
 *@s : a aprmeter
 */

void print_rev(char *s)
{
char str[] = *s;
_putchar(strrev(str));
}
