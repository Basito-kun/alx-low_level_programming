#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: executing a loop in reverse?
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}

	{
		putchar('\n');
	}

	return (0);
}
