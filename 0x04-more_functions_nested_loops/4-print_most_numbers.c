#include "main.h"
/**
 *print_most_numbers - print nums e 4 and 2
 *Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	if (i != '2' && i != '4')
	{
		_putchar(i);
	}
	}
}
