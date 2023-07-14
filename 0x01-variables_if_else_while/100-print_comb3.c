#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n , num;

for (n = 0; n < 9; n++)
{
for(num = n + 1 ; num < 10 ; num++)
{
putchar((n % 10) + '0');	
putchar((num % 10) + '0');
if (n == 8 && num == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
