#include "main.h"
/**
 * factorial - a fucntion that finds the factorial of n
 * @n: integer
 * Return: recursed fxn
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
