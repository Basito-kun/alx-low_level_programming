#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number in stdout
 * @p: The character to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int p)
{
	int lastdigit = p % 10;

	lastdigit = (lastdigit < 0) ? lastdigit * -1 : lastdigit;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
