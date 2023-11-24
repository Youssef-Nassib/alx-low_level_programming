#include "main.h"

/**
 * get_endianness - checks if a machine is a small or big endian
 * Return: 0 if it's big, 1 if it's lottle
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
