/**
 * _strcmp - string
 * @s1: char 1
 * @s2: char 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;

while (s1[a] != '\0' && s2[a] != '\0')
{
if (s1[a] != s2[a])
return (s1[a] - s2[a]);
a++;
}
return (s1[a] - s2[a]);
}



