#include <stdio.h>

/**
 * main - this functions output is lowercase alphabet
 *
 * Return: 0 on success
 */
int main(void)
{
char alpha_low = 'a';
while (alpha_low <= 'z')
{
putchar(alpha_low);
alpha_low++;
}
putchar('\n');
return (0);
}
