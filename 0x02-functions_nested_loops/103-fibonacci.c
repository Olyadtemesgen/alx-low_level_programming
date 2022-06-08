#include <stdio.h>
/**
 *main - add therm
 * Return:always 0
 */
int main(void)
{
unsigned long int a = 1;
unsigned long int b = 1;
unsigned long int e = 0;
int i;
for (i = 1; i <= 32; i++)
{
unsigned long int c = a + b;
a = b;
b = c;
if (b % 2 == 0)
{
e += b;
}
}
printf("%lu", e);
return (0);
}
