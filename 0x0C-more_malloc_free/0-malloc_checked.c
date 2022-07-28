#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocate memoery using malloc
 * @b: The number of bytes to be allocated
 * Return: A pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc (b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
