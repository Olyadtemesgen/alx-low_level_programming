#include "main.h"
/**
 * print_diagonal - add it
 *@n:integer
 * Return:void
 */
void print_diagonal(int n)
{

	int j;
	int i;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
