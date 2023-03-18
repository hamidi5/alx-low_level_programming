#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This code will print out the last digit of a
 * number that has been randomly generated,
 * and it will also indicate whether the digit
 * is greater than 5, less than 6, or equal to 0.
 * Return: Always 0 (Successs)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%i is zero\n", n);
}

else if (n < 0)
{
printf("%i is negative\n", n);
}

else
{
printf("%i is positive\n", n);
}

return (0);

}
