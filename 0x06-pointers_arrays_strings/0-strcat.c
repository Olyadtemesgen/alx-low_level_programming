#include "main.h"
/**
 * _strcat - string catastranoroooro
 * @dest:catastrator
 * @src:catastered
 * Return:null
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}

