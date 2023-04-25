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
		putchar(48);
		for (b = 1; b <= 9; b++)
		{
			times = a * b;
			putchar(44);
			putchar(32);
			if (times <= 9)
			{
				putchar(32);
				putchar(times + 48);
			}
			else
			{
				putchar((times / 10) + 48);
				putchar((times % 10) + 48);
			}
		}
		putchar('\n');
	}
}
