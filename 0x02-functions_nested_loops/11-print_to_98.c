#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers between n to 98.
 * @n: The character to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)

	if (n == 98)
		printf("%d", n);
	else
		printf("%d, ", n);
}

