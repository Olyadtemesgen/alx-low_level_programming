#include "main.h"
#include <stdlib.h>
/**
 * str_concat -it concatenates two strings.
 * @s1: argument 1 
 * @s2: argument 2
 * Return: pointer of the concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
	
		while (s2[j] != '\0')
		{
			strout = malloc(sizeof(char) * (i + j + 1));
			j++;
		}
		i++;
	}
	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strout[k] = s1[k];
	l = j;
	for (j = 0; j <= l; k++, j++)
		strout[k] = s2[j];

	return (strout);
}
