#include "holberton.h"

/**
 * _strlen_recursion - it is about string length
 * @s: pointer
 * Return: the recussed function
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
