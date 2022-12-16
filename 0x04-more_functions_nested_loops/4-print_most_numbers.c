#include "main.h"

/**
* print_most_numbers - a function that prints the numbers, from 0 to 9
* followed by a new line
* Do not print 2 and 4
*
* Return: void
*/
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c + '0');
		_putchar('\n');
	}
}
