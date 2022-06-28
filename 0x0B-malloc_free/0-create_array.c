#include "main.h"
#include <stdlib.h>
/**
 * create_array -it creates an array of chars.
 * @size:it is the size of the array.
 * @c: Variabl
 * Return: cr
 */
char *create_array(unsigned int size, char c)
{
	char *cha;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cha = malloc(sizeof(c) * size);

	if (cha == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		cha[i] = c;
		i++;
	}
	return (cha);
}
