/**
 * string_toupper - function
 * @s: character
 * Return: character
 */
char *string_toupper(char *s)
{
int a;

for (a = 0; s[a]; a++)
{
if (s[a] >= 97 && s[a] <= 122)
s[a] = s[a] - 32;
}
return (s);
}
