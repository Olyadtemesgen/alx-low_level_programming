#include <stdio.h>
/**
 * main - print fibbo
 * Return: 0 if succeed
 */
int main(void)
{
unsigned long int a = 1;
unsigned long int b = 1;
unsigned long int c;
int i;
for (i = 1; i < 50 ; i++)
{
printf("%lu, ", b);
c = a + b;
a = b;
b = c;
}
printf("%lu\n", 20365011074);
return (0);
}
