#include "main.h"

/**
 * print_sign - checks and prints sign
 * @n: integer input
 *
 * Return: 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

		_putchar('-');
		return (-1);

}
