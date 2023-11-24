#include "main.h"

/**
 * flip_bits - counts the number of bits number that we want to change
 * to get from one number to another
 * @n: 1st number
 * @m: 2rd number
 *
 * Return: number of bits that changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curent;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curent = exclusive >> i;
		if (curent & 1)
			count++;
	}

	return (count);
}
