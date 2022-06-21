/**
 * _memcpy - function
 * @dest:char
 * @src:char
 * @n: char
 * Return:char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

		unsigned int a = 0;

while (a < n)
{
*(dest + a) = *(src + a);
a++;
}
return (dest);
}
