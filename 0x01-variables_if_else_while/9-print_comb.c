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

	for (smh = 0; smh <= 9; smh++)
	{
		if (smh == 9)
		{
			putchar(smh + '0');
		}
		else
		{
			putchar(smh + '0');
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
