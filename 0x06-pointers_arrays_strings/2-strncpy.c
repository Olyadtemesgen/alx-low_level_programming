/**
 * _strncpy - return string
 * @dest: character
 * @src: return cr
 * @n:int
 * Return: answer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (dest[b])
	{
		if (b < n && src[b] != 0)
		{
			dest[b] = src[b];
		}
		else
		{
			dest[b] = dest[b];
		}
		b++;
	}
	return (dest);
}



