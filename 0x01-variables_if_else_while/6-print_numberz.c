#include <stdio.h>
/**
 *  * main - prints numbers 0-9 without using char or printf/puts,
 *we can only use 2 times putchar
 * Return: 0 on success
 */
int main(void)
{
int nums = '0';
while (nums <= '9')
{
putchar(nums);
nums++;
}
putchar('\n');
return (0);
}
