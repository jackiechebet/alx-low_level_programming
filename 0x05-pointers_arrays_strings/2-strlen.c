#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int n = 1, sum = 0;
	char len = s[0];

	while (len != '\0')
	{
		sum++;
		len = s[n++];
	}
	return (sum);
}
