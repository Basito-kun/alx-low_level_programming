#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: executing a nested for loop
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int smh;

	for (smh = 0; smh < 10; smh++)
	{
		putchar(smh + '0');
		putchar(',');
		putchar(' ');
	}

	return (0);
}
