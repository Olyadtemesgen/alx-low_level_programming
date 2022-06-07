#include "main.h"
#include <ctype.h>
/**
 *_islower - check the code for Holberton School students
 *@c: letter being tested
 * Return: Always 0(Success)
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

