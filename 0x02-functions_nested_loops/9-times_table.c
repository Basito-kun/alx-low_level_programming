#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0.
 * @void: The character to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set to appropriately.
 */

void times_table(void)
{
	/* creating variables for the inner and outer loop and their product */
	int ying, yang, zen;

	for (ying = 0; ying <= 9; ying++)
	{
		for (yang = 0; yang <= 9; yang++)
		{
			zen = ying * yang;

			if (zen > 9)
			{
				putchar(zen / 10 + 48);
				putchar(zen % 10 + 48);
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar(zen + 48);
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
		}

		printf("\n");
	}
}

