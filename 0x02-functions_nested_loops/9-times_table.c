#include "main.h"

/**
 * times_table - prints the 9 times table
 * starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int a, b, prod;
	
	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			prod = a * b;
			_putchar(',');
			_putchar(' ');
			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
