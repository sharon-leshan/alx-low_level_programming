#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabet
 * @c: integer input
 *
 * Return: 1 (Success) 0 (otherwise)
 */
int _isalpha(int c)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
			return (1);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (alpha == c)
			return (1);
	}
	return (0);
}
