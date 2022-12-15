#include "main.h"

/**
* _isalpha -> checks for alphabetic character
*
* @c: a character to be checked
* Return: 1 if c is a letter, lowercase or uppercase. Return 0 otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
