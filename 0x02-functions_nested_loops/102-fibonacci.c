#include <stdio.h>
/**
 * main - print fibbo
 * Return: 0 if succeed
 */
int main(void)
{
unsigned long int a = 1;
unsigned long int b = 1;
for (int i = 1; i < 50 ; i++)
{
printf("%lu, ", b);
unsigned long int c = a + b;
a = b;
b = c;
}
printf("%lu\n", 20365011074);
return (0);
}
