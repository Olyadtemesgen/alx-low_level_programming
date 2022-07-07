#include "main.h"
/**
 * rev_string - it reverse string
 * @s:it is anstring
 * Return:void
 */
void rev_string(char *s)
{
	int a;

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


