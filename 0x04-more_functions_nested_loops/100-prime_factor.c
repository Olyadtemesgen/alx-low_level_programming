#include <stdio.h>
/**
 * main - return prime number
 * Return: int
 */
int main(void)
{	long int a = 612852475143;
	long int i;
	long int j;
	int evaluator;

	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			evaluator = 1;
			for (j = 2; j <= i; j++)
			{
				if (i % j == 0)
				{
					evaluator = 0;
					break;
				}
			}
		}
		if (evaluator == 1)
		{
			printf("%ld", i);
		}
	}
	return (0);
}
			

