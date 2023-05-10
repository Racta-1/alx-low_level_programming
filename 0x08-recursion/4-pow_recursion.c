#include "main.h"

/**
 * _pow_recursion - function returns the value of x rasied to the power of y
 * @x: the input number - base
 * @y: the input exponential
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
