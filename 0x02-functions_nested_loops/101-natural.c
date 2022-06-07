#include <stdio.h>
/**
 * main - add nums
 *
 * Return: always 0
*/
int main(void)
{
	int i;
	int j;

	j = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
	}
		printf("%d\n", j);
		return (0);
	}

