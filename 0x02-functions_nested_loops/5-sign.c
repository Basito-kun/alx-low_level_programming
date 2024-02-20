#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number stdout
 * @n: the character to print
 *
 * Return: On success 1.
 * On error, -1 is retuned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else
	{
		return (0);
	}
}
