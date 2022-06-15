/**
 * cap_string - string
 * @s:string
 * Return: char
 */
char *cap_string(char *s)
{
	int a = 0;
	int o;

	while (s[a])
	{
		while (!(s[a] >= 97 && s[a] <= 122))
			a++;
		o = a - 1;

		if (s[o] == ' ' || s[o] == '\t' || s[o] == '\n' || s[o] == ',' ||
				s[o] == ';' || s[o] == '.' || s[o] == '!' ||
				s[o] == '?' || s[o] == '"' || s[o] == '(' ||
				s[o] == ')' || s[o] == '{' || s[o] == '}' || o == 0)
			s[a] -= 32;
		a++;
	}
	return (s);
}

