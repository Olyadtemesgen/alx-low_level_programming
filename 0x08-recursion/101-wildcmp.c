#include "main.h"
/**
 * wildcmp - it is a fxn that wildcmp
 * @s1: it is a pointer
 * @s2:it is  pointer too
 * Return: an int
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 != '\0' && *s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 == '\0' && !(*s2 != '\0' && *s2 == '*'))
	{
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
