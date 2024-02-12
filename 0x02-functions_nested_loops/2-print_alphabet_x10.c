#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - writes the character ni to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char ni;

	do {
		for (ni = 'a'; ni <= 'z'; ni++)
	{
		putchar(ni);
	}
	putchar('\n');
	i++;
	} while (i < 10);
}
