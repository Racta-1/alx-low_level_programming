#include <stdio.h>

/**
 * print_last_digit: Prints the last digit of
 * number
 *
 * @num: the input integer number
 * Return: last digit
 */

int print_last_digit(int num)
{
	int last;

	last = num % 10;
	if (last < 0)
	{
		putchar(-last + 48);
		return (-last);
	}
	else
	{
		putchar(last + 48);
		return (last);
	}
}
