#include <stdio.h>
#include <stdlib.h>
/**
 * main - it  print the result of the multiplication, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char const *argv[])
{
(void)argc;
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
