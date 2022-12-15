#include "main.h"

/**
 * print_sign --> prints sign of number
 *
 *@n: - the number to be checked
 * Return: 1 for positive number, 0 if number is zero
 * and -1 for negative numbers
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
