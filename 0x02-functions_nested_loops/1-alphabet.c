#include <stdio.h>
/**
 main - Entry point
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void);
int main(void)
{
char car;
car = print_alphabet();
putchar(car);
return (0);
}
void print_alphabet(void)
{
char low;
for (low = a; low <= z; low++)
{
putchar(low);
}
}
