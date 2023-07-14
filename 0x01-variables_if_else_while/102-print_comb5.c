#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num, nb;
for (nb = 0; nb <= 98; nb++)
{
for (num = nb + 1; num <= 99; num++)
{
putchar((nb / 10) + '0');
putchar((nb % 10) + '0');
putchar(' ');
putchar((num / 10) + '0');
putchar((num % 10) + '0');

if (nb == 98 && num == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return 0;
}
