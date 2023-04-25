#include <stdio.h>

/**
 * jack_bauer - print every minute
 * of the day of Jack Bauer, starting
 * from 00:00 to 23:59
 *
 * Return: no return
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 51; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (a >= 50 && b > 52)
						break;
					putchar(a);
					putchar(b);
					putchar(58);
					putchar(c);
					putchar(d);
					putchar('\n');
				}
			}
		}
	}
}
