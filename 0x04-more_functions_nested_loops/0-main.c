#include "main.h"
/**
 * _isupper - tells whether  up
 *@c: ASCII num
 *Return: 0 or 1
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
