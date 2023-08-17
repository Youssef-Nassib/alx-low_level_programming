#include "main.h"

/**
 * print_line - function print line with _
 * @n: numbers of times the charachter
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
	_putchar('\n');
	}
}
