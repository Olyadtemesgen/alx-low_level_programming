#include "main.h"
/**
 * print_to_98 - print numbers
 *@n: integers
 *Return: always 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 98)
		{
		printf("%d, ", i);
		}
		else if (i == 98)
		{
			printf("%d\n", i);
	}
}


