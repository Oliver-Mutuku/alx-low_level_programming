#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Printing a number
*
* Return: 0
*/

int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf(Last digit of % d is % d);
	if (last_digit > 5)
	{
		printf("and is greater than 5\n", n, last_digit);
	}
	if (last_digit == 0)
	{
		printf("and is 0\n", n, last_digit);
	}
	if (last_digit < 6 && last_digit != 0)
	{
		printf("and is less than 6 and not 0\n", n, last_digit);
	}
	printf("\n");
	return (0);
}
