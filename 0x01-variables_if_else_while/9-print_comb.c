#include <stdio.h>

/**
 * main - print all possible combination of single digit number
 * i.e 0 - 9 followed by space and comma using ASCII code
 *
 * Always: Success (0)
 */
int main(void)
{
	int i;
	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
