#include <stdio.h>
/**
 * main-this function is used to return number separateed by commas
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int a = 49;
putchar(48);
while (a < 58)
{
if (a < 58)
{
putchar(44);
putchar(32);
putchar(a);
}
a++;
}
return (0);
}

