#include "main.h"
/**
 * more_numbers - print 10times numbers
 *
 * Return: always succesed
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
