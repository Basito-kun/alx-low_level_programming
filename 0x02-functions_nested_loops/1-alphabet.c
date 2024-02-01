#include <stdio.h>
#include "main.h"
#if header
	#include "main.h"
#elif header2
	#include "main2.h"
#endif
/**
 * main - Entry point
 *
 * Description: working with header files(printing a-z)
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();

	return (0);
}

/**
 * print_alphabet - prints the lower case alphabets with putchar only to stdout
 * @void: the character to print.
 */
void print_alphabet(void)
{
	char ichi;

	for (ichi = 'a'; ichi <= 'z'; ichi++)
	{
		putchar(ichi);
	}

	putchar('\n');
}
