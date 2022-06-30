#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - return pointer of an integer
 * @min: mininum
 * @max: maximum
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, n;
	int *ptr;

	i = 0;

	if (min > max)
		return ('\0');

	n = (max - min) + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return ('\0');

	while (i < n)
	{
		ptr[i] = min + i;
		i++;
	}

	return (ptr);
}
