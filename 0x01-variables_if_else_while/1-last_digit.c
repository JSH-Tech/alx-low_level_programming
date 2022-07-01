#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = (n % 10);
if ((l < 6) && (l != 0))
{
printf("Last digit of $n is $l and is less than 6 and not 0");
}
else if ((l > 5))
{
printf("Last digit of  $n is $l and is greater than 5");
}
else if ((l == 0))
{
printf("Last digit of $n is $l and 0");
}

return (0);
}
