#include <stdio.h>
/**
 * main -it tries to print hex files
 * Return: 0 on success
 */
int main(void)
{
int hexx = '0';
while (hexx <= '9')
{
putchar(hexx);
hexx++;
}
{
char hex = 'a';
while (hex <= 'f')
putchar(hex);
hex++;
}
putchar('\n');
return (0);
}
