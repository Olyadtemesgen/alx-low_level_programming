#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - it frees an rray.
 * @grid: a multidimensional array .
 * @height: height
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		while (height > 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: an argument
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **wordout;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	wordout = malloc((height + 1) * sizeof(char *));
	if (wordout == NULL || height == 0)
	{
		free(wordout);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				wordout[i] = malloc((c - a1 + 2) * sizeof(char));
				if (wordout[i] == NULL)
				{
					ch_free_grid(wordout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			wordout[i][j] = str[a1];
		wordout[i][j] = '\0';
	}
	wordout[i] = NULL;
	return (wordout);
}
