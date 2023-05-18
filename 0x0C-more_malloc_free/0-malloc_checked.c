#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - llocates memory using malloc,return memory
 * @b: bytes size
 *
 * Return: Returns a pointer to the allocated memory
 * if malloc fails, show status value 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
