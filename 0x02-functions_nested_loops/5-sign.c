#include "main.h"
/**
 * print_sign - print wether number is neg or pos
 *@n: - it is a kind integer
 *
 * Return: Always 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
