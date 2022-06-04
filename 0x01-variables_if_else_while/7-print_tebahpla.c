#include <stdio.h>
/**
 * main - it is about printing lowercase alphas inreverse
 *use putchaar only
 * Return: 0 on success
 */
int main(void)
{
	char lowl = 'z';
		while (lowl >= 'a')
		{
			putchar(lowl);
			lowl--;
		}
		putchar('\n');
			return (0);
}


