#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0  (Success)
 */

int main(void)
{
int i;
for (i = 38; i <= 47; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
