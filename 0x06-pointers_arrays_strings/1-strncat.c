/**
 *_strncat - this return
 *@dest: char 1
 *@src: char 2
 *@n: integer
 *Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[b])
	{
		if (b < n)
		{
			dest[a] = src[b];
			a++;
		}
		b++;
	}
	return (dest);
}


