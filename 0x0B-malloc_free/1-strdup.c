#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: string
 * Return: NULL if str=NULL; a pointer to the dupliated string
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	string = (char *)malloc(sizeof(char) * (i + 1));

	if (string == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		string[j] = str[j];

	return (string);
}
