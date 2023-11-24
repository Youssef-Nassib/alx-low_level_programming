#include "main.h"

/**
 * clear_bit - sets the value of a given bit number to number 0
 * @n: pointer to the number that we want change
 * @index: index of the bit we want to clear
 *
 * Return: 1 for success, -1 for faill
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
