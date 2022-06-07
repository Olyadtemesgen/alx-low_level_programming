#include "main.h"
/**
 * jack_bauer - returns absolute value of an int
 * Return: Void.
 */
void jack_bauer(void)
{
	int i = 0;

	while (i < 3)
	{
		int j = 0;

		while (j < 4)
		{
			int k = 0;

			while (k < 6)
			{
				int h = 0;

				while (h < 10)
				{
					_putchar(i + 48);
					_putchar(j + 48);
					_putchar(':');
					_putchar(k + 48);
					_putchar(h + 48);
					_putchar('\n');
					h++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}


