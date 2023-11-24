#include "main.h"

/**
 * print_binary - prints the binary number that equivalent of a decimal number
 * @n: number that we have to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, counte = 0;
	unsigned long int curent;


	for (i = 63; i >= 0; i--)
	{
		curent = n >> i;

		if (curent & 1)
		{
			_putchar('1');
			counte++;
		}
		else if (counte)
			_putchar('0');
	}
	if (!counte)
		_putchar('0');
}
