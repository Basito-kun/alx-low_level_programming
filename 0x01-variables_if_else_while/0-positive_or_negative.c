#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go there */

/**
 * main - Entry point
 *
 * Description: executing an if...else statement
 *
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is postive", n);
	} else if (n == 0)
	{
		printf("%d is zero", n);
	} else if (n < 0)
	{
		printf("%d is negative", n);
	} else
	{
		printf("");
	}
	/* your code goes there */
	return (0);
}
