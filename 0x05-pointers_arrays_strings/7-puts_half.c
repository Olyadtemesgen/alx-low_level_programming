#include "main.h"
/**
 * puts_half - it puts half
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int a = 0;
	int b;
	int c;

	while (str[a])
	{
		a++;
	}
	b = a;

	c = (b % 2 == 0) ? (b / 2) : (b - 1) / 2;
	while (c <= a)
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
