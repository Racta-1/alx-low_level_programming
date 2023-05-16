#include "main.h"
/**
 * create_array - function that creates an array of chars, and initializes
 * it with a specifc char
 * @size: size of the array
 * @c: a charcter
 * Return: NULL if size=0; a pointer to the array if NULL fails
 */
char *create_array(unsigned int size, char c)
{
	char *cha;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cha = malloc(sizeof(c) * size);

	if (cha == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cha[i] = c;

	return (cha);
}

