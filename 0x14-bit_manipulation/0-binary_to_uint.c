#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, x;

	if (!b || !*b)
		return (0);

	num = x = 0;
	while (b[x])
	{
		if (b[x] > 49)
			return (0);
		else if (b[x] == 49)
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		x++;
	}
	return (num);
}
