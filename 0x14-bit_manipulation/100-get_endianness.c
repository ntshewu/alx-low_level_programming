#include "main.h"

/**
 * get_endianness - func that checks endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *e = (char *) &i;

	return (*e);
}
