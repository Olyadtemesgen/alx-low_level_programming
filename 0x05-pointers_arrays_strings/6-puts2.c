#include "main.h"
/**
 * puts2 - it puts string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar(10);
}


