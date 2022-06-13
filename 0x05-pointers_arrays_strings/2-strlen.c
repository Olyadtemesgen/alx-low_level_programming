/**
 * _strlen - finds srting length
 * @s:string
 * Return: integer
 */
int _strlen(char *s)
{
int a;

for (a = 0; *s != '\0'; ++s)
a += 1;
return (a);
}



