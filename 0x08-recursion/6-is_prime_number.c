#include "main.h"
int tmp_prime(int n, int i);
/**
 * divisors - decides whether the number is divisor or not
 * @n: integer
 * @m: integer
 * Return: boolean
 * is_prime_number - decides whether a nimber os prime of mot
 * @n: integer
 * Return: recursion
 */
int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
