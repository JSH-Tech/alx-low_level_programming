#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c);
int largest_number(int a, int b, int c)
{
int largest;
int permut;
if (a > b)
{ if (b > c)
{
largest = a;
}
}else if (b>c){
permut = a;
a = b;
b = permut;
largest = a;
}
else
{
permut = b;
b = c;
c = permut;
if(b>c)
{
largest = a;
}
}
}
