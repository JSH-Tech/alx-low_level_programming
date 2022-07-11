#include "main.h"
/**
 *swap_int - function that swap values of two integers
 *
 *@a : is a parameter
 *
 *@b : is a parameter
 */

void swap_int(int *a, int *b)
{
int val;
val=*a;
*a = *b;
*b = val;
}
