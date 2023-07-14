#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, num, nb;
for (nb = 0; nb < 8; nb++)
{
for (n = nb + 1; n < 9; n++)
{
for (num = n + 1; num < 10; num+++)
{
putchar((nb % 10) + '0');
putchar((n % 10) + '0');
putchar((num % 10) + '0');
if (nb == 7 && n == 8 && num == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return 0;
}
