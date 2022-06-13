#include "main.h"
/**
 * _puts - it puts new line
 * @str: it is a string
 * Return: null
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
++str;
}
_putchar(10);
}

