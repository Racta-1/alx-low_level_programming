#include <stdio.h>

/**
 * _abs - calculates the absolute number
 * of an integer
 *
 * @num: input number as integer
 *
 * Return: absolute value
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num);
	}
	else
	{
		return (num * -1);
	}
}
