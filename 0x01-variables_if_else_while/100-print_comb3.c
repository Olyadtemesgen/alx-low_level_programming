#include <stdio.h>
/**
 * main - Entry point,this returns some numbers from 0 t0 89
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 48;

	while (a < 58)
	{
		while (b < 58)
		{
			putchar(a);
			putchar(a);
			if (a == 57 && b == 57)
			{

			}
			else
			{
				putchar(44);
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
