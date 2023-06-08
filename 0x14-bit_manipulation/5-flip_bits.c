/**
 * flip_bits - ret nr of bits to flip to get from one bit to another
 * @n: 1st nr
 * @m: 2nd nr
 *
 * Return: bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int xor;

	xor = n ^ m;

	while (xor)
	{
		bits += xor & 1;
		xor >>= 1;
	}

	return (bits);
}
