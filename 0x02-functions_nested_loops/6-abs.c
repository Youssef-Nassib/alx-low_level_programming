#include "main.h"

/**
 * _abs - function to find the absolut value of a number
 * @i: function parametter
 * Return: -i or i
 */
int _abs(int i)
{

	if (i < 0)
		return (-i);
	else if (i > 0)
	{
		return (i);
	}
	return(0);
}
