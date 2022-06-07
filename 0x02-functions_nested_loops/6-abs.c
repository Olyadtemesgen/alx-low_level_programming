#include "main.h"
/**
 * _abs - returns absolute value of an int
 * @c: any integer
 * Return: Always 0
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		int d = -1 * c;
		return (d);
	}
	return (0);
}


