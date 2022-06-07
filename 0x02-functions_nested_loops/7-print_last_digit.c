#include "main.h"
/**
 * print_last_digit - returns absolute value of an int
 * @a: integer
 * Return: Void.
 */
void print_last_digit(int a)
{
	int b = a % 10;

	_putchar(b + 48);
	_putchar(b + 48);
	_putchar('\n');
}

