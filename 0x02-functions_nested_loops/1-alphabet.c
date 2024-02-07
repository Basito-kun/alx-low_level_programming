#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - writes the char ichi to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char ichi;

	for (ichi = 'a'; ichi <= 'z'; ichi++)
	{
		_putchar(ichi);
	}

	_putchar('\n');
}
