#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - the method
 * @ptr: arg 1
 * @old_size: int arg 2
 * @new_size: int arg 3
 * Return: a pointer 
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	i = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return ('\0');

		return (new_ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return ('\0');
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return ('\0');

	while (i < old_size)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
		i++;
	}

	free(ptr);
	return ((void *)new_ptr);
}
