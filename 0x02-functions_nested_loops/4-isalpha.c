#include <stdio.h>

/**
 * _isalpha - Shows 1 if the input is a letter
 * Other cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters. O for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
