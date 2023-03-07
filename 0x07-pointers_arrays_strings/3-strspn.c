#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: string containing the list of characters to match in s
 * Return: returns the number of characters in s
 * consisting of only characters fro accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				i++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}

