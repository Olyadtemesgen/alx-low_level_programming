/**
 * reverse_array - it reverse array
 * @a: char
 * @n: int
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int k;

k = n - 1;
for (i = 0; i < n / 2; i++)
{
j = a[k];
a[k] = a[i];
a[i] = j;
k--;
}
}
