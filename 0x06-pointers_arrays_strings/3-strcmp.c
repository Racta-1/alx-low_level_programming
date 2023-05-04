#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first input string
 * @s2: second input string
 * Return: 0 if s1 and s2 are equal,
 * another number if not equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (diff == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		diff = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (diff);
}
