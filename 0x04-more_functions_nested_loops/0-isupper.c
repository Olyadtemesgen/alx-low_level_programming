#include "main.h"
/**
 * main - add numbers
 * _isupper - add numberrrrr
 *Return: 0 or 1
 */
int main(void)
{
char c;
c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
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
