/**
 * print_diagsums - a function returning diagram
 * @a: integer
 * @size: integer
 * Return: void
 */
#include <stdio.h>
void print_diagsums(int *a, int size)
{
int i = 0;
int val = 0;
int sum1 = 0;
int sum2 = 0;

for  (i = 0; i < (size * size); i++)
{
val = *(a + i);
sum1 = sum1 + val;
i = i + size + 1;
}
i = size - 1;
while (i < (size * size - 1))
{
val = *(a + i);
sum2 = sum2 + val;
i = i + (size - 1);
}
printf("%d, %d\n", sum1, sum2);
}
