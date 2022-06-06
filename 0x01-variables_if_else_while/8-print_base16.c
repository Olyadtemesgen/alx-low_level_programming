#include <stdio.h>
/**
 * main -it tries to print hex files
 * Return: 0 on success
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
