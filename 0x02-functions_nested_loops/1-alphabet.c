#include <stdio.h>
#include <stdlib.h>
/**
 *print_alphabet - Entry point
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int low;
for (low = 'a'; low <= 'z'; low++)
{
putchar(low);
}
putchar('\n');
}
