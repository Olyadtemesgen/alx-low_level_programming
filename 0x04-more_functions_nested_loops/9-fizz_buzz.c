#include <stdio.h>
/**
 * main - fizzbuzz
 * Return: int
 */
int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 15 == 0)
{
printf("%s", "FizzBuzz");
}
else if (i % 3 == 0 && i % 5 != 0)
{
printf("%s", "Fizz");
}
else if (i % 3 != 0 && i % 5 == 0)
{
printf("%s", "Buzz");
}
else
{
printf("%d", i);
}
putchar(' ');
}
putchar('\n');
return (0);
}
