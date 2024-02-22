#include <stdio.h>
#include "main.h"

/**
 * _abs - prints the absolute value of an integer to stdout
 * @a: The character to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int a)
{
	return ((a < 0) ? (-a) : (a));
}
