#include "main.h"
/**
 * print_rev - it prints in reverse order
 * @s: it is an a string
 */
void print_rev(char *s)
{
int a = 0;

while (s[a])
{
a++;
}
while (a--)
{
_putchar(s[a]);
}
_putchar('\n');
}




