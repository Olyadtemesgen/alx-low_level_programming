/**
 *swap_int - it swaps numbers
 *@a: a pointer
 *@b: a pointer
 *Return: null
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}
