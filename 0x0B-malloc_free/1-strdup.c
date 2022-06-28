#include "main.h"
#include <stdlib.h>
/**
 * _strdup -it is a function returning number
 * @str: a variable
 * Return:a pointer 
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
	{
		strout = (char *)malloc(sizeof(char) * (i + 1));
		i++;
	}
	if (strout == NULL)
		return (NULL);
	j = 0;

	while (j <= i)
	{
		strout[j] = str[j];
		j++;
	}

	return (strout);
}
