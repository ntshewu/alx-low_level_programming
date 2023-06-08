include "main.h"

/**
 * get_bit - returns value of a bit at given index
 * @n: number to get
 * @index: index
 *
 * Return: value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
