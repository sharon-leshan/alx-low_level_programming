#include "main.h"
#include <ctype.h>

/**
 * _islower - checks to see if letter is lowercase
 * @c: integer input
 *
 * Return: 1 to show lowercase, 0 to show not lowercase
 */
int _islower(int c)
{
	int i;

	for  (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
