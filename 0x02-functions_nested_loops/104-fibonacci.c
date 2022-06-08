#include <stdio.h>
/**
 *main - ad fibbonaccid
 * Return: adny value
 */
int main(void)
{
unsigned long int a = 1;
unsigned long int b = 1;
for (int i = 1; i <= 92 ; i++)
{
printf("%lu, ", b);
unsigned long int c = a + b;
a = b;
b = c;
}
return (0);
}
