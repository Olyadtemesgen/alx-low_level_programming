#include "main.h"
/**
 * more_numbers - add more numbers
 * Return: void
 */
void more_numbers(void)
{
int p;
int o;
for (o = 0; o < 10; o++)
{
p = 0;
while (p <= 14)
{
if (p >= 10)
{
_putchar(1 + '0');
}
_putchar(p % 10 + '0');
p++;
}
_putchar('\n');
}
}
