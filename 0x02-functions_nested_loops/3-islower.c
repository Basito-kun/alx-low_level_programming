#include <stdio.h>
#include "main.h"

/**
 * _islower - checks whether the character is a lowercase letter
 * @c: The character to print
 *
 * Return: 1 if true.
 * On error, 0 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0); /* Returns 0 if character is nor lowercase */

}

