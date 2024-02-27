#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day using putchar only to stdout
 * @void: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			/* printing the hours and separator */
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');

			/* printing the minutes */
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');

			/* printing next minute on a new line */
			_putchar('\n');
		}
	}
}

