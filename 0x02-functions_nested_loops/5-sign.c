#include "main.h"
/**
 * print_sign - print wether number is neg or pos
 *@n: - it is a kind integer
 *
 * Return: -always zero for success
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
