#include <stdio.h>

/**
 * main - Prints reversed alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
