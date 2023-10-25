#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: execution of for loop (advance)
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	if (alpha != 'q' && alpha != 'e')
	{
		putchar(alpha);
	}

	{
		putchar('\n');
	}

	return (0);
}
