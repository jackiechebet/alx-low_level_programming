#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char input
 * Return: NULL if size = 0, else returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
}

