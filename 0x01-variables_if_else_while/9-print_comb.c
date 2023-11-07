#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: executing a nested for loop
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int alpha;
	int beta;

	for (alpha = 0; alpha < 10; alpha++)
	{
		for (beta = 0; beta < 10; beta++)
		{
			putchar(alpha + '0');
			putchar(',');
			putchar(beta + '0');
			putchar(' ');
		}
	}

	return (0);
}
