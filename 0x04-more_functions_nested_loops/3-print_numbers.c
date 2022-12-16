#include "main.h"

/**
* print_numbers - a function that prints the numbers, from 0 to 9,
* followed by a new line.
*
* Return: 10
*/
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
