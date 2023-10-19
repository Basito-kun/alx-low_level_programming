#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: executing a for loop twice!
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}

	{
		putchar('\n');
	}

	return (0);
}
