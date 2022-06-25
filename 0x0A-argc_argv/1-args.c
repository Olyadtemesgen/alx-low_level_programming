#include <stdio.h>
/**
 * main - it prints number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
