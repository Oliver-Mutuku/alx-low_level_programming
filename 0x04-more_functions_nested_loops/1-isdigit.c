#include "main.h"

/**
* _isdigit - write a function that check for a digit (0 through 9).
* @c: the character to be checked
*
* Return: 1 if true, 0 if otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
