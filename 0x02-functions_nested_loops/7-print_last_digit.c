#include "main.h"

/**
 * print_last_digit - entery point
 * @para: integre parameter
 *
 * Return: integer
 */
int print_last_digit(int para)
{
	int last = para % 10;

	if (last < 0)
	{
		last *= -1;
		_putchar(last + '0');
		return (last);
	}
	_putchar(last + '0');
	return (last);
}

