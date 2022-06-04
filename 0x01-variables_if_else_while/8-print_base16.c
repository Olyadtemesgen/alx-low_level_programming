#include <stdio.h>
/**
 * main -it tries to print hex files
 * Return: 0 on success
 */
int main(void)
{
int hex = '0';
while (hex <= '9')
{
putchar(hex);
hex++;
}
{
hex = 'a';
while (hex <= 'f')
putchar(hex);
hex++;
}
putchar('\n');
return (0);
}
