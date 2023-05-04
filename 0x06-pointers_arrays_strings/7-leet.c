#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string.
 * Return: the pointer to dest.
 */

char *leet(char *str)
{
	int i = 0, j;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(str + i) == low_letters[j] || *(str + i) == upp_letters[j])
			{
				*(str + i) = numbers[j];
				break;
			}
		}
		i++;
	}

	return (str);
}
