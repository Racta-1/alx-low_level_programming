#include <stdio.h>

/**
 * times_table - prints the 9 times table
 * starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, times;
	
	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			times = a * b;
			_putchar(44);
			_putchar(32);
			if (times <= 9)
			{
				_putchar(32);
				_putchar(times + 48);
			}
			else
			{
				_putchar((times / 10) + 48);
				_putchar((times % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
