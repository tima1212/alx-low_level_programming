#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(NULL)); /* Seed the random number generator */
n = rand() - RAND_MAX / 2; /* Generate a random number and store it in n */
printf("%d is ", n); /* Print the number */
if (n > 0)
printf("positive\n");
else if (n == 0)
printf("zero\n");
else
printf("negative\n");
return (0);
}
