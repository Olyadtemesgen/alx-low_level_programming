#include "main.h"
/**
 * _sqrt_recursion - it finds sqrt of a num n
 * @n: integer
 * Return:it returns an integer
 * _sqrt - _sqrt_recursion
 *  @n: integer 
 *  @i: integer 
 *  Return: a float of num
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
int _sqrt(int n, int i)
{
	o = i * i;
	if (n < 0)
	{
		return (-1);
	}
	if (o > n)
	{
		return (-1);
	}
	if (0 == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
