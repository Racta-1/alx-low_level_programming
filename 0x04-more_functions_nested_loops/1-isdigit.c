#include "main.h"
#include <stdio.h>
/**
 * _isdigit - a function that checks for a digit
 * @c: input number as ASCII character
 *
 * Return: 1 if the number is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
