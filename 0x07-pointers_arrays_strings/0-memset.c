/**
 * _memset - a function
 * @s:char
 * @b:char
 * @n:int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int count = 0;
while (count < n)
{
*(s + count) = b;
count++;
}
return (s);
}
