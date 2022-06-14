#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - generates random passwords for 101-crackme
 *   * Return: zero
 *    */
int main(void)
{
char a;
int b;

srand(time(NULL));
while (b <= 2645)
{
a = rand() % 128;
b += a;
putchar(a);
}
putchar(2771 - b);
return (0);
}
