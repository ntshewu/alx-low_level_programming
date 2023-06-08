include "main.h"

/**
 * get_bit - returns value of a bit at given index
 * @n: number to get
 * @index: index
 *
 * Return: he value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}
