#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * The output of the program should be:
 *   if the last digit of n >5: the string and is >5
 *   if the last digit of n is 0: the string and is 0
 *   if the last digit of n <6 and not 0: the string and is <6 and not 0
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n % 10 > 5)
printf("%d and is greater than 5\n", n % 10);
else if (n % 10 == 0)
printf("%d and is 0\n", n % 10);
else
printf("%d and is less than 6 and not 0\n", n % 10);
return (0);
}
