#include <stdio.h>
/**
 * main - this function is used to return number separateed by commas
 *
 * Return:always 0 (Success)
 */
int main(void)
{
int a = 48;
while (a < 57)
{
putchar(a);
putchar(44);
putchar(32);
a++;
}
putchar(57);
putchar(32);
return (0);
}

