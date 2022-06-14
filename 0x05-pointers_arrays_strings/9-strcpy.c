#include "main.h"
/**
 * _strcpy - it is a function
 * @dest: attribute1
 * @src: add it too
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	do {
		dest[a] = src[a];
		a++;
	} while (src[a] != '\0');
	return (dest);
}

