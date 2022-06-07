#include "main.h"
/**
 * _isalpha - it return whether it is alpha or not
 *@c: - it is a kind integer
 *
 * Return: -always zero for success
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
