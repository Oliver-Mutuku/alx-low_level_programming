#include "main.h"

/*
* _isdigit - check if a character is a digit
* @c: the character to be checked
*
* Return: 1 if true, 0 if otherwise
*/
int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
		return (1);
	else
		return (0);
}
