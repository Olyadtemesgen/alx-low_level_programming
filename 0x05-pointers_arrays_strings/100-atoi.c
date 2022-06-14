/**
 * _atoi - this is a fucntion
 * @s:the fxn takes s argument
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int a = 0;
	int c = 1;
	int b;

	do {
		if (*s == '-')
		{
			c *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			a = a * 10 + (*s - '0');
		}
		else if (a > 0)
		{
			break;
		}
	} while (*s++);
	b = a * c;
	return (b);
}
