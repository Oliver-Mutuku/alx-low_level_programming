#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase;

	lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'e' && lowercase != 'q')
			putchar(lowercase);
		lowercase++;
	}
	putchar(lowercase);
	return (0);
}
