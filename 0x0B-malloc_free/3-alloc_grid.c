#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer
 * @width: width 
 * @height: height.
 * Return: pointer of pointer of an int
 */
int **alloc_grid(int width, int height)
{
	int **gout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gout = malloc(height * sizeof(int *));
	if (gout == NULL)
	{
		free(gout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gout[i] = malloc(width * sizeof(int));
		if (gout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gout[i]);
			free(gout);
			return (NULL);
		}
	}
	i = 0;

	while (i < height)
	{
		j = 0;

		while (j < width)
		{
			gout[i][j] = 0;
			j++;
		}
		i++;
	}

	return (gout);
}
