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
int ld;

srand(time(0));
n = rand() - RAND_MAX / 2;
ld = (n % 10);
if ((ld < 6) && (ld != 0))
{
printf("Last digit of ", $n " is", $ld " and is less than 6 and not 0");
}
else if ((ld > 5))
{
printf("Last digit of ", $n " is", $ld " and is greater than 5");
}
else if ((ld == 0))
{
printf("Last digit of ", $n "is", $ld "and 0");
}

return (0);
}
