#include <stdio.h>

/**
 * main - printing alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
3-print_alphabets.c	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
