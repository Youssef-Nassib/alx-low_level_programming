#include "main.h"

/**
 * get_bit - returns the value of a bit at some index in a decimal number
 * @n: number to search for a unsigned long
 * @index: index of the bit that we have
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;


	if (index > 63)
		return (-1);

	bitvalue = (n >> index) & 1;

	return (bitvalue);
}
