#include <stdio.h>
  
/**
 * main - printing alphabet in uppercase and lowercase
 * Return: Always 0
 */
int main(void)
{
	char lowercase;
	char uppercase;

        for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
        {
                putchar(lowercase);
        }
        for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
        {
                putchar(uppercase);
        }	
	putchar('\n');
        return (0);
}
