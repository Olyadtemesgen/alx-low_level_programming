#include <stdio.h>
/**
  * main - Prints the alphabet except the letters q and e.
  * Return: 0 on success
  */
int main(void)
{
char leqande = 'a';
while (leqande <= 'z')
{
if (leqande !='q' && leqande != 'e')
{
putchar(leqande);
}
leqande++;
}
putchar('\n');
return (0);
}
