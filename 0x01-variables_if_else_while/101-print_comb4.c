#include <stdio.h>

/**
 * main - entry point
 *
 * Return: integer
 */
int main(void)
{
	int first = 0, second = 0, third = 0;

	for (first = 0; first <= 9; first++)
	{
		for (second = first + 1; second <= 9; second++)
		{
			for (third = second + 1; third <= 9; third++)
			{
			putchar(first + '0');
			putchar(second + '0');
			putchar(third + '0');
			if (first == 7 && second == 8 && third == 9)
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
