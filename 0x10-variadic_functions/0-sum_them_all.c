#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *sum_them_all - it is the method that sum all he arguments
 *@n:arguments number
 *Return:int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	int sum = 0;
	int i;

	if (n == 0)
		return (0);
	va_start(va, n);
	int i = 0;

	while (i < n){
		sum += va_arg(va, int);
		i++;
	}
	va_end(va);
	return (sum);
}
