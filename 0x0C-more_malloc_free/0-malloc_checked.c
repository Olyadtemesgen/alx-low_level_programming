#include "main.h"
#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
/**
 * malloc_checked - it returns a pointer of malloc
 * @pointer: it is a pointer
 * @b:an argument
 *return:pointer
 */
void *malloc_checked(unsigned int b)
{
void *pointer;
pointer = malloc(b);
if (pointer == NULL)
exit(98);
return (pointer);
}
