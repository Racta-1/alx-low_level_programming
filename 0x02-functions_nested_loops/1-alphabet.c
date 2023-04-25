#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;
	
	for(i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	_putchar('\n');
}
