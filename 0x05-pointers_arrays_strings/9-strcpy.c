#include "main.h"
/**
 * _strcpy - it is a function
 * @dest: attribute1
 * @src: add it too
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');
	return (dest);
}

