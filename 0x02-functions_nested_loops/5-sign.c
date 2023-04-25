#include <stdio.h>

/**
 * print_sign - Determines if the input number 
 * is greater than zero, zero 
 * or less than zero
 *
 * @num: The number as an integer
 *
 * Return: 1 (greater than zero)
 * 	0 (zero)
 * 	-1 ( less than zero)
 */
int print_sign(int num)
{
	if (num > 0)
	{
		putchar(43);
		return (1);
	}
	else if (num < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
	putchar('\n');
}
