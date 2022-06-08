#include "main.h"
#include <stdio.h>
/**
 *print_times_table - it print numbers
 *@n: number between 0 and 15
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n < 16 || n >= 0)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				if (j < n)
				{
					if (i * j < 10 && (j + 1) * i < 10)
					{
						printf("%d,   ", i * j);
					}
					else if (i * j < 100 && (j + 1) * i > 9 && (j + 1) * i < 100)
					{
						printf("%d,  ", i * j);
					}
					else if (i * j < 100 && (j + 1) * i > 99)
					{
						printf("%d, ", i * j);
					}
					else
					{
						printf("%d, ", i * j);
					}
				}
				else
				{
					printf("%d", i * j);
				}
			}
			printf("\n");
		}
	}
}
