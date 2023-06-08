#include "main.h"

/**
 * clear_bit- ets the value of a bit to 0 at a given index
 * @n: pointer to value
 * @index:  index, starting from 0 to set
 *
 * Return: 1 if it worked, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);
}
