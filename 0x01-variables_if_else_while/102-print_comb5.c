#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, num, nb;
for(nb = 0; n <= 98; nb++)
{

for (num = n + 1 ; num <= 99; num++)
{
putchar((n  /  10) + '0');
putchar((n  %  10) + '0');
putchar(' ');
putchar((num / 10) + '0');
putchar((num % 10) + '0');

if ( n == 98 && num == 99)
continue;
putchar(',');
putchar(' ');
}

}
putchar('\n');
return (0);
}
