#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lower = 'a';

	char upper = 'A';

	while (lower <= 'z')
	{
		printf("%c", lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		printf("%c", upper);
		upper++;
	}
	printf("\n");
	return (0);
}
