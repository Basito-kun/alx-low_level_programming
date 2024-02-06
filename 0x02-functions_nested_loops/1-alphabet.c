#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: working with header files(printing a-z)
 *
 * Return: Always 0 (success)
 */

/**
 * print_alphabet - prints the lower case alphabets with putchar only to stdout
 * @void: The character to print.
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
