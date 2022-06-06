#include <stdio.h>
/**
 * main-this function is used to return number separateed by commas
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int a = 48;

while (a < 58)
{
if (a < 57)
{
putchar(a);
putchar(44);
}
else if (a == 57)
{
putchar(57);
}
putchar(32);
a++;
}
return (0);
}

