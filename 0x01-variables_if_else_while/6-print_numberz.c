#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: executing loop with putchar only
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int con;

	for (con = '0'; con <= '9'; con++)
	{
		putchar(con);
	}

	{
		putchar('\n');
	}

	return (0);
}
