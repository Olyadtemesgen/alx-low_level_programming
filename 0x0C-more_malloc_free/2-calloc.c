#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: members number(count)
 * @size: another argument or parameter
 * Return: pointer to the allocated memory (SUCCESS)
 * NULL if @nmemb or @size is 0 (FAILURE)
 * NULL if insufficient memory was available (FAILURE)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	i = 0;

	if (nmemb == 0 || size == 0)
		return ('\0');
	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return ('\0');

	while (i < nmemb * size)
	{
		pointer[i] = 0;
		i++;
	}
	return ((void *)pointer);
}
