#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha = 'a';


	while (alpha <= 'z')
	{
		printf("%c", alpha);
		alpha++;
	}
	printf("\n");
	return (0);
}
