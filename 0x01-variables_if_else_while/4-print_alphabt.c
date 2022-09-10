#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha;


	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
		{
			continue;
		}
		printf("%c", alpha);
	}
	printf("\n");
	return (0);
}
