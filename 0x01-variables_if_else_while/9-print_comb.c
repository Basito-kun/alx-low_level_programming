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
	int ko = 9;

	for (smh = 0; smh < 9; smh++)
	{
		putchar(smh + '0');
		putchar(',');
		putchar(' ');
	}

	{
		putchar(ko + '0');
	}

	return (0);
}
