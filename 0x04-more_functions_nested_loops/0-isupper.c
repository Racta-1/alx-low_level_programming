#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: integer that represents ascii character input
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
