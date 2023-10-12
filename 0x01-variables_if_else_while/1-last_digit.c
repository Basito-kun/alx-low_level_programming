#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go there */

/**
 * main - Entry point
 *
 * Desription: executing another if...else statement
 *
 * Return: Always 0 (success)
 */
/* betty sytle doc for funtion main goes there */
int main(void)

{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);

	if (last_digit > 5)
	{
		printf("%d and is greater than 5 \n", last_digit);
	} else if (last_digit == 0)
	{	printf("%d and is 0 \n", last_digit);
	} else if (last_digit < 6 && last_digit != 0)
	{
		printf("%d and is less than 6 and not 0 \n", last_digit);
	}
	/* your code goes there */
	return(0);
}
