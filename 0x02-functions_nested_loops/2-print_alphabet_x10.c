#include "main.h"

/**
 * print_alphabet_x10 - function that print the alphabet 10 time in lower case
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
