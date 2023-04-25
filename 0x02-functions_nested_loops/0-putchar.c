#include <stdio.h>
/**
 * main - Prints "_putchar" as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int list[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int count, size;

	size = sizeof(list) / sizeof(list[0]);

	for(count = 0; count < size; count++)
	{
		putchar(list[count]);
	}
	putchar('\n');
	return (0);
}
