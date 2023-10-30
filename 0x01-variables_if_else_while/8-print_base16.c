#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: executing more for-loops with char
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	char bases;

	for (bases = '0'; bases <= 'F'; bases++)
	{
		putchar(bases);
	}

	{
		putchar('\n');
	}

	return (0);
}
