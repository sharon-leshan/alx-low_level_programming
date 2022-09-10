#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int numer = 0;


	while (numer <= 9)
	{
		putchar(numer +  '0');
		numer++;
	}
	putchar('\n');
	return (0);
}
