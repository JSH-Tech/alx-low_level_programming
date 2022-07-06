#include <stdio.h>
#include <stdlib.h>
/**
 *print_alphabet - Entry point
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
putchar('\n');
}
