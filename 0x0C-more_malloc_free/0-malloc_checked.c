#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function to allocate memoery using malloc
 * @b: The number of bytes
 * Return: return pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc (b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
